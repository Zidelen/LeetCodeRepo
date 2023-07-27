class Solution{
public:
    string longestCommonPrefix(vector<string> &strs){
        int smallestWord = 200;
        string prefix;
        
        for(int i = 0; i < strs.size(); i++){
            if(strs[i].size() < smallestWord){
                smallestWord = strs[i].size();
            }
        }
        for(int i = 0; i < smallestWord; i++){
            prefix += strs[0].at(i);
            for(int j = 0; j < strs.size(); j++){
                if(strs[j].at(i) != prefix.at(i)){
                    prefix.pop_back();
                    return prefix;
                }
            }
        }
        return prefix;
    }
};