class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        
        for(int i =0; i < sentences.size(); i++){
            int count = 1;
             for(char ch : sentences[i]){
                if(ch == ' '){
                    count++;
                }
             }
                ans = max(ans, count);
             }
            
        return ans;
    }
};