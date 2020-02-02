#include <iostream>
// #include <cstdio>
// #include <cstdlib>
#include <string>
using namespace std;

int main()
{
  cout << "Programma dlya perevoda chisel iz HEX v BIN" << endl;
  string str;
  cout << "Vvedite hex-chislo: ";
  cin >> str;
  cout << endl;
  cout << "Vashe chislo: " << str << endl;
  cout << "Dlina chisla: " <<str.size() << endl;
  for(int i=0; i<str.size(); i++)
  {
    switch(str[i])
       {
             case '0': cout << "0000"; break;
             case '1': cout << "0001"; break;
             case '2': cout << "0010"; break;
             case '3': cout << "0011"; break;
             case '4': cout << "0100"; break;
             case '5': cout << "0101"; break;
             case '6': cout << "0110"; break;
             case '7': cout << "0111"; break;
             case '8': cout << "1000"; break;
             case '9': cout << "1001"; break;
             case 'a': cout << "1010"; break;
             case 'b': cout << "1011"; break;
             case 'c': cout << "1100"; break;
             case 'd': cout << "1101"; break;
             case 'e': cout << "1110"; break;
             case 'f': cout << "1111"; break;
             case '.': cout << ".";break;
             default: cout << "Error" << endl;
        }
  }
  cout << endl;
  system("PAUSE");
  return 0;
}
