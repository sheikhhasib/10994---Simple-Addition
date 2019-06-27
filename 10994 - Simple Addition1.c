#include<stdio.h>
long long f(long long n){
    long long h,ans=0;
    while(n){
        h = n%10;
        n = n/10;
        ans +=n*45+(h*(h+1)/2);
    }
    return  ans;
}
int main(){
    long long p,q;
    while(scanf("%lld %lld",&p,&q),p>=0||q>=0){
        printf("%lld\n",f(q)-f(p-1));
    }
    return  0;
}
