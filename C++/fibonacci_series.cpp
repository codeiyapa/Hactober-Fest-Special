#include<iostream>
using namespace std;
int main(){
    int a, b, c, terms; 
    cout<<"Enter number of terms:"; 
    cin>>terms; 
       a = 0; 
       b = 1; 
       c = 0; 
    cout<<"Fibonacci terms:"<<endl;
    for(int i=1; i<=terms; i++) 
 { 
    cout<<c<<"\t"; 
    a = b; 
    b = c; 
    c = a + b;
 }

return 0;
}