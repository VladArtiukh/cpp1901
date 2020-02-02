#include <iostream>
using namespace std;
int main (){
    int c = 0;
    int N = 0;
    int M = 0;
    cout << "enter N" << endl;
    cin >> N;
    cout << "enter M" << endl;
    cin >> M;
    for (int i = N; i > M; i++){
    cout << "c = " << i << ( i * 9/5) + 32;
    }
    return 0;
}