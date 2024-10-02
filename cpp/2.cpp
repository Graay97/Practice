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

    cout << str1[0] << endl;

    return 0;
}