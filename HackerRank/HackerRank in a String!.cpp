//https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>
using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    deque<char> h;
    h.push_back('h');
    h.push_back('a');
    h.push_back('c');
    h.push_back('k');
    h.push_back('e');
    h.push_back('r');
    h.push_back('r');
    h.push_back('a');
    h.push_back('n');
    h.push_back('k');
    
    for(char c:s){
        if(c == h.front()){
            h.pop_front();
        }
    }
    if(h.size() == 0){
        return "YES";
    }
    return "NO";

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

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
