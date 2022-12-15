#include "SeqList.h"
template <class T>
SeqList<T>::SeqList()
{
    length = 0;
}

template <class T>
SeqList<T>::SeqList(T a[], int n)
{
    if (n > MaxSize)
        throw "参数非法";
    for (int i = 0; i < n; i++)
        data[i] = a[i];
    length = n;
}

template <class T>
int SeqList<T>::GetLength()
{
    return length;
}

template <class T>
T SeqList<T>::Get(int i)
{
    if (i < 1 || i > length)
        throw "参数非法";
    return data[i - 1];
}

template <class T>
void SeqList<T>::Insert(int i, T x)
{
    int j;
    if (i < 1 || i > length + 1)
        throw "参数非法";
    i--;
    for (j = length; j > i; j--)
        data[j] = data[j - 1];
    data[i] = x;
    length++;
}
