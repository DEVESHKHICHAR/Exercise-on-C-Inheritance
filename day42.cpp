#include <iostream>
#include <math.h>
using namespace std;
class simplecalc{
    protected:
     int value1,value2;
    public:
      void getdata(){
        cout<<"entre the value of two numbers:"<<endl;
        cin>>value1;
        cin>>value2;
      }
       void simmath(){
       cout<<"the result after addition is: "<<value1+value2<<endl;        
       cout<<"the result after subtraction is: "<<value1-value2<<endl;
       cout<<"the result after multiplication is: "<<value1*value2<<endl;
       cout<<"the result after division is: "<<value1/value2<<endl;        
      }
};
class scientificalc{
    protected:
     int c,d;
     public:
       void getdata(){
        cout<<"entre the value of two numbers for scientific calculator"<<endl;
         cin>>c;
         cin>>d;
       }
         void scimath(){
         cout<<"the result after sin(a+b) is:"<<sin(c+d)<<endl;         
         cout<<"the result after cos(a+b) is:"<<cos(c+d)<<endl;
         cout<<"the result after tan(a+b) is:"<<tan(c+d)<<endl;
         cout<<"the result after log(a+b) is:"<<log(c+d)<<endl;       
       }
};
class hybridclac: public simplecalc, public scientificalc{
    int x,y;
    public:
       void call(){
          simplecalc:: getdata();
          scientificalc:: getdata();
          simmath();
          scimath();
       }
    //   void sethybdata(int a,int b){
    //     x=a;
    //     y=b;
    //   }
    //   void change(){
    //     simplecalc ::value1;
    //     value1=x;
    //     simplecalc :: value2;
    //     value2=y; 
    //   }
};
int main() {
    hybridclac h1;
    h1.call();
    // h1.sethybdata( 5,4);
    // h1.change();
    // h1.simmath();
    return 0;
}