#include<iostream>
using namespace std;

int main(){
    int *p = new int(500);
    cout << *p << endl;  // Print the value
    delete p;            // Free the memory
    return 0;
}