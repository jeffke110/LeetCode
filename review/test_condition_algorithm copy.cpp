#include <iostream>
#include <algorithm>
#include <vector>


bool is_prime(int number){
    if(number <= 1){
        return false;
    }else if (number <= 3){
        return false;
    }else if (number % 2 == 0 || number % 3 == 0){
        return false;
    }
    for(int i = 5; i * i <= number; i += 6){
        if(number % i == 0 || number % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    std::vector<int> v1 = {2, 3, 4, 5, 6, 7, 11, 13, 17, 19};

    bool all_primes = all_of(v1.begin(), v1.end(), is_prime);
    bool any_prime = any_of(v1.begin(), v1.end(), is_prime);
    bool none_prime = none_of(v1.begin(), v1.end(), is_prime);

    return 0;
}


/*
search(v1.begin(), v1.end(), v2.begin(), v2.end())
find
find if 
count
count if
replace v1 32 32
replace if isprime
unique
if(it == v1.end()){
    no elemennts removed
}else{
    v1.resize(it-v1.begin())
}
*/