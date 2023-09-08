#include <algorithm>
#include <vector>
#include <iostream>

template<class TYPE>
bool check_size(const std::vector<TYPE>& a, const std::vector<TYPE>& b)
{
    return a.size() < b.size();
}

template<class TYPE>
int getLengthOfMissingArray(const std::vector<std::vector<TYPE>>& arrayOfArrays)
{
    if(arrayOfArrays.empty())
    {
      return 0;  
    }
    int min_size = std::min_element(arrayOfArrays.begin(), arrayOfArrays.end(), check_size<TYPE>)->size();
    int max_size = std::max_element(arrayOfArrays.begin(), arrayOfArrays.end(), check_size<TYPE>)->size();
    long long sum = 0;
    long long areph = (min_size + max_size) / 2.0 * (arrayOfArrays.size() + 1);

    for (const auto& i : arrayOfArrays)
    {
        if(i.empty())
        {
          return 0;
        }
      
        sum += i.size();
    }

    return static_cast<int>(areph - sum);
}

int main()
{
    std::vector<std::vector<char>> testInput = { { 'a', 'a', 'a' }, { 'a', 'a' }, { 'a', 'a', 'a', 'a' }, { 'a' }, { 'a', 'a', 'a', 'a', 'a', 'a' } };
    std::cout << getLengthOfMissingArray(testInput);
}
