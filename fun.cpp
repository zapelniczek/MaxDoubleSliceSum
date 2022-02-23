#include "header.h"
#include <algorithm>

int solution(std::vector<int>& numbers)
{
    std::vector<int> sum_LR (numbers.size(), 0);
    std::vector<int> sum_RL (numbers.size(), 0);

    for(size_t i = 1; i < numbers.size() - 1; ++i)
    {
        sum_LR[i] = std::max(sum_LR[i-1] + numbers[i], 0);
    }

    for(size_t i = numbers.size() - 2; i > 0; --i)
    {
        sum_RL[i] = std::max(sum_RL[i+1] + numbers[i], 0);
    }

    int max;

    for(int i = 1; i < numbers.size()-1; ++i)
    {
        max = std::max(max, sum_LR[i-1]+ sum_RL[i+1]);
    }

    return max;
} // 4 8 59 3 -100 - 700  90 30
 