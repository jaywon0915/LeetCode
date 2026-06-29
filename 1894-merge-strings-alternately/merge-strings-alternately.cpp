class Solution {

public:
    string mergeAlternately(string word1, string word2) {
        string answer= "";
        size_t total_length = word1.length() + word2.length();
        int m = word1.length();
        int n = word2.length();
        for(int i=0; i< total_length; i++){
            if(i < m){
                answer += word1[i];
            }
            if(i < n){
                answer += word2[i];
            }
        }
        return answer;
    }
};