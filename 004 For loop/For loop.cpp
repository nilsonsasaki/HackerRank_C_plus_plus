#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    string text [] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    
    int a,b;
    cin>>a>>b;
    
    for (int i=a;i<=b;i++){
    
        if(i<=9){
        
            cout<<text[i]<<endl;
            
        } else if (i>9&&i%2==0){
        
            cout<<text[10]<<endl;
            
        } else if (i>9&&i%2!=0){
        
            cout<<text[11]<<endl;
        }
    }
    return 0;
}
