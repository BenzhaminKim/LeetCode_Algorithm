#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int arr[n][n];
    memset(arr, 0, sizeof arr);
    int x = 0;
    int y = 0;
    int num = 1;
    
    for(int i=0; i<n; ++i){
        if(i%3 == 0){ // down
            for(int j=0; j<n-i; ++j){            
                arr[x][y] = num++;
                x++;
            }
            x-=1;
            y+=1;
        }
        else if (i%3 == 1) // right
        {
            for(int j=0; j<n-i; ++j){      
                arr[x][y] = num++;    
                y++;  
            }
            x-=1;
            y-=2;
            
        }
        
        else{ // up
            for(int j=0; j<n-i; ++j){         
                arr[x][y] = num++;
                x--;
                y--;   
            }
            x+=2;
            y+=1;
        }
    }
    
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(arr[i][j] != 0)
                answer.push_back(arr[i][j]);
        }
    }
    return answer;
}