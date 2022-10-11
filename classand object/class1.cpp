#include <iostream>
using namespace std;
class Box
{
  int BoxNumber;
  float Side;
  float Area;
  void ExecArea()
  {
    Area= Side*Side;
  }
  public:
  void GetBox()
  {
    cout<<"Enter the value of BoxNumber :"<<endl;
    cin>>BoxNumber;
    cout<<"Enter the value of Side :"<<endl;
    cin>>Side;
    Execarea();
  }
  void ShowBox()
  {
    cout<<"BoxNumber :"<<endl;
    cin>>BoxNumber ;
    cout<<"Side :"<<endl;
    cin>>Side;
    cout<<"Area :"<<endl;
    cin>>Area ;
  }
};
  int main()
  {
    Box.B;
    B.GetBox();
    B.ShowBox();
    return 0;
  }
