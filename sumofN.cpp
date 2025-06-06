#include<iostream>
using namespace std;
class solution{
public:
int sumofn(int n)
{
    int sum=0;
    for(int i=n;i>0;i--)
    {
        sum =sum+i;
    }
    return sum;
}
};
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    solution s;
    cout<<s.sumofn(n);
    return 0;
}