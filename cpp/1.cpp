// 1-1 변수선언과 규칙
/*
#include <iostream>

using namespace std;

int main() {

    
    int a;  // 선언
    a = 7;  // 대입

    int b = 3; // 초기화

    a = 5;
    b = 10;

    // 변수는 사용되기 이전에 정의되어야 한다.
    // int a, b의 주소값을 알고 싶을 때는 cout 에서 &기호를 붙히면 원하는 변수의 주소값을 알 수 있다.
    int a, b;
    cout << "a = " << &a << ", b = " << &b << endl;

    return 0;
}
*/

// 1-2 정수형 자료형과 실수형 자료형
/*
#include <iostream>
#include <climits>
using namespace std;

int main() {

    float a = 3.14;
    int b = 3.14;

    cout << "a = " << a << " b = " << b << endl;
    
    return 0;
}
*/

// 1-3 문자형 자료형과 bool형 자료형
#include <iostream>

using namespace std;

int main() {

    int a = 77;
    char b = a;
    cout << b << endl;

    // 직접 문자를 입력하는 방식은 작은따옴표(' ') 사용.
    // 1. 바로 집어넣기
    char c = 'a';
    cout << c << endl;
    // 2. 변수를 선언하고 집어넣기
    char d;
    d = 'b';
    cout << d << endl;

    return 0;
}