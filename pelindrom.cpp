//Program to print the first n palindrom numbers..
#include<iostream>
using namespace std;
int a,b,c,sum,count,num,i=1,temp=1;     //variable declaration
int main(){
cout<<("Entre the number");             //number to accept thee number from user.
cin>>num;
while(count<num)
{
    i=a;
    sum=0;
    temp=i;
    while(i>0){
        b=i%10;
        sum=sum*10+b;
        i=i/10;
    }
    if(temp==sum){
        cout<<temp<<endl;
        count++;
    }
    a++;
}
}



