#include<iostream>
using namespace std; //time complexity O(n*n)
int main(){
    int arr[]={2,3,4,1,55,6,4,67,-1,5,67,0,-35,78,9};
    int count=0;
    for(int i=0;i<15;i++){
        for(int j=i+1;j<15;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<"Numbers of inverstion of array is:="<<count<<endl;
    return 0;
    }