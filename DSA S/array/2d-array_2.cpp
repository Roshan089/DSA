#include <iostream>
using namespace std;
#include<cmath>
#include <bits/stdc++.h>



/*/
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
      row_str++;

      for(int row= row_str;row<=row_end;row++){
        cout<<a[row][col_end]<<" ";
      }
      col_end--;
    
    for(int col= col_end;col>=col_str;col--){
        cout<<a[row_end][col]<<" ";
    }
    row_end--;
    for(int row=row_end;row>=row_str;row--){
        cout<<a[row][col_str]<<" ";
    }
    col_str++;
     
    }


return 0;
}
/*/

/*/

int main(){
     int n,m;
    cin>>n>>m;
    int a[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>a[i][j];
        }
        
    }
      for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
           cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }


}/*/

/*/

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
   
   for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cin>>m1[i][j];

    }
   }
   for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
        cin>>m2[i][j];
        
    }
   }
   int ans[n1][n3];
   for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
        ans[i][j]=0;
        
    }
   }


for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
             ans[i][j]+=m1[i][k]*m2[k][j];
        }
        
        
    }
   }
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<"\n";
   



}
}/*/