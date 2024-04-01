#include<iostream>
#include<string>
using namespace std;


void reverse(string&name,int s,int e){ //Here this string pass by value 
    //base case
    if(s>e){
        return;
    }
    swap(name[s],name[e]);
    s++;
    e--;
    reverse(name,s,e);

}
int main(){
string name="S a u r a b h";
int l=name.size();

cout<<name;

reverse(name,0,l-1);

cout<<endl;

cout<<name;

   return 0;
}
