//MAXIMUM SUBARRAY PRODUCT
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0) return 0;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    if(n==1) return ar[0];
    
    int currentProduct=1,maxProduct=0;
    for(int i=0;i<n;i++){
        currentProduct*=ar[i];
        maxProduct=max(maxProduct,currentProduct);
        if(currentProduct==0) currentProduct=1;
    }
    currentProduct=1;
    for(int i=n-1;i>=0;i--){
        currentProduct*=ar[i];
        maxProduct=max(maxProduct,currentProduct);
        if(currentProduct==0) currentProduct=1;
    }
    cout<<maxProduct;
    return 0;
}
