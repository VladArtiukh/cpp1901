#include <iostream>
using namespace std;
int main(){
int array [10];
int array1 [10];
for(int i = 1; i < 11; i++){
cout << "array[" << i << "] = ";
cin >> array[i];
cout << " " << endl;
}
for(int i = 1; i < 11; i++){
cout << "array[" << i << "] = " << array[i] << endl;
}
int summa = 0;
for(int i = 1; i < 11; i++){
summa = array[i] + summa;
cout << summa/10 << endl;
}
for(int i = 1; i < 11; i++){
if(array[i] > 7){
cout << "array[" << i << "] = " << array[i] << endl;
}
}
int summa1 = 0;
for(int i = 1; i < 11; i++){
    if (array[i] % 2 == 0){
    summa1 = array[i] + summa1;
    }
}
cout << summa1 << endl;
int max = 0;
for(int i = 1; i < 11; i++){
    if (array[i] > max){
max = array[i];
}
}
cout << max << endl;
int L = 0;
cout << "L = ";
cin >> L;
for(int i = 1; i < 11; i++){
array1[i] = array[i];
}
for(int i = 1; i < 11; i++){
if (array[i] > L){
    array1[i] = 5;
}
}
for(int i = 1; i < 11; i++){
cout << "array[" << i << "] = " << array[i] << endl;
}
for(int i = 1; i < 11; i++){
cout << "array1[" << i << "] = " << array1[i] << endl;
}
int summa2 = 0;
for(int i = 1; i < 11; i++){
    if (array[i] % 3 == 0){
    summa2 = array[i] + summa2;
    }
}
cout << summa2 << endl;
    return 0;
}