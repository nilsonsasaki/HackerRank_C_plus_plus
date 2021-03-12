#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    
    cin>>n;
    int array[n];
    
    for (int i=0; i<n; i++){
    
    	cin>>array[i];
    } 
    
    for (i=n-1; i>=0;i--){
    
    	cout<<array[i]<<" ";
    }
    
    return 0;
}

