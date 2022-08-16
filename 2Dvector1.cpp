#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<vector<int>> vec2d;
    
    int r,c;
    cout<<"enter the number of rows >> ";
    cin>>r;
    
    for(int i=0;i<r;i++)
    {
      cout<<"enter the no of ele in row "<<i+1<<" >> ";
      cin>>c;
      vector<int>v ;
       for(int j=0;j<c;j++)
        {
           v.emplace_back(j+1);
        }
        vec2d.emplace_back(v);

    }
    
    for(int i=0;i<vec2d.size();i++)
    {
      for(int j=0;j<vec2d[i].size();j++)
       {
        cout<<vec2d[i][j]<<" ";
       }
       cout<<"\n";
    }

}
