class Solution {
private:
    // Function to generate a single row of Pascal's Triangle
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        
        /// Inserting the 1st element
        ansRow.push_back(1); 

        // Calculate the rest of the elements
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        
        return ansRow; // Return the computed row
    }

public:
    // Function to generate Pascal's Triangle up to n rows
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>> pascalTriangle;

        // Compute the entire Pascal's Triangle
        for (int row = 1; row <= n; row++) {
            pascalTriangle.push_back(generateRow(row));
        }
        
        //return the pascalTriangle
        return pascalTriangle;
    }
};
