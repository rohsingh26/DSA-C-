#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter the number of stars for border =";
    cin>>n;
    while(i<=n)
    {
        int t=n-i;
        while(t>=1)
        {
            cout<<" ";
            t--;
        }
        int c=n-i+1;
        int l=c;
        while(l<n&&l>=c)
        {
            cout<<"*";
            l--;
        }
        int a=i-1;
        while(a>=1)
        {
            cout<<"  ";
            a--;
        }
        int b=n-i+1;
        int j=1;
        while(j<=b&&j>=1)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    int z=1;
    while(z<=n){
        int r=z-1;
        while(r>=1)
        {
            cout<<" ";
            r--;

        }
        int p=n-z;
        int s=1;
        while(s<=p && s>=1)
        {
            cout<<"*";
            s--;
        }
        int q=n-z;
        while(q>=1)
        {
            cout<<"  ";
            q--;
        }
        int o=n-z;
        int m=o;
        while(m<n&&m>=o)
        {
            cout<<"*";
            m--;
        }
        cout<<endl;
        z++;
    }

    return 0;
}
