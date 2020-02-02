#include<iostream>
using namespace std;
int main()
{
    int num=0, t=0;
    cout<<"Enter count: "
    cin>>num;
    while(num)
    {
        num=num/2;
        t=num%2;
        cout<<t;
    }
    cout<<num;
    cout<<endl;
    return 0;
}