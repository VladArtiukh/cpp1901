#include <iostream>

using namespace std;

int DEC (char* str)
{
    int step = 1;
    int itog = 0;
    char* str2 = str;

    while (*str++ != '\0');
        str--;
    while (str-- != str2)
        if (*str>='0' && *str<='9') {
            itog += (*str-'0') * step;
            step *= 16;
        } else {
            itog+=(*str-'a')*step;
            step *= 16;
        }
    return itog;
}

int main(){
    const int MAX=80;
    char s[MAX];
    cin.getline(s, MAX, '\n');
    cout << DEC(s) << " (10)";
}