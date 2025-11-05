#include<iostream>
using namespace std;
double UpdateMarks(double &marks){
    return (marks+10);
}
int main(){
    double marks=0;
    cout<<"Enter marks : ";
    cin>>marks;
    cout<<"Updated Marks : ";
    double updtmarks=UpdateMarks(marks);
    cout<<updtmarks;
    return 0;
}