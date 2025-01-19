#include <bits/stdc++.h>
using namespace std;

int get_perimeter(vector<vector<bool>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int perimeter = 0;
    
    // Check each cell
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(grid[i][j]) {  // If cell is colored
                // Count uncolored adjacent cells (including edges)
                // Top
                if(i == 0 || !grid[i-1][j])
                    perimeter++;
                // Bottom
                if(i == rows-1 || !grid[i+1][j])
                    perimeter++;
                // Left
                if(j == 0 || !grid[i][j-1])
                    perimeter++;
                // Right
                if(j == cols-1 || !grid[i][j+1])
                    perimeter++;
            }
        }
    }
    return perimeter;
}

void solve_test_case() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<int,int>> moves(n);
    for(int i = 0; i < n; i++) {
        cin >> moves[i].first >> moves[i].second;
    }
    
    // Find grid dimensions
    int max_x = m;
    int max_y = m;
    int curr_x = 0;
    int curr_y = 0;
    
    for(auto [dx, dy] : moves) {
        curr_x += dx;
        curr_y += dy;
        max_x = max(max_x, curr_x + m);
        max_y = max(max_y, curr_y + m);
    }
    
    // Create grid
    vector<vector<bool>> grid(max_y, vector<bool>(max_x, false));
    
    // Reset current position
    curr_x = 0;
    curr_y = 0;
    
    // Fill squares for each move
    for(auto [dx, dy] : moves) {
        curr_x += dx;
        curr_y += dy;
        // Fill m×m square at current position
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                grid[curr_y + i][curr_x + j] = true;
            }
        }
    }
    
    cout << get_perimeter(grid) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve_test_case();
    }
    
    return 0;
}