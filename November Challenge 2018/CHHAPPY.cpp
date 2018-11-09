#include <iostream>
using namespace std;
int main()
{

        long long int arr[100000];
        long long int size,arrsize;
        long long int a,b;
        bool state=false;
        cin>>size;
        while(size--)
        {
                cin>>arrsize;
                state=false;
                for(long long int i=0; i<arrsize; i++)
                {
                        cin>>arr[i];
                        arr[i]-=1;
                }

                for(long long int i=0; i<arrsize; i++)

                {

                        for(long long int j=i+1; j<arrsize; j++)
                        {
                                if(arr[i]!=arr[j])
                                {
                                        if(arr[arr[i]]==arr[arr[j]])
                                        {
                                                state=true;
                                                i=arrsize;
                                                break;
                                        }

                                }

                        }
                }
                if(state)
                        cout<<"Truly Happy"<<endl;
                else
                        cout<<"Poor Chef"<<endl;

        }



        return 0;
}
