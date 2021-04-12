class Solution {
public:
    
    string frequencySort(string s) {
        map<int,int> cache;
        vector<pair<int,int>> container;
        string answer = "";
        
        for(int i=0; i<s.length(); ++i){
            int ascii = (int)s[i];
            cache[ascii]++;
        }
        
        for(auto& it : cache){
            container.push_back(make_pair(it.second,it.first));
        }
        sort(container.rbegin(), container.rend());
        
        for(auto& it : container){
            while(it.first--){
                answer += (char)it.second;
            }
            
        }
        
        return answer;
    }
};