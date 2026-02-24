#include<iostream>
#include<vector>
using namespace std;
void VectorReverse(vector<int>vect , int size){
 cout<<"Reversed Order : ";
 for(int i=size-1 ; i>=0 ; i--){
    cout<<vect[i]<<" ";
}
    }
int main(){
    int size=0;
    cout<<"Enter size : ";
    cin>>size;
    vector<int>vect(size);
    cout<<"Enter Values : ";
    for(int i=0 ; i<size ; i++){
    cin>>vect[i];
    }
    VectorReverse(vect , size);
    return 0;
}
