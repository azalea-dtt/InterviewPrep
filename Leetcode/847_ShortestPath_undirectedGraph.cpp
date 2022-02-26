 int shortestPathLength(vector<vector<int>>& graph) {
        if (graph.size() == 1) return 0;
        int n = graph.size();
        int finalState = (1 << n) - 1;
        queue <vector<int>> qState; // node_i, state_i
        
        // add all possible cases
        for (int i = 0; i < graph.size(); i++) {
            vector<int> state {i, 1 << i};
            
            qState.push(state);
        }
        vector<vector<int>> visited (n, vector<int> (1<<n, 0));
        //int visited[graph.size()][finalState+1];
        
        int shortestPath = 0;
        while (!qState.empty()) {
            int size = qState.size();
             
            for (int i = 0; i < size; i++) {
                vector<int> nodeState = qState.front();
                qState.pop();
                int curNodeId = nodeState[0];
                int visitedState = nodeState[1];
                if (visitedState == finalState)
                    return shortestPath;
                if (visited[curNodeId][visitedState] == 1)
                    continue;
                visited[curNodeId][visitedState] = 1;
                for (const int v : graph[curNodeId]) {
                    vector<int> newNode {v, visitedState | (1 << v)};
                    qState.emplace(newNode);
                }
            }
            shortestPath++;
        }
        return -1;
    }