#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int &r=a;
  cout<<a<<endl<<r<<endl;

  a=25;
  cout<<a<<endl<<r<<endl;

  r=20;
  cout<<a<<endl<<r<<endl;

  int b = 30;
  r = 30;
  cout<<a<<endl<<r<<endl;

  return 0;
}
