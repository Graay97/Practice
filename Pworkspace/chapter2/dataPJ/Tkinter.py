'''
# 1번 방법
import tkinter as tk
from PIL import Image, ImageTk

def on_hover(event):
    # 웃는 얼굴 이미지로 변경
    smiling_image = Image.open("smiling_image.png")
    smiling_photo = ImageTk.PhotoImage(smiling_image)
    image_label.config(image=smiling_photo)
    image_label.image = smiling_photo

def on_leave(event):
    # 원래 이미지로 복원
    original_image = Image.open("original_image.png")
    original_photo = ImageTk.PhotoImage(original_image)
    image_label.config(image=original_photo)
    image_label.image = original_photo

root = tk.Tk()
root.title("예시")

# 원래 이미지 로드
original_image = Image.open("original_image.png")
original_photo = ImageTk.PhotoImage(original_image)

# 이미지 라벨 생성
image_label = tk.Label(root, image=original_photo)
image_label.pack()

# 마우스를 올리면(on_hover) 이미지를 변경하고, 마우스를 떼면(on_leave) 원래 이미지로 복원
image_label.bind("<Enter>", on_hover)
image_label.bind("<Leave>", on_leave)

root.mainloop()
'''

# 2번방법
import tkinter as tk
from PIL import Image, ImageTk, ImageEnhance

def fade_to_smiling(step=0):
    if step <= 10:  # 단계 설정
        # 원래 이미지와 웃는 이미지 사이를 보간 (blend)하여 중간 단계 이미지 생성
        blended_image = Image.blend(original_image, smiling_image, step / 10)
        blended_photo = ImageTk.PhotoImage(blended_image)
        image_label.config(image=blended_photo)
        image_label.image = blended_photo
        # 다음 단계로 50ms 후에 호출
        root.after(25, lambda: fade_to_smiling(step + 1))

def fade_to_original(step=0):
    if step <= 20:  # 단계 설정
        # 웃는 이미지와 원래 이미지 사이를 보간 (blend)하여 중간 단계 이미지 생성
        blended_image = Image.blend(smiling_image, original_image, step / 20)
        blended_photo = ImageTk.PhotoImage(blended_image)
        image_label.config(image=blended_photo)
        image_label.image = blended_photo
        # 다음 단계로 50ms 후에 호출
        root.after(25, lambda: fade_to_original(step + 1))

def on_hover(event):
    fade_to_smiling()

def on_leave(event):
    fade_to_original()

root = tk.Tk()
root.title("예시")

# 원래 이미지와 웃는 이미지 로드
original_image = Image.open("original_image.png").convert("RGBA")
smiling_image = Image.open("smiling_image.png").convert("RGBA")

# 처음에는 원래 이미지를 표시
original_photo = ImageTk.PhotoImage(original_image)
image_label = tk.Label(root, image=original_photo)
image_label.pack()

# 마우스를 올리면 웃는 얼굴로 부드럽게 전환
image_label.bind("<Enter>", on_hover)

# 마우스를 떼면 다시 원래 얼굴로 부드럽게 전환
image_label.bind("<Leave>", on_leave)

root.mainloop()
