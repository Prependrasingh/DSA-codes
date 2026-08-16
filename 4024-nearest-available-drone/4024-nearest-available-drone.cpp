class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {

        int min_distance = INT_MAX;
        int idx = -1;

        for(int i = 0 ; i < drones.size() ; i++){
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];

            int distance = abs(x - target[0]) + abs(y - target[1]);
            // min_distance = distance;
            if(distance <= range && min_distance > distance){
                min_distance = distance;
                idx = i;
            }
        }

        return idx;
        
    }
};