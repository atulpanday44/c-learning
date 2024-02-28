#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
    
}
// CALL BY VALUE
/*void swapPointer(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
    
}
int main(){
    int a=4, b=5;
  //  cout<<"the sum of 4 and 5 is "<<sum(a,b);
cout<<"The value of a is "<<a<<endl;
 cout<<"The value of b is "<<b<<endl;
    swapPointer(&a,&b);//call by 
    cout<<"The value of a is " << a<<endl; 
    cout<<"The value of b is " <<b<<endl;
    */
   
   //CALL BY REFERNCE using reference
int& swapReferenceVar(int &x, int &y){
    int temp = x;
    x=y;
    y=temp;
    return x;

   }
   int main(){
    int a=4,b=5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapReferenceVar(a,b)=999; 
    // This will swap a and b using refernce variable
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    
    return 0;
    }
