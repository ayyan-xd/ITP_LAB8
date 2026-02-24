#include<iostream>
#include<string>
using namespace std;
string combine(string first, string last){
string name= {first + " " + last};
return name;
}
void reverse(string name){
    for(int i=name.length()-1 ; i>=0 ; i--){
        cout<<name[i];  
    }
}
int main(){
string first=" ";
string last=" ";
cout<<"Enter First Name : ";
cin>>first;
cout<<"Enter Last Name : ";
cin>>last;
string fullname=combine(first , last);
cout<<fullname;
cout<<endl;
reverse(fullname);

    return 0;
}
