#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>//like an array
#include<algorithm>
using namespace std;

int main()
{
    /*int x, n =1;
    //vector <int> vec(x,0);
    vector <int>::iterator it;

    cin >> x ;
    vector <int> vec(x,0);

    for(int i = 0 ; i < vec.size(); i++){
             n++;
        vec.push_back(n);
        if( i % 2 != 0 ){
            cout<<vec[i]<<endl;
        }
        else continue;

    }
    return 0;*/

    /*int arr[] = {22,99,100,6};
    sort(arr,arr+4);

    for(int i = 0 ; i < 4; i++){
        cout<<arr[i];
        puts(" ");
    }*/

    int x , j ,  n , i ;
    cin >> x ;

    vector <int> vec(x) ;
    vector <int>::iterator it ;

    for (j = 1 ; j <= x ; j++ ){

        vec.push_back(j) ;
    }

    for ( i = 0 ; i < vec.size() ; i ++){

        if(vec[i] % 2 != 0){
            cout<<vec[i] <<endl;
        }

    }



}



