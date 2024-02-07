#include <iostream>
#include <tchar.h>
using namespace std;

bool isPalindrome(const _TCHAR*);

int main() {
    _TCHAR someData[] = _TEXT("Palind");
    wcout << "Begin: " << someData << endl;

    if (isPalindrome(someData))
        wcout << "This is palindrome" << endl;
    else
        wcout << "This is not palindrome" << endl;

    system("pause");
    return 0;
}

bool isPalindrome(const _TCHAR* c) {
    int length = _tcslen(c);
    for (int i = 0; i < length / 2; ++i) {
        if (c[i] != c[length - 1 - i])
            return false;
    }
    return true;
}