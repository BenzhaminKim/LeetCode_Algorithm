//https://www.hackerrank.com/challenges/encryption/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    int n = s.length();
    int row = floor(sqrt(n));
    int col = ceil(sqrt(n));
    if(row*col < n){
        row+=1;
    }
    vector<vector<char>> cache;
    string ans = "";
    for(int i=0; i<row; ++i){
        vector<char> r;
        for(int j=0; j<col; ++j){
            int index = (i*col)+j;
            r.push_back(s[index]);   
            
        }
        cache.push_back(r);
    }
    
    for(int i=0; i<col; ++i){
        for(int j=0; j<row; ++j){
            cout << cache[j][i];
            if(cache[j][i] != '\0'){
                ans += cache[j][i];
            }
        }
        ans += " ";
    }
    
    
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
