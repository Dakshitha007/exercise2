#include<iostream>
using namespace std;

void byValue(int x){
x+=5;
}

void byReference(int&x){
x+=5;
}

void byPointer(int*x){
(*x)+=5;
}

void arrayParam(int arr[],int size){
cout<<"\nIn function:";
cout<<"\nsizeof(arr)="<<sizeof(arr);
cout<<"\nsizeof(*arr)="<<sizeof(*arr);
for(int i=0;i<size;i++){
byPointer(&arr[i]);
}
}

int main(){
int a;
cout<<"\nenter the value:";
cin>>a;
cout<<"\nBefore modification:"<<a;
byValue(a);
cout<<"\nAfter byValue:"<<a;
byReference(a);
cout<<"\nAfter byReference:"<<a;
byPointer(&a);
cout<<"\nAfter byPointer:"<<a;

int n;
cout<<"\nenter size of array:";
cin>>n;

int*arr=new int[n];

for(int i=0;i<n;i++){
cin>>arr[i];
}

cout<<"\nIn main:";
cout<<"\nsizeof(arr)="<<sizeof(arr);
cout<<"\nsizeof(*arr)="<<sizeof(*arr);

arrayParam(arr,n);

cout<<"\nModified array:\n";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

delete[]arr;

return 0;
}
