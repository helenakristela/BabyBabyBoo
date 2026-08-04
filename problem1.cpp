class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges) {
        vector<vector<array<int, 3>>> graph(n);
        for (const vector<int>& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int start = edge[2];
            int end = edge[3];
            graph[u].push_back({v, start, end});
        }
        using State = pair<long long, int>;
        vector<long long> dist(n, LLONG_MAX);
        priority_queue<State,vector<State>,greater<State>> pq;
        dist[0] = 0;
        pq.push({0, 0});
        while (!pq.empty()) {
            auto [currentTime, currentNode] = pq.top();
            pq.pop();
            if (currentTime != dist[currentNode]) {
                continue;
            }
            if (currentNode == n - 1) {
                return static_cast<int>(currentTime);
            }
            for (const auto& edge : graph[currentNode]) {
                int nextNode = edge[0];
                long long start = edge[1];
                long long end = edge[2];
                long long departureTime = max(currentTime, start);
                if (departureTime > end) {
                    continue;
                }
                long long arrivalTime = departureTime + 1;
                if (arrivalTime < dist[nextNode]) {
                    dist[nextNode] = arrivalTime;
                    pq.push({arrivalTime, nextNode});
                }
            }
        }
        return -1;
    }
};