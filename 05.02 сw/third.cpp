#include <iostream>
#include <tchar.h>
using namespace std;

int main()
{
    _TCHAR someData[] = _TEXT("Never regret anything that made you smile");
    wcout << "Begining: " << someData << endl;
    int ñount = 0;
    bool inWord = false;

    for (int i = 0; i < _tcslen(someData); i++) {
        if (iswalpha(someData[i])) {
            if (!inWord) {
                inWord = true;
                ñount++;
            }
        }
        else
            inWord = false;
    }
    wcout << "Word num: " << ñount << endl;
    system("pause");
}