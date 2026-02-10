#include<iostream>
#include<vector>
using namespace std;
void swap(void *x,void *y){
    int *a=static_cast<int*>(x);
    int *b=static_cast<int*>(y);
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"\nBefore swap:\n";
    cout<<"A:"<<a<<"B:"<<b<<endl;
    swap(&a,&b);
    cout<<"\nAfter swap:\n";
    cout<<"A:"<<a<<"B:"<<b<<endl;
    int n;
    cout<<"\nenter the size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nArray Before swapping:\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int *ptr =arr.data();
    swap(ptr,ptr+(n-1));
    cout<<"\nArray after swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int i1,i2;
    cout<<"\nenter the indeices to be swapped:\n";
    cin>>i1>>i2;
    cout<<"\nArray before swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    swap(ptr+i1,ptr+i2);
    cout<<"\nArray after swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}