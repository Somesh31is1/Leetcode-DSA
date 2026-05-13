class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n!=m){
            return false;
        }
        int array[26] = {0};
        for(int i=0; i<n;i++){
            array[s[i]-'a']++;
            array[t[i]-'a']--;

        }
        for(int i=0;i<26;i++){
            if(array[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};
