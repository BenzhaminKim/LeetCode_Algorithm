#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string,int> container;
    
    for(string person : participant){
        if(!container.count(person))
            container[person] = 1;
        else
            container[person]++;
    }
    
    for(string person : completion){
        container[person]--;
    }
    
     for (const auto &item : container) {
         if(item.second)
             answer = item.first;
    }
    return answer;
}