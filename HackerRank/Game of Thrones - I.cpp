//https://www.hackerrank.com/challenges/game-of-thrones/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    int cache[28];
    memset(cache,0,sizeof(cache));
    int even = 0;
    int odd = 0;
    
    for(char c : s){
        cache[c-'a']++;
    }
    
    for(int n : cache){
        if(n %2 == 0){
            odd++;
        }else{
            even++;
        }
    }
    //abcddcba
    if(even == 1 || even == 0 ){
        return "YES";
    }
    return "NO";
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
