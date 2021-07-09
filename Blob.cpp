#include "Blob.hpp"

template<typename T>
Blob<T>::Blob() : m_pVecData(std::make_shared<std::vector<T>>())
{

}

template<typename T>
Blob<T>::Blob(std::initializer_list<T> il) : m_pVecData(std::make_shared<std::vector<T>>(il))
{

}

int main()
{
    return 0;
}