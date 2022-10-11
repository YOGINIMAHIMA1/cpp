#include <iostream>
using namespace std;
class METROPOLIS
{
  int MCode;
  char MName[];
  long int MPop;
  float Area;
  float PopDens;
  void CalDen()
  {
    PopDens=MPop/Area;
  }
  public:
  void Enter()
  {
    cout<<"Enter the value of MCode :"<<endl;
    cin>>MCode;
    cout<<"Enter value of MPop:"<<endl;
    cin>>MPop;
    cout<<"Enter the value of MName:"<<endl;
    cin>>MName;
    CalDen();
  }
  void ViewAll()
  {
    if(PopDens>12000)
    {
      cout<<"Highly Populated Area"<<endl;
    }
  }
};
  int main()
  {
    METROPOLIS M;
    M.Enter();
    M.ViewAll();
  return 0;
  }
    
  
