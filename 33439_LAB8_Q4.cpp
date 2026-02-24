#include<iostream>
using namespace std;
void jobSelect(){
    double marks =0.0 , exp=0.0;
    cout<<"Enter marks : ";
    cin>>marks;
    if(marks>59){
        cout<<"\nEnter Experience : ";
        cin>>exp;
    if(marks>=70 && exp>=2){
            cout<<"Selected As Associate Developer.";
    }
    else if(marks>=60 && exp>=1){
            cout<<"Selected As Assistant Developer.";
    }
}
else {
        cout<<"Selected As Trainee Engineer.";
    }   
} 
int main(){
jobSelect();
}
