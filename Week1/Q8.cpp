#include <iostream>
#include <vector>
using namespace std;

int main() {
int n;
cout<<"Enter the size of this vector ";
cin>>n;
vector <int> v(n);
cout<<"Enter the elements of the vector ";
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
for(int i=n-1;i>=0;i--){
    cout<<v[i]<<" ";
}

}

