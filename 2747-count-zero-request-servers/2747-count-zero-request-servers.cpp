class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = queries.size();
        vector<int> ans(m);
        
        vector<pair<int, int>> sortedQueries(m);
        for (int i = 0; i < m; ++i) {
            sortedQueries[i] = {queries[i], i};
        }
        
        sort(sortedQueries.begin(), sortedQueries.end());
        sort(logs.begin(), logs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        vector<int> serverCount(n + 1, 0);
        int uniqueServersInWindow = 0;
        int left = 0, right = 0;
        int numLogs = logs.size();
        
        for (const auto& [queryTime, originalIndex] : sortedQueries) {
            int windowStart = queryTime - x;
            int windowEnd = queryTime;
            
            while (right < numLogs && logs[right][1] <= windowEnd) {
                int serverId = logs[right][0];
                if (serverCount[serverId] == 0) {
                    uniqueServersInWindow++;
                }
                serverCount[serverId]++;
                right++;
            }
            
            while (left < numLogs && logs[left][1] < windowStart) {
                int serverId = logs[left][0];
                serverCount[serverId]--;
                if (serverCount[serverId] == 0) {
                    uniqueServersInWindow--;
                }
                left++;
            }
            
            ans[originalIndex] = n - uniqueServersInWindow;
        }
        
        return ans;
    }
};
