#include<iostream>
#include<cmath>
using namespace std;
int maxtime(int n)
{
    return ceil(log2(n));
}
int main()
{
    int n;
    cout<<"Enter the number of prisoners"<<endl;
    cin>>n;
    int result=maxtime(n);
    cout<<result<<endl;
    return 0;
}