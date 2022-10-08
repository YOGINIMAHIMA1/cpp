#include <iostream>
using namespace std;
int main()
{
   int a= 10;
   int b=22;
   int c= -25;
   int d= -45;
  int e=34;
  int f= -50;
  
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;
  cout<<f<<endl;
  
  return 0;
}

/*   a= 10;
    (10)2=    1010
          integer is of 2 to 4 bytes so lets take 2 byte means 16 bit store binary value of 10 in 16 bit.
          a=    0000 0000 0000 1010
          ~a=   1111 1111 1111 0101
          
          
          first bit is 1 it means value is negative for converting negative binary value into decimal there are two methods
          
          
          md 1 =  take out all zero value base indeed with negative sign and add -1
          
          
          -2^1 -2^3 -1 = -2 -8 -1 =-11
          
          
          
          MD2   =FIND  2'S COMPLEMENT OF THAT NEGATIVE  BINARY VALUE TO CONVERT INTO DECIMAL
               
               1111 1111 1111 0101
               0000 0000 0000 1011 =   2^0 +2^1 +2^3 =1 +2 +8= 11
               
               
               ~a=-11
               
               
               
               these are the method but if you want to find out in seconds for not operator  a=10
                 then add one value and put negative sign you will get ~a =-11
                 
                 
    int b=22;          |     ~b= -23
   int c= -25;         |     ~c =24 
   int d= -45;         |     ~d= 44
  int e=34;            |     ~e= -35
  int f=-50;           |     ~f=  49 
  
  
  
  
  
  
                 
                 
                 
