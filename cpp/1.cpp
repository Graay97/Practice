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
#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

    cout << "short는 " << sizeof n_short << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

    cout << "long은 " << sizeof n_long << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;
    
    return 0;
}