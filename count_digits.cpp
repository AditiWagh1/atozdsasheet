//count digits
#include<iostream>
using namespace std;
int countdigit(int N)
{
  int lastdigit=0;
  int digit=0;
  while(N>0)
  {
    lastdigit=N%10;
    digit=digit+1;
    N=N/10;
  }
  return digit;
}
int main()
{  
    int N;
    cout<<"enter the number"<<endl;
    cin>>N;
    cout<<"The number of digits are "<<countdigit(N);
    return 0;
}