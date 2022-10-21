#include<iostream>
#include<algorithm>

#define int long long int

int multiply(int a,int b,int c){

    int result = 0;
    
    while(b){

        if(b&1){

            result = result+a;
            result %= c;
        }
        a += a;
        a %= c;
        b = b>>1;
    }
    return result;
}
int32_t main(){

    system("clear");
    std::cout<<multiply(1000000000000000,1000000000000010,1e9+7)<<std::endl;
    
}