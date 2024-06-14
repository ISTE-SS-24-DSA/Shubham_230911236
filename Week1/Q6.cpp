#include<iostream>
using namespace std;
int max_element(int *arr,int n){
int max=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}
int main(){
int n;
cout<<"Enter the size of the array ";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"The greatest number in this array is: "<<max_element(arr,n);
}
