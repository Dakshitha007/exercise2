#include<iostream>
#include<string>
using namespace std;
int main(){
    string para;
    cout<<"enter a para:";
    getline(cin,para);
    string search;
    cout<<"enter the word to be searched:";
    cin>>search;
    string repal;
    cout<<"enter the word to be replace:";
    cin>>repal;
    int pos=0;
    while((pos=para.find(search,pos))!=string::npos){
        para.replace(pos,search.length(),repal);
        pos+=repal.length();
    }
    cout<<para;
}