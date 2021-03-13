#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q,length, value;
    
    cin>>n>>q;
      	
    int queries[q][2];
    vector<vector<int>> matrix;
    
    for(int i=0;i<n;i++){
    
    	cin>>length;
    	vector<int> values;
    	
    	for(int j=0;j<length;j++){
    	
    		cin>>value;
    		values.push_back(value);
    	}
    	
    	matrix.push_back(values);
    	
    }
    
    for(int i=0;i<q;i++){
    
    	cin>>queries[i][0]>>queries[i][1];
    }
    
    for(int i=0;i<q;i++){
    
    	cout<<matrix[queries[i][0]][queries[i][1]]<<endl;
    }
       
    return 0;
}
