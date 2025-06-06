#include<iostream>
using namespace std;
class solution
{
   public:
   int sol(int n1,int n2)
   {
    while(n1>0 && n2>0)
    {
        if(n1>n2)
        {
            n1=n1%n2;
        }    
        else{
            n2=n2%n1;
        }
    }
    if(n1==0)
    {
        return n2;
    }
    else{
        return n1;
    }
   }
};
int main()
{
    int n1,n2;
    cout<<"Entern1 and n2"<<endl;
    cin>>n1>>n2;
    solution s;
    cout<<"GCD is "<<s.sol(n1,n2);
    return 0;
}