#include <iostream>
using namespace std;
#include<cmath>
#include <bits/stdc++.h>


int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>a[i][j];
        }
    }

    int row_str=0,row_end=n-1,col_str=0,col_end=m-1;


    while(row_str<=row_end  && col_str<=col_end){

        for( int col=col_str; col<=col_end;col++){
            cout<<a[row_str][col]<<" ";
        }

    }


return 0;
}