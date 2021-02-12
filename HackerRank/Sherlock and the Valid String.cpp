//https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int cache[28];
    memset(cache,0,sizeof(cache));
    set<int> values;
    int minNum = INT_MAX;
    int maxNum = 0;
    int sameAsMin = 0;
    int sameAsMax = 0;
    
    for(char c:s){
        cache[c - 'a']++; 
    }
    for(int n:cache){
        if(n==0) continue;
        values.insert(n);
    }
    cout << values.size() << endl;
    if(values.size() >2){
        return "NO";
    }
    if(values.size() == 1){
        return "YES";
    }
    
    for(int v : values){
        minNum = min(minNum,v);
        maxNum = max(maxNum,v);
    }
    for(int n : cache){
        if(n==0) continue;
        if(n == maxNum) ++sameAsMax;
        if(n == minNum) ++sameAsMin;
    }
    
    if(sameAsMin == 1 && minNum == 1) return "YES";
    if((maxNum-minNum) == 1 && sameAsMax == 1) return "YES";
    
    
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
