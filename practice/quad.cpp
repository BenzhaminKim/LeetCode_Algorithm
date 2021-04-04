//https://programmers.co.kr/learn/courses/30/lessons/68936?language=cpp

#include <string>
#include <vector>

using namespace std;

void quad(int row, int col, int length, vector<vector<int>>& arr, vector<int>& answer){
    if(length == 1){
        int value = arr[row][col];
        answer[value]++;
        return ;
    }
    
    int init = arr[row][col];
    bool chk = true;
    
    for(int i=row; i<row+length; ++i){
        for(int j=col; j<col+length; ++j){
            if(init != arr[i][j]){
                chk = false;
                break;
            }
        }
        if(!chk) break;
    }
    if(chk){
        answer[init]++;
        return;
    }else{
        quad(row, col, length/2, arr, answer);
        quad(row+length/2, col, length/2, arr, answer);
        quad(row, col+length/2, length/2, arr, answer);
        quad(row+length/2 ,col+length/2 , length/2, arr, answer);
    }
    return;
    
}
vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer = {0,0};
    int length = arr.size();
    
    quad(0,0,length,arr,answer);
    
    return answer;
}

