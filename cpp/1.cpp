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

/*
// 1-3 문자형 자료형과 bool형 자료형
#include <iostream>

using namespace std;

int main() {
    //bool : 0 혹은 1
    
    bool a = 0;
    bool b = 1;
    bool c = 10;

    cout << "a = " << a << " b = " << b << " c = " << c << endl;

    return 0;
}
*/

// 1-4 const 제한자와 데이터형 변환
#include <iostream>

using namespace std;

int main() {
    // 데이터형 변환
    int a = 3.141592;
    cout << a << endl;

    // 강제적으로 데이터형 변환
    // typeName(a) (typeName)a
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;

    // C++
    // static_cast<typeName>
    cout << (int)ch << " " << int(ch) << " " << static_cast<int>(ch) << endl;

    return 0;
}