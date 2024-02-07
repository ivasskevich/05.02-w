#include <iostream>
#include <tchar.h>
using namespace std;

void main()
{
    _TCHAR someData[] = _TEXT("Lesson-mun.234//task||4send");
    wcout << "Start:" << someData << endl;

    int letters = 0, nums = 0, symb = 0;

    for (size_t i = 0; i < _tcslen(someData); i++)
    {
        if (someData[i] > 48 && someData[i] < 57) {
            nums++;
        }
        else if (someData[i] >= 65 && someData[i] <= 90 || someData[i] >= 97 && someData[i] <= 122) {
            letters++;
        }
        else {
            symb++;
        }
    }
    wcout << "letters: " << letters << endl;
    wcout << "numers: " << nums << endl;
    wcout << "symbols: " << symb << endl;
    system("pause");
}