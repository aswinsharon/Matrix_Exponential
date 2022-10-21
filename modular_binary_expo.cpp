#include<iostream>
#include<algorithm>
#include<fstream>
#include<math.h>

#define String string
#define int long long int

const int mod = 1e9+7;

int power(int a,int b){

    int result = 1;

    while(b > 0){

        if(b&1){
            result = result*a,
            result %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }

    return result;
}

int32_t main(){
   
   int a,b;
  
   std::cout<<power(2,200);

}

//to make to the limit where our compiler can handle