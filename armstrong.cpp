#include<iostream>
using namespace std;
class solution{
public:
bool armstrong(int n)
{
    int original=n;
    int lastdigit;
    int sum=0;
    while(n>0)
    {
        lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(original==sum)
    {
        return true;
    }
    else{
        return false;
    }
}
}; 
int main()
{
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    solution s;
    cout<<"The ans is "<<s.armstrong(n);
    return 0;
}