#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n);

void bublle_sort(int arr[],int size){
    if(size==1){
        return;
    }
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bublle_sort(arr,size-1);
   
}
int main(){
    int arr[]={3,1,2,1,6,8,9,7,5,4,4,5,67,8,8,8998};

    sort(arr+5,arr+15);

     cout<<endl;
     print(arr,16);
     cout<<endl;

    bublle_sort(arr,16);
    print(arr,16);

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}