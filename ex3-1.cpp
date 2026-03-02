#include<iostream>
using namespace std;
int main(){
    string greeting;
    int n=25;
    cout<<"enter the greeting";
    getline(cin,greeting);
    int len=greeting.length();
    if(len<n){
        for(int i=0;i<n;i++){
            cout<<greeting;
        }
    }
}