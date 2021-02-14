//https://www.hackerrank.com/challenges/making-anagrams/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int cache[28];
    memset(cache,0,sizeof(cache));
    int ans = 0;
    
    for(int i=0; i<(int)s1.length(); ++i){
        cache[s1[i] - 'a']++;
    }
    for(int n : s2){
        cache[n - 'a']--;
    }
    for(int n : cache){
        ans += abs(n);
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
