class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];

        if(oldColor != newColor)
            solve(image, sr, sc, oldColor, newColor);

        return image;
    }

    void solve(vector<vector<int>>& image, int i, int j, int oldColor, int newColor) {

        if(i < 0 || i >=image.size() || j < 0 || j>=image[0].size())
            return;

        if(image[i][j] != oldColor)
            return;

        image[i][j] = newColor;
        solve(image, i+1, j, oldColor, newColor);
        solve(image, i, j+1, oldColor, newColor);
        solve(image, i-1, j, oldColor, newColor);
        solve(image, i, j-1, oldColor, newColor);

        return;
    }

};
