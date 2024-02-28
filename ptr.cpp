#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<&x<<endl;
    int *xptr = &x;
    cout<<x<<endl;
    cout<<xptr<<endl;
    cout<<*xptr<<endl;
    float y;
    cout<<&y<<endl;
    float*yptr;
    yptr=&y;
    cout<<yptr<<endl;
    return 0;
    // deference operator


}