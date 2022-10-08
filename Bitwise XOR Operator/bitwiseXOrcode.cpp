/* Find the Element that comes one in array and other Element comes twice. */
  #include<iostream>
  using namespace std;
   int main()
   {
     
     int n;
     cout<<"Enter the value of n:" ;
       cin>>n;
     int XOR=0;
     int arr[]={8,0,4,9,0,8,9} ;
     for(int i=0;i<n;i++)
     {
       XOR= XOR ^ arr[i];
     }
     cout<<XOR ;
     return 0;
   }
