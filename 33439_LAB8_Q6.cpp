#include<iostream>
using namespace std;
double a=0,h=0;
 double volumeCalc(double a , double h){
    return (a*a*h)/3.0;
 }   
void getData(){
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the height : ";
    cin>>h;
    double V=volumeCalc(a , h);
    cout<<"The volume is: "<<V;
}
int main(){
getData();

    return 0;
}
