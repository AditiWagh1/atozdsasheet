#include<iostream>
using namespace std;
class solution{
    public:
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
}
};
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    solution s;
    cout<<s.isprime(n);
    return 0;
}