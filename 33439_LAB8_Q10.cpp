#include<iostream>
#include<vector>
using namespace std;
int vectorsum(vector<int> a ,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+= a[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    vector<int>a(size);
    cout<<"Enter Values : ";
    for(int i=0 ; i<size ; i++){
        cin>>a[i];
    }
    int sum=vectorsum(a,size);
    cout<<sum;
return 0;
}
