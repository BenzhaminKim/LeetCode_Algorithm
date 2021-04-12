class Solution {
public:
    int longestPalindrome(string s) {
        int answer = 0;
        map<char,int> cache;
        int odd = 0;
        
        for(char c : s){
            cache[c]++;
        }
        
        for(auto& it : cache){
            cout << it.first << " " << it.second <<endl;
            if(it.second % 2 == 0){
                answer += it.second;
            }else{
                answer += (it.second-1);
                odd++;
                
            }
        }
        if(odd){
            answer++;
        }
        return answer;
    }
};