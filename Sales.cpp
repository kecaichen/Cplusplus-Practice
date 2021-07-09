#include <iostream>
#include <vector>
#include <iterator>
#include "TemplateLearn.hpp"
#include "Sales.hpp" 
#include "Blob.hpp"

void CompareTest()
{
    std::cout << "---------------------compare---------------------" << std::endl;
    int a = 3, b = 5;
    std::cout << a << "," << b << "," << Compare(b, a) << std::endl;

    Sales_data stSales1;
    stSales1.bookNo = "sfasfsaf";
    Sales_data stSales2;
    stSales2.bookNo = "hrrgr";

    //Compare(stSales1, stSales2);
}

void FindTest()
{
    std::vector<int> vec{1, 2, 15, 85, 43, 87, 45};

    auto iter = myFind(vec.begin(), vec.end(), 15);
    if (iter != vec.end())
    {
        std::cout << *iter << std::endl;
    }
    
}

void PrintTest()
{
    int Array1[] = {2,34,5,3,21,13};
    Print(Array1);
}

void BeginAndEndtest()
{
    
    int array[] = {1,3,4,5,63,4};

    for (auto iter = MyBegin(array); iter != MyEnd(array); iter++)
    {
        std::cout << *iter << ",";
    }

    std::cout << std::endl;      
}

void ArraySizeTest()
{
    int array[] = {1,3,4,5,63,4};
    std::cout << "Array Size is " << ArraySize(array) << std::endl;

    int array2[ArraySize(array)] = {0};

    Print(array2);
}



int main()
{
    // CompareTest();
    // FindTest();
    //PrintTest();
    //BeginAndEndtest();
    ArraySizeTest();
    return 0;
}