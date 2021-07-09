//#include <algorithm>
template <typename T>
int Compare(const T& data1, const T& data2)
{
    if (data1 < data2)
    {
        return -1;
    }
    else if (data2 < data1)
    {
        return 1;   
    }
    else
    {
        return 0;
    }    
}

template <typename T, typename V>
T myFind(T iterBegin, T iterEnd, const V& data)
{
    for (T i = iterBegin; i != iterEnd; i++)
    {
        if (*i == data)
        {
            return i;
        }
    }
    
    return iterEnd;
}

template <typename T, size_t size>
void Print(const T (&Array)[size])
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << Array[i] << ",";
    } 

    std::cout << std::endl;
}

template <typename T, size_t size>
T *MyBegin( T (&Array)[size])
{
    return Array;
}

template <typename T, size_t size>
T *MyEnd(T (&Array)[size])
{
    return Array + size;
}

template <typename T, size_t size>
constexpr size_t ArraySize(const T (&Array)[size])
{
    return size;
}