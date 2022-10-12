/* they have to declared inside a function and can be access only inside the block . they must be intialized otherwise they will have garbage value during compilation*/
 #include <iostream>
using namespace std;
class Book
{
  public:
  void GetBook()
  {
    int BookNo=121;
    BookN0=+16;
  }
  void ShowBook()
  {
    cout<<BookNo ;
  }
};
int main()
{
  Book B;
  B.GetBook;
  B.ShowBox();
  return 0;
}
