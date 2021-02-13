//https://www.hackerrank.com/challenges/luck-balance/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
//[[5, 1], [2, 1], [1, 1], [8, 1], [10, 0], [5, 0]]
// Complete the luckBalance function below.
int luckBalance(int k, vector<vector<int>> contests) {
    vector<vector<int>> imp;
    int ans = 0;
    for(vector<int> c : contests){
        if(c[1] == 1){     
            imp.push_back(c);   
        }else{
            ans+=c[0];
        }
        
    }
    sort(imp.begin(), imp.end(), greater<vector<int>>());
    
    for(vector<int> c : imp){
        if(k-- > 0){
            ans += c[0];
        }else{
            ans -= c[0];
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    vector<vector<int>> contests(n);
    for (int i = 0; i < n; i++) {
        contests[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> contests[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = luckBalance(k, contests);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
