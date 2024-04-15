#include "printarray.h"
#include <vector>
#include <iostream>




int main(){
    std::vector<int> arr = {1,2,3,4,5};
    char newarr[5] = {'h','e','l','o'};

    std::vector<std::vector<int>> my2darray = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    
    print_vector<int>(arr);

    print_2dvector(my2darray);
    //print_array<char>(newarr, 5);

    //print_2darray<int, 3, 3>(my2darray);
    return 0;
}