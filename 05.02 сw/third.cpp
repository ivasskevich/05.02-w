#include <iostream>
#include <tchar.h>
using namespace std;

int main()
{
    _TCHAR someData[] = _TEXT("Never regret anything that made you smile");
    wcout << "Begining: " << someData << endl;
    int �ount = 0;
    bool inWord = false;

    for (int i = 0; i < _tcslen(someData); i++) {
        if (iswalpha(someData[i])) {
            if (!inWord) {
                inWord = true;
                �ount++;
            }
        }
        else
            inWord = false;
    }
    wcout << "Word num: " << �ount << endl;
    system("pause");
}