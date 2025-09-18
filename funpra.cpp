
#include<iostream>
using namespace std;

// Function Defination

// int square(int a, int b)
// {
//     if(a > b){
//         cout<<"A is greater";
//     } else {
//         cout<<"B is greater";
//     }
// }

// int main(){
//     square(20,30);
//     return 0;
// }



// int sum(int a,int b){
//     int res = a+b;
// //cout<<"Res : " << res;
// }  

// int main(){
//   cout<<sum(60,60)<<endl;
  // }



// int min(int a,int b){
//     if(a<b){
//        return a;
//     }else{
//       return b;
//     }
// }

// int main(){
//    cout<< "min :"<< min(20,30) << endl;
// }

// // Sum of Numbers
// void sumofnumbers(int n){
//   int sum=0;
//   for(int i=1 ; i<=n ;i++){
//     sum = sum+i;
   
//   }
//    cout<< "Sum : " <<sum;
// }
    
// int main(){
// sumofnumbers(5);
// sumofnumbers(10);
// return 0;
// }


// void factorial(int n){
//   int fact = 1;
//   for(int i=1;i<=n;i++){
//     fact = fact * i;
//   }
//   cout << fact;
// }

// int main(){
//   factorial(5);
// }


// int sumofdigit(int n){
//   int digsum =0;
//   while(n > 0 ){
//    int lastdigit = n % 10;
//    n /=10;
//    digsum += lastdigit;
//   }
  
// return digsum;
// }

// int main(){
//   sumofdigit(23);
//   return 0;
// }



int factorial(int n){
  int fact =1;
  for(int i=1; i<=n; i++){
    fact= fact*i;

  }
  return fact;
}

int ncr(int n,int r){
int fact_n = factorial(n);
int fact_r = factorial(r);
int fact_nar = factorial(n-r);
return fact_n / (fact_r*fact_nar);

}
int main(){
int n=8 ,r =2;
ncr(n,r);


}