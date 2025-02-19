#include <cstdlib>
#include <iostream>
#include <algorithm>
class Solution {
    public:
        bool isPalindrome(int x) {
            std::string num_str = std::to_string(x);
            std::string reversed_str = num_str;
            std::reverse(reversed_str.begin(), reversed_str.end());
            if(num_str == reversed_str){
                return true;
            }
            else{
                return false;
            }
            
        }
    };

int main() {
    int num = -12321;
    Solution sol;
    bool result = sol.isPalindrome(num);
    std::cout << (result ? "true" : "false") << std::endl;
    return EXIT_SUCCESS;
    }