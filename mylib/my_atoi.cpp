//
// Created by S861321135 on 04/03/2026.
//

#include "my_atoi.h"

#include <string_view>

int my_atoi::atoi(const std::string_view& str)
{
    int result = 0;
    for (const char c : str)
    {
        if (c < '0' || c > '9')
        {
            break; // Stop parsing if we encounter a non-digit character
        }
        result = result * 10 + (c - '0'); // Convert char to int and accumulate
    }
    return result;
}


