#include <iostream>
using namespace std;
class A
{
  static int b;
   void get()
   {
     
     cout<<"b:"<<b<<endl;
   }
};
  int A ::b=10;
    void main()
    {
      A:: b=100;
      A obj;
      obj.get();
    }
