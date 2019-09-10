#include <iostream>
using namespace std;
int main()
{
  int a;
  int count = 0;
  cin >> a;
  while(a!=1){
      if(!(a%2)){
        a=a/2; 
        count++;
      } 
      else {
        a=(3*a+1)/2;
        count++;
      }
    }
  cout<<count<<endl;
  return 0;
}
