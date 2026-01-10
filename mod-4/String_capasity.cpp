#include<bits/stdc++.h>
using namespace std;
int main(){
   string name="Mosharrof";
   cout<<name.size()<<endl;//size of string
   cout<<name.max_size()<<endl;// max_capacity this loacaldevics
   cout<<name.capacity()<<endl;
   name.resize(5);
   cout<<name<<endl;
   if (name.empty())
   {
    cout<<" true"<<endl;
   }else{
    cout<<"false"<<endl;
   }
   
   
    //using ternary
   ( !name.empty())? cout<<"true":cout<<"False";
   
    return 0;
}