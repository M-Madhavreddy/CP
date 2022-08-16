#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // 3X4 matrix
    vector<vector<int>> vec2d(3,vector<int> (4,0));

    for(auto vec : vec2d)
    {
      for(auto it : vec)
       {
        cout<<it<<" ";
       }
       cout<<"\n";
    }

}
