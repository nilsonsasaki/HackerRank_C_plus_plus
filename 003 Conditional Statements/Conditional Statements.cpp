#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string text [] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    
    if(n<=9){
    
        cout<<text[n];
        
    } else if (n>9){
    
        cout<<text[10];
    }
    
    return 0;
}

