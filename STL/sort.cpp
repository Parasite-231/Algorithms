#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main()
{

     int n ;
     vector <int> v{1,77,-9,88,55,10009};

     sort(v.begin(),v.end());
     cout<<"Sorted Vector: ";
     for(int i = 0 ; i < v.size();i++){
        cout<<v[i]<<" ";

     }


}
