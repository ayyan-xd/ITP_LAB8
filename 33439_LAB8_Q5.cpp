#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
void CountFrequency(vector<int>&vect , int size , int frequency[] , int fsize){
for(int i=0 ; i<size ; i++){
    int x=vect[i];
    if(x>=0 && x<fsize) frequency[x]++;
}
}
int main(){
    srand(time(0));
    int size=0;
    cout<<"Enter size : ";
    cin>>size;
    vector<int>vect(size);
    for(int i=0 ; i<size ; i++){
        vect[i]=rand()%11;
    }
    for(int i=0 ; i<size ; i++){
        cout<<vect[i];
        if((i+1)<size) cout<<" ";
        else cout<<endl;
    }
    int fsize=11;
    int frequency[fsize]={0};
    CountFrequency(vect , size , frequency , fsize);
    for(int i=0 ; i<fsize ; i++){
        if(frequency[i]>0) cout<<i<<" -> "<<frequency[i]<<" times."<<endl;    
        }
    return 0;
}
