#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> V;

    int n;
    int num;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>num;
        V.emplace_back(num);
        //V.push_back(num);
    }

    // method 1 :
    for(int it : V)
    {
        cout<< it <<" ";
    }

    //method 2 :
    for(auto i=V.begin();i<V.end();i++)
    {
        cout<< *i <<" ";
    }

    vector <int> vec1(4/*size*/,0/*intializing element*/);
    // another vector vec2 which is sub array of vec1 with first 2 ele
    vector<int> vec2(vec1.begin(),vec1.begin()+2);//note that last iteration vec2 index 2 is excluded only index 0 and 1 arre printed (0,0)

}
