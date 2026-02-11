#include<iostream>
#include<cstring>
using namespace std;
void sortStudents(char** names, int count){
    for(int i=0;i<count;i++){
        for(int j=0;j<count-i-1;j++){
            if(strcmp(names[j],names[j+1])>0){
                char *temp=names[j];
                names[j]=names[j+1];
                names[j+1]=temp;
            }
        }
    }
}
int findStudent(char** names,int count, char* search){
    for(int i=0;i<count;i++){
        if(strcmp(names[i],search)==0){
            return i;
        }
    }
    return -1;
}
int main(){
    char* student[25];
    int count=5;
    cout<<"enter the names of 5 students:";
    for(int i=0;i<count;i++){
        student[i]=new char[30];
        cin>>student[i];
    }
    sortStudents(student,count);
    cout<<"After sorting:";
    for(int i=0;i<count;i++){
        cout<<student[i]<<endl;
    }
    char search[30];
    cout<<"enter the name to be searched:";
    cin>>search;
    int pos=findStudent(student,count,search);
    if(pos!=-1){
        cout<<"\nelement is found at "<<pos+1<<endl;
    }
    else{
        cout<<"Element is not found\n";
    }
    for(int i=0;i<count;i++){
        delete[] student[i];
    }
    return 0;
}