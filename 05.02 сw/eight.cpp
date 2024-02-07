#include <iostream>
#include <tchar.h>
using namespace std;

void insertCharacter(_TCHAR* c, size_t pos, _TCHAR ins) {
    int length = _tcslen(c);
    if (pos >= 0 && pos <= length) {
        for (int i = length; i > pos; i--) {
            c[i] = c[i - 1];
        }
        c[pos] = ins;
    }
}

void main() {
    _TCHAR someData[] = _TEXT("Be or  not to be");
    wcout << "Begin: " << someData << endl;
    _TCHAR insElem = _T('?');
    size_t posIns = 10;

    insertCharacter(someData, posIns, insElem);
    wcout << "Added: " << insElem << ", result: " << someData << endl;
}