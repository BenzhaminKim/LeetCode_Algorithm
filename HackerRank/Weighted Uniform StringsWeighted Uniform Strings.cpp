//https://www.hackerrank.com/challenges/weighted-uniform-string/problem
#include <bits/stdc++.h>

using namespace std;
    map<char,int> dic = {
        {'a',1},
        {'b',2},
        {'c',3},
        {'d',4},
        {'e',5},
        {'f',6},
        {'g',7},
        {'h',8},
        {'i',9},
        {'j',10},
        {'k',11},
        {'l',12},
        {'m',13},
        {'n',14},
        {'o',15},
        {'p',16},
        {'q',17},
        {'r',18},
        {'s',19},
        {'t',20},
        {'u',21},
        {'v',22},
        {'w',23},
        {'x',24},
        {'y',25},
        {'z',26}
    };
// Complete the weightedUniformStrings function below.

bool hasNum(vector<int>& cache, int q){
    int low = 0;
    int high = cache.size()-1;
    int mid;
    
    while(low <= high){
        mid = (low+high)/2;
        if(cache[mid] == q){
            return true;
        }
        else if(cache[mid] < q){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return false;
}

vector<string> weightedUniformStrings(string s, vector<int> queries) {
    vector<int> cache;
    cache.push_back(dic[s[0]]);
    int sum = 0;
    vector<string> ans;
    
    for(int i=1; i<(int)s.length(); ++i){
        if(s[i-1] == s[i]){
            cache.push_back(dic[s[i]] + cache.back());
        }else{
            cache.push_back(dic[s[i]]);
        }
    }
    sort(cache.begin(), cache.end());
    
    for(int q : queries){
        if( hasNum(cache,q) ){
            ans.push_back("Yes");
        }else{
            ans.push_back("No");
        }
    }
    return ans;

}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
