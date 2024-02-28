#include<iostream>
using namespace std;
inline int product (int a,int b){
return a*b;

}
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}

int main(){
    int a,b;
    //cout<<"Enter the value of a and b ";
   // cin>>a>>b;
    //cout<<"The product of a and b "<<product(a,b)<<endl;
     int money=100000;
     //cout<<"Enter amount of money ";
     //cin>>money;
     cout<<"If u have " <<money<<" Rs in your bank account , you will recieve "<<moneyReceived(money)<<"Rs after one year"<<endl;
         
          cout<<" FOR VIP : If u have " <<money<<" Rs in your bank account , you will recieve "<<moneyReceived(money,1.1)<<"Rs after one year";
         return 0;
}