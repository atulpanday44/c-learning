#include<iostream>
using namespace std;
struct employee
{
    int eID;
    float salary;
    char favchar;


};
  union money;
            {
                int rice;
                char car;
                float pounds;
                
                 };

int main(){
    enum meal{ breakfast,lunch,dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
             struct employee harry;
             union money m1;
             m1.rice=34;
             m1.car='c';
             cout<<m1.car;
             struct employee shubham;
             struct employee rohandas;
             harry.eID=1;
             harry.salary=5000000;
             harry.favchar='c';
            
             
            // cout<<"The value is "<<harry.eID<<endl;
            // cout<<"The value is "<<harry.salary<<endl;
             //cout<<"The value is "<<harry.favchar<<endl;
            
          

             return 0;
}