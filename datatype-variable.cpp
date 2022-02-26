#include <iostream>
using namespace std;
int main(){
  int a = 123;
  cout<<a<<endl;
  cout<<"size of integer variable is:"<<sizeof(a)<<endl;
  
  char c = 'v';
  cout<<c<<endl;
  cout<<"size of char variable is:"<<sizeof(c)<<endl;
  
  bool b = true;
  cout<<b<<endl;
  cout<<"size of bool variable is:"<<sizeof(b)<<endl;
  
  float f = 1.2;
  cout<<f<<endl;
  cout<<"size of float variable is:"<<sizeof(f)<<endl;
  
  double d = 1.55;
  cout<<d<<endl;
  cout<<"size of double variable is:"<<sizeof(d)<<endl;
}