class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        vector<int> ans;

        string master = "123456789";

        for(int length = 2 ; length <= 9 ; length++){
            for(int i = 0 ; i <= 9 - length ; i++){
                int num = stoi(master.substr(i , length));
                if(num >= low && num <= high){
                    ans.push_back(num);
                }
            }
        }

        return ans;
        
    }
};