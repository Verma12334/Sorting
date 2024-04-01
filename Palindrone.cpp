#include<iostream>
#include<string>
using namespace std;


bool palindrine(string&name,int s,int e){ //Here this string pass by value 
    //base case
    if(s>e){
        return true;
    }
   if(name[s]!=name[e]){
    return false;
   }
    s++;
    e--;
    palindrine(name,s,e);

}
int main(){
string name="SSSSSS";
int l=name.size();



if(palindrine(name,0,l-1)){
    cout<<"Palindrone\n";
}
else{
        cout<<"Not a Palindrone\n";
}

cout<<endl;


   return 0;
}
