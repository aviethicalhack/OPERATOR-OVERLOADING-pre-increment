#include <iostream>
using namespace std;
class A
{
  int x;
  public:
   void get()
   {
    x=10;
   }
  void put()
   {
    cout<<x<<endl;
   }
  void operator--()
  {
    cout<<--x;
  }
};

int main() 
{
A a1;
a1.get();
a1.put();
--a1;
}
