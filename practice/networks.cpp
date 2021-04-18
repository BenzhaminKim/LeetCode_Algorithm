#include <string>
#include <vector>
#include <string.h>
#include <iostream>
using namespace std;
/*
1 1 0
1 1 0
0 0 1

1 1 0
1 1 1
0 1 1
*/
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    int net[n];
    int networks = 0;
    memset(net,0,sizeof(net));
    vector<int> stack;
    
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(computers[i][j] == 1){
                computers[j][i] = 1;
            }
        }
    }
    for(int i=0; i<n; ++i){
        if(net[i] == 0){
            networks++;
            net[i] = 1;
            stack.push_back(i);
        }
        while(!stack.empty()){
            int current = stack.back();
            stack.pop_back();
            for(int k=0; k<n; ++k){
                if(net[k] == 0 && computers[current][k] == 1){
                    stack.push_back(k);
                    net[k] = 1;
                }
            }
            
        }
    }
    
    
    return networks;
}