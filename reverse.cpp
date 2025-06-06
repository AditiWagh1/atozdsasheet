#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int lastdigit=0;
        int reverse=0;
        while(x!=0)
        {
            lastdigit=x%10;
            /* if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10))
            {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }*/
            reverse=(reverse*10)+lastdigit;
            x=x/10;
        }
        return reverse;
    }
   
};
int main()
{
    int x;
    cout<<"Enter the x";
    cin>>x;
    Solution s;
    cout<<"The reverse is "<<s.reverse(x);
    return 0;
}