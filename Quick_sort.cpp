#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
        cnt++;
    }
    //place pivot at right position
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);
//left and wala part smbhal lete hhai
int i=s;
int j=e;
while(i < pivotindex && j > pivotindex){

    while(arr[j]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i < pivotindex && j > pivotindex){
        swap(arr[i++],arr[j--]);
    }
}
}
void quick_sort(int arr[],int s,int e){
    // base case
    if(s>=e){
        return; 
    }
    // partition kare
    int p=partition(arr,s,e);
    //left part sort karo
    quick_sort(arr,s,p-1);
    //right part sort karo
    quick_sort(arr,p+1,e);
}
int main (){
    int arr[]={3,6,7,8,90,7,85,7};
    quick_sort(arr,0,8-1);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}