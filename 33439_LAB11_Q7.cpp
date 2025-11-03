#include<iostream>
using namespace std;
void DisplayChars(){
    int n;
    char ch;
    cout<<"Enter the number of times the character should be displayed : ";
    cin>>n;
    cout<<"Enter the character : ";
    cin>>ch;
    for(int i=0 ; i<n ; i++){
        cout<<ch;
    }
}
int main(){
    DisplayChars();
    return 0;
}