#include<iostream>
#include<vector>
//#include<math.h>
#include<algorithm>
using namespace std;

vector<int> L;

int reversort()
{
   int len=L.size();
   int cost=0;

    for(int i=0;i<len-1;i++)
    {
      int min = *min_element(L.begin()+i,L.end());

      auto index= find(L.begin()+i,L.end(),min);

      reverse(L.begin()+i,index+1);

      cost+=distance(L.begin(),index)-i+1;

    }

    return cost;
}


int main()
{
    int T;
    cin>>T;
    for(int c=1;c<=T;c++)
    {
        int N;
        cin>>N;

        for(int i=0;i<N;i++)
        {
            int ele;
            cin>>ele;
            L.emplace_back(ele);
        }

        cout<<"case #"<<c<<" "<<reversort()<<endl;
    }
}