class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
        int ans[] = {logs[0][0], logs[0][1]};
        
        for (int i = 1; i < logs.size(); i++) {
            int id = logs[i][0];
            int leaveTime = logs[i][1];
            int timeSpent = leaveTime - logs[i - 1][1];
            
            
            if (timeSpent > ans[1]) {
                ans[1] = timeSpent;
                ans[0] = id;
            }
            
            if (timeSpent == ans[1]) {
                ans[0] = min(id, ans[0]);
            }
        }
        
        return ans[0];
    }
};
