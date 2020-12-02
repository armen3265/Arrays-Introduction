#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int N;
    std::cin >> N;
    int *array = new int[N];

    for (int i = 0; i < N; ++i)
    {
        std::cin >> array[i];
    }

    for (int i = 0; i < N/2; ++i)
    {
        swap(array[i], array[N-1-i]);
    }
    
    
    for(int i = 0; i < N; ++i)
    {
        std::cout<<array[i]<<' ';
    }
    
    delete array;
    return 0;
}
