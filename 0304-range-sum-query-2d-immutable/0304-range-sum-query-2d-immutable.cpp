class NumMatrix {
public:
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {

        prefix = matrix;

        int rows = prefix.size();
        int cols = prefix[0].size();

        // Row-wise prefix sum
        for (int i = 0; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                prefix[i][j] = prefix[i][j] + prefix[i][j - 1];
            }
        }

        // Column-wise prefix sum
        for (int j = 0; j < cols; ++j) {
            for (int i = 1; i < rows; ++i) {
                prefix[i][j] = prefix[i][j] + prefix[i - 1][j];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {

        int sum = prefix[row2][col2];

        if (row1 > 0) {
            sum -= prefix[row1 - 1][col2];
        }

        if (col1 > 0) {
            sum -= prefix[row2][col1 - 1];
        }

        if (row1 > 0 && col1 > 0) {
            sum += prefix[row1 - 1][col1 - 1];
        }

        return sum;
    }
};

