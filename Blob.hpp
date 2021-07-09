#include<memory>
#include<vector>
#include<initializer_list>

template <typename elemType> class ListItem;

template <typename elemType> class List
{
private:
    ListItem<elemType> *front, *end;
public:
    List();
    List(const List<elemType> &);
    List& operator=(const List<elemType> &);
    ~List();
    void insert(ListItem<elemType> *ptr, elemType value);
};

template <typename T>
class Blob
{
public:
    typedef typename std::vector<T>::size_type size_type;

    Blob();
    Blob(std::initializer_list<T> il);
    ~Blob();
    size_type size() const { return m_pVecData->size();}
    bool empty() const { return m_pVecData->empty();}

    void push_back(const T& value);
    void pop_back();

    T& front();
    T& back();
private:
    std::shared_ptr<std::vector<T>> m_pVecData;
    void check(size_type i, const std::string & msg) const;
};



