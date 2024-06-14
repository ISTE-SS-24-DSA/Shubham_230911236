#include<iostream>
using namespace std;
void check_prime(int n){
int a=0;
if(n==1){
    cout<<"The given number is neither prime nor composite";
}
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"The given number is composite number";
        a=1;
        break;
    }
}
if(a==0){
    cout<<"The given number is prime number";
}
}
int main(){
int n;
cout<<"Enter the number to be checked ";
cin>>n;
check_prime(n);
}
