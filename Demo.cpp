class Solution {
public:
    vector<int> spiralOrder(const vector<vector<int> > &matrix) {
        int rows = matrix.size();
        if (rows == 0) return vector<int> ();
        int cols = matrix[0].size();
        int row = 0, col = 0, layer = 0;
        vector<int> res;
        res.push_back(matrix[0][0]);
        int dir = 1;
        for (int step = 1; step < rows * cols; step++) {
            switch(dir) { // based on dir, check and change dir, then move on
                case 1: // supposed to go right
                    if (col == cols - layer - 1) { // reach right bound
                        row++;
                        dir = 2;
                    }
                    else col++;
                    break;
                case 2: // supposed to go down
                    if (row == rows - layer - 1) { // reach downside bound
                        col--;
                        dir = 3;
                    }
                    else row++;
                    break;
                case 3: // supposed to go left
                    if (col == layer) { // reach left bound
                        row--;
                        dir = 4;
                    }
                    else col--;
                    break;
                case 4: // supposed to go up
                    if (row == layer + 1) { // reach upside bound
                        col++;
                        dir = 1;
                        layer++;
                    }
                    else row--;
                    break;
            }
            res.push_back(matrix[row][col]);
        }
        return res;
    }
};