#include<iostream>
using namespace std;
int main()
{
    int t,n,s;
    cin>>t;
    while(t!=0)
    {
        int nz=0,findex=-1,lindex=-1;
        cin>>n>>s;
        int d[n];
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
            if(d[i]!=0)
            {
                nz++;
            }
        }
        if(nz==0)
        {
            cout<<"YES"<<endl;
        }
        
        else if(s<nz)
        {
            cout<<"NO"<<endl;;
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(d[i]!=0)
                {
                    findex=i;
                    break;
                }
            }
             for(int i=n-1;i>=0;i--)
            {
                if(d[i]!=0)
                {
                    lindex=i;
                    break;
                }
            }
            if((lindex-findex)>s)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    

        t--;
    }
    
    return 0;
}