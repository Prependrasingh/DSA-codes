class Solution {
public:
    bool checkString(string s) {

        // string copy = s;

        // sort(copy.begin() , copy.end());

        // for(int i = 0 ; i < s.size() ; i++)
        // {
        //     if(s[i] != copy[i])
        //     {
        //         return false;
        //         break;
        //     }
        // }
        // return true;

        for(int i = 1 ; i < s.size() ; i++)
        {
            if(s[i] == 'a' && s[i - 1] == 'b')
            {
                return false;
                break;
            }
        }
        return true;
        
    }
};