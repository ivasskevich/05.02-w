#include <iostream>
#include <tchar.h>
using namespace std;

void removeAllElems(_TCHAR* c, _TCHAR toRemove) {
    size_t length = _tcslen(c);
    size_t ind = 0;
    for (size_t i = 0; i < length; i++) {
        if (c[i] != toRemove) {
            c[ind] = c[i];
            ind++;
        }
    }
    c[ind] = _TEXT('\0');
}

void main() {
    _TCHAR someData[] = _TEXT("Be or not to be");
    _TCHAR a = _TEXT('o');
    wcout << "Begin: " << someData << endl;
    removeAllElems(someData, a);
    wcout << "Delete '" << a << "' , final res: " << someData << endl;
    system("pause");
}