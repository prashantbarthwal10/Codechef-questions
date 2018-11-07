#include <bits/stdc++.h>
using namespace std;
long long int cal(long long int a)
{
        long long int sum=2;
        if(a==1)
                sum=2;
        else
        {
                for(long long int i=2; i<=a; i++)
                {
                        if(i%2==0)
                        {
                                sum*=2;
                        }
                }

        }
        return sum;
}
int main()
{
        long long int size;
        long long int a;
        cin>>size;
        while(size--)
        {
                cin>>a;
                cout<<1<<" "<<cal(a)<<" ";

        }



        return 0;
}
