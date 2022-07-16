class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string res = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != 32){
                temp.push_back(s[i]);
            }else{
                reverse(temp.begin(),temp.end());
                res = res+ temp;
                res = res + " ";
                temp.erase(temp.begin(),temp.end());
            }
        }reverse(temp.begin(),temp.end());
        res = res + temp;
        return res;
    }
};