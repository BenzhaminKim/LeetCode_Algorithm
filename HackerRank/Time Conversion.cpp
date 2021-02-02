//https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     string time = s.substr(8,2);
     int h = stoi(s.substr(0,2));
     string m = s.substr(3,2);
     string ss = s.substr(6,2);
     stringstream ans;
     if(h == 12){
        if(time == "AM"){
            // return original value
            h -= 12;
        }
     }else{
         if(time == "PM"){
             //add 12 to hour
             h += 12;
         }
     }
     ans << setw(2)<< setfill('0')<<h<< ":"<<m<<":"<<ss;
     return ans.str();

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
