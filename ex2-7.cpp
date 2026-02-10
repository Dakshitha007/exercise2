#include<iostream>
#include<vector>
using namespace std;
int asum(int *arr,int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=*(arr+i);
    }
    printf("the sum:%d",sum);
}
int binary(int* arr, int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (*(arr + mid) == key)
            return mid;
        else if (*(arr + mid) < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void reverse(int* arr, int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int* ptr=arr.data();
    asum(ptr,n);
    int k;
    cout<<"\nenter the value to be searched:";
    cin>>k;
    int a=binary(ptr,n,k);
    cout<<"\nElement is found at the position "<<a;
    reverse(ptr,n);
    cout<<"\nArray after reversal:";
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
}