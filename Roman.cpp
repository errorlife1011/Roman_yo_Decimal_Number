/*Program to convert roman number into decimal number*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    int M=1000;
    int D=500;
    int C=100;
    int L=50;
    int X=10; 
    int V=5;
    int I=1;

    int num=0;

    string roman;
    cout<<"Enter Number(Roman) :";
    cin>>roman;

    string sub=roman.substr(0,2);
    cout<<sub<<endl;

    for(int i=0;i<roman.length();i++)
    {
        switch(roman.at(i))
        {
            case 'M':
            case 'm':
                 num=num+M;
                 break;
            case 'd':
            case 'D':
                 num=num+D;
                 break;     
            case 'c':
            case 'C':
                 num=num+C;
                 break; 
            case 'L':
            case 'l':
                 num=num+L;
                 break;
            case 'X':
            case 'x':
                 num=num+X;
                 break; 
            case 'V':
            case 'v':
                 num=num+V;
                 break; 
            case 'I':
            case 'i':
                 num=num+I;
                 break;           

        }

    }
    cout<<"Number in Decimal : "<<num;


}