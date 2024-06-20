#include <iostream>
#include <queue>

class RecentCounter {
public:
    int counter;
    std::queue<int> requestQueue;
    RecentCounter() {
        counter = 0;
    }
    
    int ping(int t) {
        if(t < 3000){
            requestQueue.push(t);
        }
        return requestQueue.size();
    }
};