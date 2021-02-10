//https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */

int findRank(int p, int ranks[], vector<int>& ranked){
    //2. find rank using binary search
    int low = 0;
    int high = ranked.size()-1;
    int mid;
    int rank;
    int n = ranked.size();
    //highest
    if(ranked[0] < p){
        return 1;
    }
    //lowest
    if(ranked[n-1] > p){
        return ranks[n-1]+1;
    }
    
    while(low <= high){
        mid = (low+high)/2;
        if(ranked[mid] == p){
           return ranks[mid]; 
        } 
        else if(ranked[mid] > p){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    if(ranked[mid] > p){
        return ranks[mid]+1;
    }else{
        return ranks[mid];
    }
    //1. brute force
    /*ranked.push_back(p);
    sort(ranked.begin(), ranked.end(), greater<int>());
    int ranks[ranked.size()];
    int rank = 1;
    int index = 0;
    for(int i=0; i<ranked.size(); ++i){
        if(i == 0){
            ranks[i] = rank;
        }else{
            if(ranked[i] != ranked[i-1]){
                rank++;
            }
            ranks[i] = rank;
        }
        
        if(p == ranked[i]){
            index = i;
        }
    }
    return ranks[index];*/
    
}
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> ans;
    int ranks[ranked.size()];
    //set ranks
    int rank = 1;
    ranks[0] = rank;
    for(int i=1; i<ranked.size(); ++i){
        if(ranked[i-1] != ranked[i]){
            rank++;
        }
        ranks[i] = rank;
    }
    
    for(int p : player){
        ans.push_back(findRank(p,ranks,ranked));    
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ranked_count_temp;
    getline(cin, ranked_count_temp);

    int ranked_count = stoi(ltrim(rtrim(ranked_count_temp)));

    string ranked_temp_temp;
    getline(cin, ranked_temp_temp);

    vector<string> ranked_temp = split(rtrim(ranked_temp_temp));

    vector<int> ranked(ranked_count);

    for (int i = 0; i < ranked_count; i++) {
        int ranked_item = stoi(ranked_temp[i]);

        ranked[i] = ranked_item;
    }

    string player_count_temp;
    getline(cin, player_count_temp);

    int player_count = stoi(ltrim(rtrim(player_count_temp)));

    string player_temp_temp;
    getline(cin, player_temp_temp);

    vector<string> player_temp = split(rtrim(player_temp_temp));

    vector<int> player(player_count);

    for (int i = 0; i < player_count; i++) {
        int player_item = stoi(player_temp[i]);

        player[i] = player_item;
    }

    vector<int> result = climbingLeaderboard(ranked, player);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
