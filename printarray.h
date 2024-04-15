#ifndef PRINTARRAY_H
#define PRINTARRAY_H


#include<vector>
#include<string>
#include <iostream>


PRINTARRAY_H template<class anytype> void print_vector(std::vector<anytype> a){
    for (int i = 0; i < a.size(); i++) {
		std::cout << a[i] << ' ';
	}
	std::cout << std::endl;
}


PRINTARRAY_H template<class anytype> void print_2dvector(std::vector<std::vector<anytype>> a){
    for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			std::cout << a[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

PRINTARRAY_H template <class anytype> void print_array(anytype arr[], int n){
    for (int i = 0; i < n; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
PRINTARRAY_H template <class anytype, std::size_t row, std::size_t col> void print_2darray(anytype (&arr)[row][col]){
    for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

PRINTARRAY_H void print_string(std::string a, char delim);

#endif