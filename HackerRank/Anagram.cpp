//https://www.hackerrank.com/challenges/anagram/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int n = s.length();
    int ans = 0;
    
    if(n % 2 != 0){
        return -1;
    }
    
    int c1[28];
    int c2[28];
    memset(c1,0,sizeof(c1));
    memset(c2,0,sizeof(c2));
    
    for(int i=0; i<n/2; ++i){
        c1[s[i]-'a']++;
    }
    for(int i=n/2; i<n; ++i){
        c2[s[i]-'a']++;
    }
    
    for(int i=0; i<28; ++i){
        ans += abs(c1[i] - c2[i]);
    }
    return ans/2;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
