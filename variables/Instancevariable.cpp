/*
-They are declared inside class but outside the function,block or methods.
-It is not neccessary to intialize them. because memory is allocated to them only when object is created and they are destroyed when object is destroyed.
-by default access specifier is private. */
#include <iostream>
using namespace std;
class Box
{
  int BoxNumber;//instance variable
  public:
  void GetBox()
  {
    int BoxShape=19 ;//local variable
    cout<<"Boxshape :"<<endl;
    
  }
  void ShowBox()
  {
    cout<<"Enter BoxNumber :";<<endl;
    cin>>BoxNumber ;
  }
};
int main()
{
  Box B;
  B.GetBox();
  B.ShowBox();
  return 0;
}
}
  
