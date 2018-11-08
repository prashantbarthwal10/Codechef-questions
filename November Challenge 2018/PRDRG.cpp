#include <bits/stdc++.h>
using namespace std;
void cal(long long int a)
{
        long long int num=0,den=1;

        for(long long int i=1; i<=a; i++)
        {
                den*=2;
        }

        for(long long int i=0; i<a; i=i+2)
        {
                num=num+pow(2,i);

        }
        cout<<num<<" "<<den<<" ";



}
int main()
{
        long long int size;
        long long int a;
        cin>>size;
        while(size--)
        {
                cin>>a;
                cal(a);

        }



        return 0;
}
