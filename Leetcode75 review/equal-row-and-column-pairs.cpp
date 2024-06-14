#include <vector>
#include <string>
#include <unordered_map>


class Solution {
public:
    std::string vectorToString(const std::vector<int> &vec){
        std::string result;

        for(const auto &num : vec){
            result += std::to_string(num) + ",";
        }
        return result;
    }


    int equalPairs(std::vector<std::vector<int>>& grid) {
        std::unordered_map<std::string, int> rowMap;
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            rowMap[vectorToString(grid[i])]++;
        }

        for(int col = 0; col < grid.size(); col++){
            std::vector<int> colVec;
            for(int row = 0; row < grid.size(); row++){
                colVec.push_back(grid[row][col]);
            }
            std::string colKey = vectorToString(colVec);

            if(rowMap.find(colKey) != rowMap.end()){
                count += rowMap[colKey];
            }


        }
        return count;
        
    }
};