#include <iostream>

using namespace std;

int main()
{
 string number_2,temp,number_16;
 int k,c=0,numeral;
 string  table[]={"","1","2","3","4","5","6","7","8",
                   "9","A","B","C","D","E","F"};

 cin>>number_2;
 k=number_2.length();
 //----------------
  if(k%4!=0)
   while(k%4!=0)
   {
    temp=number_2;
     number_2='0';
     number_2+=temp;
     k=number_2.length();
    }
    temp="";
 //--------------------
    for(k=0;k<number_2.length();k++)
      {
        temp+= number_2[k];
        c++;
        if(c==4)
         {
            numeral=8*(temp[0]-'0')+4*(temp[1]-'0')+
                    2*(temp[2]-'0')+(temp[3]-'0');
            number_16=table[numeral];
            cout<<number_16;
            temp="";
            c=0;
            }
        }
 //--------------------------

system("pause>0");
return 0;
}
