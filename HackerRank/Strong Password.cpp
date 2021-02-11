//https://www.hackerrank.com/challenges/strong-password/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    bool num = false;
    bool low = false;
    bool up = false;
    bool spec = false;
    int count =  0;
    
    for(char c : password){
        if(numbers.find(c) != string::npos){
            num = true;
        }
        else if(lower_case.find(c) != string::npos){
            low = true;
        }
        else if(upper_case.find(c) != string::npos){
            up = true;
        }
        else if(special_characters.find(c) != string::npos){
            spec = true;
        }
    }
    if(!num){
        count++;
    }
    if(!low){
        count++;
    }
    if(!up){
        count++;
    }
    if(!spec){
        count++;
    }
    
    if(password.length()+count <6){
        count += 6 - (password.length() + count);
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
