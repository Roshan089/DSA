#include <iostream>
using namespace std;
#include<cmath>
/*/
int main() {
    int n;
   cin>>n;

   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){

        if (j<=n-i)
        {
            cout<<" ";
        }
        else
        cout<<"*";
        
        
    }
    cout<<endl;
   }

    return 0;
}/*/

/*/int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;

    }
}/*/
  //prime no
/*/int main(){
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"non prime"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
    cout<<"prime";
    }

}/*/

  //------------------- reverse no----------

/*/  int main(){
    
    int n;
    cin>>n;

    int reverse=0;
     
     while (n>0)
     {
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
     }
     cout<<reverse<<endl;
  }/*/

  //---------------------AMSTRONG NUMBER------------

 /*/int main()
  {
    
    int n;
    cin>>n;
    int ams=0;

    while(n>0){
    
        int digit= n%10;

        ams = ams +digit*digit*digit;
        n=n/10;

    }
    cout<<ams;

  }/*/

  //----------------prime between 2 number----

/*/ bool prime(int num){
       for(int j=2;j<=sqrt(num);j++){
       if(num%j==0){
        return false;
       }
    }
    return true;
 }

  int main(){

    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        
         if(prime(i)){

           cout<<i<<endl;  

         }

    }
  }/*/
  //-----------------------fibonachi



/*void fibo(int num){


int t1=0;
int t2=1;
int nexterm;
for(int i=1; i<=num;i++){
cout<<t1<<endl;;
nexterm=t1+t2;
t1=t2;
t2=nexterm;
    
}

}

  int main(){

  int n;
  cin>>n;

  fibo(n);
  }/*/


  //--------------factorial-----------

/*/void fact(int num){

    int facto=1;
    for(int i=num;i>0;i--){
    
      facto*=i;
      

       
    }
cout<<facto;
}

  int main(){

    int n;
    cin>>n;

    fact(n);
  }/*/

  int main(){

    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<array[2];
  }