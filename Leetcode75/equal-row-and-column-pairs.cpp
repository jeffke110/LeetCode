#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>

class Solution
{
public:
    std::string VectoString(const std::vector<int> &vec)
    {
        std::string result;
        for (int num : vec)
        {
            result += std::to_string(num) + ",";
        }
        return result;
    }

    int equalPairs(std::vector<std::vector<int>> &grid)
    {
        std::unordered_map<std::string, int> gridMap;

        for (const auto &nums : grid)
        {
            gridMap[VectoString(nums)]++;
        }
        int count = 0;

        for (int col = 0; col < grid.size(); col++)
        {
            std::vector<int> colVector;
            for (int row = 0; row < grid.size(); row++)
            {
                colVector.push_back(grid[row][col]);
            }
            std::string columnKey = VectoString(colVector);
            if (gridMap.find(columnKey) != gridMap.end())
            {
                count += gridMap[columnKey];
            }
        }

        return count;
    }
};