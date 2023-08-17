#include <iostream>
using namespace std;
#include<cmath>
#include <bits/stdc++.h>

/*int main(){

    int n;
    int mx=0;
    
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    for(int j=0;j<n;j++)
    {
        mx= max(mx,arr[j]);
         
    }
    cout<<mx;

}*/

//---------------sum of all the sub array--------------
/*
int main(){

    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current = 0;
        for(int j=i; j<n;j++){

            current += a[j];
            cout<<current;
        }
    }
}/*/

/*int main(){
    int n;
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr = 2;
    int count =arr[1]-arr[0];
    int j=2;
    int ans =2;
    while (j<n)
    {
        if(count==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            count=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    
    cout<<"currentis"<<ans<<endl;
       
}*/

//----------------------
/*/
int main(){
    int n;
    cin>>n;

   

    int a[n+1];
    a[n]=-1;
     for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<"1";
        return 0;
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1] )
        {
            ans++;
          
        }
        mx=max(mx,a[i]);
 
    }
    cout<<ans;

}*/

//------------------answer the reapted index in array--------
/*/
int main(){

    int N;
    cin >> N;
    int a[N];
    
    for(int i = 0; i < N; i++)
        cin >> a[i];

    int temp[1000];

    for(int i = 0; i < 1000; i++)
        temp[i] = 0; // *(temp + i) = -1
    
    for(int i = 0; i < N; i++)
        temp[a[i]] += 1;

    for(int i = 0; i < N; i++)
        if(temp[a[i]] > 1) {
            cout << i + 1;
            return 0;
        }

    cout << -1;

    return 0;
*/
/*/
int main(){
int n;
cin>>n;
int a[n];

for (int i = 0;i<n;i++){
    cin>>a[i];

}
const int N=1000;
int idx[N];
for (int i=0;i<N;i++){
    idx[i]=-1;
}

int ans=INT_MAX;

for(int i=0;i<n;i++){
    if(idx[a[i]]!=-1){
        ans=min(ans,idx[a[i]]);
    }



    else{
    idx[a[i]]=i;
    }
}
    if(ans==INT_MAX){
        cout<<"-1"<<endl;
            }
 else{
    cout<<ans+1<<endl;
 }return 0;
}
*/
//----------------sum of array-----------

/*/
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s;
    cin>>s;
    int ans=0;
    int ak;
    int nd;
    int i=0; int j=0;

    while(j<n && ans+a[j]<=s){
        ans+=a[j];
        j++;

        if(ans==s){
            cout <<a[i]<<" "<<a[j-1];
            return 0;
        }
        while(j<n){
            ans+=a[j];
        
        while(ans>s){

            ans=ans-a[i];
            i++;
        
        }
        if(ans==s){
           ak=i+1;
           nd=j+1;
           
            
        }
        j++;

    }
    cout<<ak<<" "<<nd;
    
    
}
}
*/
//min positive number index missing in array
                                               //done
/*/
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int c= 100;
    

    bool chk[c];
    for(int i=0;i<n;i++){
        chk[i]=false;
    }
    
    for(int j=0;j<n;j++){

        if(a[j]>=0){
            chk[a[j]]=true;
            
        }
       
        
    }
    int ans=-1;
     for(int i=0;i<n;i++){
        if(chk[i]==false){
            ans=i;
            break;
        }
     }
     cout <<ans;
     return 0;


}*/





//-----------------sub array------------------
/*/
int main (){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    int maxi=INT_MIN;
    for (int i=0;i<n; i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                ans+=a[k];
                maxi=max(maxi,ans);
                
            }
            ans=0;

            
           
        }
        
    }
    cout<<maxi;
    return 0;

}/*/
// find the maximu sum of all subarray in array----------/////
/*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++)
        cin >> num[i];

        int maxi=INT_MIN;
        int sum =0;

        for(int i=0;i<n;i++){
            sum+=num[i];
            if(sum<0){
                sum=0;
            }
            maxi=max(sum,maxi);
        }
        cout<<maxi;

    return 0;
}/*/
/*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++)
        cin >> num[i];

        int maxi=INT_MIN;
        int sum =0;
        int totsum=0;
        int ans;

        for(int i=0;i<n;i++){
            num[i]=-num[i];
            sum +=num[i];
            if(sum<0){
                sum=0;
            }
             maxi=max(sum,maxi);
        }
            
        for(int i=0;i<n;i++){
        totsum+= num[i];                 //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
        }                                //xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
        ans =totsum+maxi;
        cout<<ans;
       
}
  /*/      
  //   -------find sumof 2 ele is equal to a givwn input--------------

  /*/
  bool pairsum( int a[], int n, int k)
  {
    int low=0;
    int high=n-1;
    while(low<high){

       if(a[low]+a[high]==k){
       cout<<low<<""<<high <<endl;
       return true;
    }
       else if(a[low]+a[high]>k){
           high--;
       }
       else{
        low ++;
       }
    }
return false;
  }
  
  int main(){
   
    int a[8] = {2,4,7,11,14,16,20,21};
   int k=31;
    cout<<pairsum(a,8,k)<<endl;

    return 0;
    }
    /*/




