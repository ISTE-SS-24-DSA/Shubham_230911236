#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main(){
int n;
cout<<"Enter the size of the vector ";
cin>>n;
vector <int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(), v.end());
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
for(int i=0;i<=n/2;i++){
    swap(v[i],v[n-i-1]);
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<< " ";
}
}
