//https://www.hackerrank.com/challenges/reduced-string/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    vector<char> cache;
    string ans = "";
    cache.push_back(s[0]);
    for(int i=1; i<(int)s.length(); ++i){
        if(cache.back() == s[i]){
            cache.pop_back();
        }else{
            cache.push_back(s[i]);
        }
    }
    
    for(char c : cache){
        ans += c;
    }
    if(ans.length() == 0){
        ans = "Empty String";
    }
    return ans;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
