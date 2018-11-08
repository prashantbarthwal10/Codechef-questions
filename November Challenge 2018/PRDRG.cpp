
#include <bits/stdc++.h>
//Beware: Question is framed badly.
using namespace std;
void cal(long long int a)
{
        long long int num=1,den=2;
        if(a%2==0)
        {
                num=1; den=4;
                for(int i=2; i<a; i=i+2)
                {
                        num=num+den;
                        den=den*4;
                }

        }
        else
        {
                num=1; den=2;
                for(int i=1; i<a; i=i+2)
                {
                        num=num+den;
                        den=den*4;
                }

        }
        long long int gcd=__gcd(den,num);
        num=num/gcd;
        den=den/gcd;
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
