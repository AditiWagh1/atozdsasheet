#include<iostream>
#include<algorithm>
using namespace std;
class solution{
public:
void reverse(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        
            if(i>=n/2) return;
            std::swap(arr[i],arr[n-i-1]);
        
    }
    
}
};
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solution s;
    s.reverse(n,arr);
    cout<<"Reverse array is"<<endl;
    for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}