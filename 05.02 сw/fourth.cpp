#include <iostream>
#include <tchar.h>
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");
    _TCHAR someData[] = _TEXT("gLet");
    wcout << "Begin: " << someData << endl;
    int count = 0;
    for (size_t i = 0; i < _tcslen(someData); i++) {
        _TCHAR b = _totlower(someData[i]);
        if (b == _TEXT('�') || b == _TEXT('�') || b == _TEXT('�') || b == _TEXT('�') || b == _TEXT('�') ||
            b == _TEXT('�') || b == _TEXT('�') || b == _TEXT('�') || b == _TEXT('�') ||
            b == _TEXT('�')) {
            ++count;
        }
    }
    wcout << "Count: " << count << endl;
    system("pause");
}