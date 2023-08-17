#include <iostream>
using namespace std;
#include<cmath>

/*/
int main(){

    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<array[2];
  }/*/

  /*/int main(){

    int n;
    cin>>n;
  
   int array[n];

   for(int i=0;i<=n;i++){
    cin>>array[i];
   }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;

    for(int j =0;j<=n;j++){
        minNo=min(minNo,array[j]);
    }
    cout<<"minum no. in array"<<minNo;


  }/*/
  /*/ int findkey(int arr[],int n,int key){

    for(int i=0;i<=n;i++){

        if(key==arr[i]){
            return i;

        }
        
    }
    return -1;
   }


  int main(){
     
     int n;
     cin>>n;

     int arr[n];

     for(int i=0;i<=n;i++){

        cin>>arr[i];
     }
      int key;
      cout<<"enter key";
     cin>>key;

     cout<<findkey(arr ,n,key)<<endl;

  }/*/
//-----------------------binarysearch---------
/*/
  int binarysearch(int arr[],int n,int key){

    int s=0;
    int e=n;

    int mid =(s+e)/2;
   while(s<=e){
    if(key==arr[mid]){
        return mid;
    }


    else if(key<arr[mid]){
        e=mid-1;
    }
    else{
        s=mid+1;
     }
   
    }
   return-1;
  }

  int main(){
    int n;
     cin>>n;

     int arr[n];

     for(int i=0;i<=n;i++){

        cin>>arr[i];
     }
      int key;
      cout<<"enter key";

     cin>>key;
     cout<<binarysearch;
  }
  /*/

  //------------------sorting-------

   /*/int main(){
    int n;
     cin>>n;

     int arr[n];

     for(int i=0;i<n;i++){

        cin>>arr[i];
     }

     for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){

            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                }

        }
     }
     for(int i=0;i<n;i++){

        cout<<arr[i];
     }
   }/*/

   //----------------bubble short-------------------

/*/int main(){
    int n;
     cin>>n;

     int arr[n];

     for(int i=0;i<n;i++){

        cin>>arr[i];
     }
     int counter =1;

     while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
             
            }
        }
        counter++;
     }
     for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
     }
}/*/
// ---------------------------insertion---------
  
// int main(){
//     int n;
//     cin>>n;

//    int arr[n];
//     for(int i=0;i<n;i++){
//        cin>>arr[i];
//     }

//     for(int i=1;i<n;i++){

//     int current = arr[i];
//     int j =i-1;

//     while(arr[j]>current && j>=0 ){
//         int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//         j--;
//     }


//     }
//      for(int i=0;i<n;i++){

//         cout<<arr[i]<<" ";
//      }
// }
