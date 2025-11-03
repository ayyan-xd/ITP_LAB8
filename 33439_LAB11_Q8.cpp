#include<iostream>
using namespace std;
long long SumOfCubes(){
    int n=0; long long sum=0;
    cout<<"Enter a number (up to 1000) : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        sum=sum+i*i*i;
    }
    return sum;
}
int main(){

    long long res=SumOfCubes();
    cout<<res;

    return 0;
}