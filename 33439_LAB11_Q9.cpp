#include<iostream>
using namespace std;
double power(double a, double b){
double pwr=1;
cout<<"Enter base (a) : ";
cin>>a;
cout<<"Enter power (b) : ";
cin>>b;
if(b<0){
    b=-b;
    a=1/a;}

for(int i=0 ; i<b ; i++){
pwr*=a;
    }

return pwr;
}
int  main(){
double a; double b;
double res=power(a, b);
cout<<res;

    return 0;
}