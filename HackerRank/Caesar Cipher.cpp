//https://www.hackerrank.com/challenges/caesar-cipher-1/problem
#include <bits/stdc++.h>
#include <deque>
#include <ctype.h>
#include <cctype>
using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
    string origin = "abcdefghijklmnopqrstuvwxyz";
    deque<char> enc;
    string ans = "";
    
    for(int i=0; i<(int)origin.size(); ++i){
        enc.push_back(origin[i]);
    }
    for(int i=0; i<k; ++i){
        enc.push_back(enc.front());
        enc.pop_front();
    }
    
    for(char c : s){
        int index = origin.find(tolower(c));
        if(index != string::npos){
            if(isupper(c)){
                ans += toupper(enc[index]);
            }else{
                ans += enc[index];
            }
        }else{
            ans +=c;
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
