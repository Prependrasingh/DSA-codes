class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        
        int n = nums.size();
    
    if (n < k) return -1;

    unordered_map<int, int> element;

    unordered_map<int, int> window;
    for (int i = 0; i < k; ++i) {
        window[nums[i]]++;
    }
        
    for (const auto& i : window) {
        element[i.first]++;
    }

    for (int i = k; i < n; ++i) {
        int j = nums[i - k];
        window[j]--;
        if (window[j] == 0) {
            window.erase(j);
        }

        int l = nums[i];
        window[l]++;

        for (const auto& x : window) {
            element[x.first]++;
        }
    }

    int largest = -1;
    for (auto& i : element) {
        if (i.second == 1) {
            largest = max(largest, i.first);
        }
    }

    return largest;
        
        
    }
};