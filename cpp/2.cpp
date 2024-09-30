// 2-1 배열과 char 문자열
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