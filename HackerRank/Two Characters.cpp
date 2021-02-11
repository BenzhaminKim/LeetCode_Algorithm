//https://www.hackerrank.com/challenges/two-characters/problem
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int getLength(string s){
    for(int i=1; i<(int)s.length(); ++i){
        if(s[i-1] == s[i]){
            return 0;
        }
    }
    return s.length();
}
// Complete the alternate function below.
int alternate(string s) {
    set<char> sets;
    vector<vector<char>> cache;
    vector<char> chars;
    int ans = 0;
    
    for(char c:s){
        sets.insert(c);
    }
    for(char c:sets){
        chars.push_back(c);
    }
    
    for(int i=0; i<(int)chars.size()-1; ++i){
        for(int j=i+1; j<(int)chars.size(); ++j){
            vector<char> tmp;
            tmp.push_back(chars[i]);
            tmp.push_back(chars[j]);
            cache.push_back(tmp);
        }
    }
    
    for(int i=0; i<(int)cache.size(); ++i){
        string temp = "";
        
        for(char c: s){
            if(c == cache[i][0] || c == cache[i][1]){
                temp += c;       
            }
        }
        ans = max(ans,getLength(temp));
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
