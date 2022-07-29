

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int i=0;
vector<int> v;

void construct(int n,int c,int m)
{
    if(n==1)
    {
      v.emplace_back(m);
    }

    else
    {
        if(c-1>=n-2 && c-1<= n*(n-1)/2 - 1)
        {
            v.emplace_back(m);
            construct(n-1,c-1,m+1);
        }

        else{
            int x= c-n*(n-1)/2 + 1;
            construct(n-1,c-x,m+1);
            v.emplace_back(m);
            reverse(v.begin() , v.begin()+x-1);
        }
    
    }

}

int main()
{   
    int n,c;
    cin>>n;
    cin>>c;

    if(c<n-1 || c> n*(n+1)/2 - 1)
    {
        cout<<"Not possible for given "<<c<<" and "<<n;
    }

    construct(n,c,1);
    //reverse(v.begin(),v.end());

    for(auto it: v)
    {
        cout<<it;
    }
}