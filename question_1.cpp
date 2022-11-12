

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p,d;
    cin>>p>>d;
    int temp[n];
    if(d==0){
        int k=0;
        for(int i=p;i<n;i++)
        {
            temp[k]=arr[i];
            k++;
        }
        for(int i=0;i<p;i++)
        {
            temp[k]=arr[i];
            k++;
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
