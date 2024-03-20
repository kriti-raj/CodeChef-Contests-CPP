#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max();

struct Edge {
    int to, capacity, cost;
};

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    vector<vector<Edge>> graph(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v, k, c;
        cin >> u >> v >> k >> c;
        graph[u].push_back({v, k, c});
        graph[v].push_back({u, k, c});
    }

    long long left = 0, right = INF, ans = -1;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        vector<long long> dist(n + 1, INF);
        dist[1] = 0;

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0, 1});

        while (!pq.empty()) {
            int u = pq.top().second;
            long long d = pq.top().first;
            pq.pop();

            if (d != dist[u]) continue;

            for (const Edge& edge : graph[u]) {
                int v = edge.to;
                int capacity = edge.capacity;
                int cost = edge.cost;

                for (int k = 0; k <= capacity; k++) {
                    long long new_dist = dist[u] + 1LL * k * cost;

                    if (new_dist < dist[v]) {
                        dist[v] = new_dist;
                        pq.push({dist[v], v});
                    }
                }
            }
        }

        if (dist[n] <= mid) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << 1LL * ans * p << endl;
    }

    return 0;
}
