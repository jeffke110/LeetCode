#include <iostream>
#include <stack>
#include <vector>
#include <cmath>

class Solution {
public:

    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
           std::stack<int> st;
    
    for (int asteroid : asteroids) {
        bool alive = true;
        while (alive && !st.empty() && asteroid < 0 && st.top() > 0) {
            if (st.top() < -asteroid) {
                st.pop();
                continue;
            } else if (st.top() == -asteroid) {
                st.pop();
            }
            alive = false;
        }
        if (alive) {
            st.push(asteroid);
        }
    }
    
    std::vector<int> result(st.size());
    for (int i = st.size() - 1; i >= 0; --i) {
        result[i] = st.top();
        st.pop();
    }
    
    return result;

    }
};

