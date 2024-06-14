#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number to be reversed ";
cin>>n;
int rev_num=0;
while(n!=0){
    int x=n%10;
    rev_num=(rev_num*10)+x;
    n=n/10;
}
cout<<"Reversed number is "<<rev_num;
}
