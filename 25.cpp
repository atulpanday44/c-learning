#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
//factorial of a number

int factorial(int N){
    int ans=1;
    for(int i=0;i<=N;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int f=factorial(5);
    cout<<f<<endl;
    int a=10;
    int b=12;
    int c=34;
    int result=add(a,b);
    cout<<result<<endl;
     
    return 0;
}
