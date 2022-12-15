#define SLIST
const int MaxSize = 100;
template <class T> // 模板类
class SeqList
{
public:        //  自己根据题目要求增加或减少操作接口
    SeqList(); // 构造函数
    SeqList(T a[], int n);
    int GetLength();           // 取表长
    T Get(int i);              // 取第i个元素
    int Locate(T x);           // 查找定位
    void Insert(int i, T x);   // 插入一个元素
    T Delete(int i);           // 删除一个元素
    void PrintList();          // 顺序表的遍历（输出）
    void Union(SeqList<T> S1); // 将有序顺序表S1合并到当前有序顺序表中
private:
    T data[MaxSize];
    int length; //  实际表长
};