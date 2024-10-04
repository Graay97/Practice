// 2-1 배열과 char 문자열
/*
#include <iostream>

using namespace std;

int main() 
{
    // 문자열
    char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    cout << a << endl;
    
    // 효율적인 방법 -> 큰따옴표는 null문자를 포함하고 있기 때문에 원하는 값만 얻을 수 있다.
    char b[] = "hello";

    cout << b << endl;

    return 0;
}
*/

// 2-2 사용자 입력과 string
/*
#include <iostream>

using namespace std;

int main() 
{
    // string의 장점 : 배열을 다른 배열에 통째로 대입 할 수 있다.
    char char1[20];
    char char2[20] = "jauar";
    string str1;
    string str2 = "panda";
    // char1 = char2;
    str1 = str2;

    cout << str1 << endl;       // panda
    cout << str1[0] << endl;    // p

    return 0;
}
*/

/*
// 2-3 구조체
#include <iostream>

using namespace std;

int main() 
{
    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합

    //축구선수
    struct MyStruct
    {
        string name;
        string position;
        int height;
        int weight;
    } B;
    
    MyStruct A = {
        "Son",
        "striker",
        183,
        77
    };

    
    //cout << A.name << endl;
    //cout << A.position << endl;
    //cout << A.height << endl;
    //cout << A.weight << endl;
    

    B = {};

    cout << B.height << endl;

    MyStruct A[2] = {
        {"A", "B", 1, 2},
        {"C", "D", 3, 4}
    };

    cout << A[1].name << endl;

    return 0;
}
*/

/*
// 2-4 공용체와 열거체
#include <iostream>

using namespace std;

int main() 
{
    enum spectrum { red, orange, yello, green,
    blue, violet, indigo, ultraviolet};

    spectrum a = indigo;
    cout << a << endl;

    // 열거체는 기호상수로 관리되기 때문에 산술연산을 적용할 수 없다. 
    spectrum b = red + orange; (X)
    // 열거자들을 정수형에 대입할 때는 int형으로 변환 될 수 있다.
    int c;
    c = blue;
    c = blue + 3;
    cout << c << endl;

    // 열거자들은 아무런 옵션을 지정하지 않으면 0부터 시작해서 1씩 더해지는 정수가 자동으로 저장되지만
    // 명시적으로 대입연산자 이퀄(=)을 이용해서 값을 넣어줄 수 있다.
    enum spectrum1 { red = 0, orange = 2, yello = 4, green,
    blue, violet, indigo, ultraviolet};
    // 열거자들을 초기화 할 때는 반드시 정수여야만 한다.
    // 초기화 하지 않은 열거자들은 이전의 열거자의 값보다 1씩 더한 값을 가지게 된다.
    enum spectrum1 { red = 0, orange = 2, yello = 4, green(5),
    blue(6), violet(7), indigo(8), ultraviolet(9)};

    return 0;
}
*/

/*
// 2-5 포인터와 메모리 해제(1)
#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int* b;

    b = &a;

    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;

    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소" << b << endl;

    *b = *b + 1;
    cout << "이제 a의 값은 " << a << endl;  

    return 0;
}
*/

// 2-6 포인터와 메모리 해제(2)
#include <iostream>

using namespace std;

int main ()
{

    return 0;
}