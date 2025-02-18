#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];  

            if (map.find(complement) != map.end()) { 
                return {map[complement], i};  
            }
            
            map[nums[i]] = i;  
        }
        
        return {};  
    }
};




int main(){

    std::vector<int> vec {6, 3, 4, 2};

    Solution sol;
    std::vector<int> k;
    k = sol.twoSum(vec, 6);
    std::cout << k[0] << k[1] << std::endl;

    return EXIT_SUCCESS;
}