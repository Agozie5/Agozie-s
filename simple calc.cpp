#include<iostream>
using namespace std;
int main ()
{
    double num1,num2;
    int operation;
    cout<<"Enter first number:"<<endl;
 cin >>num1;
  cout <<"Enter operator "<<endl;
 cin >>operation;

 switch(operation)
 {
 case '+':
 cout <<num1<<"+"<<num2<<"="<<num1+num2<<endl;
 break;
 case '-':
 cout <<num1<<"-"<<num2<<"="<<num1-num2<<endl;
 break;
 case '*':
 cout <<num1<<"*"<<num2<<"="<<num1*num2<<endl;
 break;
  case '/':
 cout <<num1<<"/"<<num2<<"="<<num1/num2<<endl;
 break;
 }
     cout<<"Enter second number:"<<endl;
 cin >>num2;

 return 0;
}
