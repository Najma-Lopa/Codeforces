#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int n,k;
    long long int num;
    cin>>n>>k;
    num=(ceil)(n/2.0);
    if(k<=num)
    cout<<2*k-1;

    else {
        k=k-num;
        cout<<2*k;
    }
}