#include<iostream>
using namespace std;
void SwapValues(int &a , int &b){
int temp=0;
temp=a;
a=b;
b=temp;
cout<<"After Swap : ";
cout<<"a="<<a<<" , b="<<b;
}
int main(){
    int a=0 , b=0;
    cout<<"Enter two integers : ";
    cin>>a>>b;
    cout<<"Before Swap : ";
    cout<<"a="<<a<<" , b="<<b;
    cout<<endl;
    SwapValues(a, b);
    return 0;
}