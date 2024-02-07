#include <tchar.h>
#include <iostream>
using namespace std;

void main()
{
    _TCHAR someData[] = _TEXT("New project Task");
    wcout << "Start:" << someData << endl;
    for (int i = 0; i < _tcslen(someData); i++) {
        if (someData[i] == _TEXT(' '))
            someData[i] = _TEXT('\t');
    }
    wcout << "Result:" << someData << endl;
    system("pause");
}