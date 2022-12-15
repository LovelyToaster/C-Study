#include <stdio.h>
#include <malloc.h>
#define MaxSize 100
typedef struct
{
    char xuehao[14]; //学号
    char name[20];   //姓名
    int sex;         //性别
    char tel[14];    //联系电话
    char qq[12];     // QQ号
} ElemType;          //数据元素结构

typedef struct
{
    ElemType data[MaxSize];
    int top; //栈顶元素在数组中的下标
} SqStack;

//初始化栈
void InitStack(SqStack *&s)
{
    s = (SqStack *)malloc(sizeof(SqStack));
    s->top = -1;
}
//压栈
int Push(SqStack *&s, ElemType e)
{
    if (s->top == MaxSize - 1)
        return 0;
    //栈满的情况,即栈上溢出
    s->top++;
    s->data[s->top] = e;
    return 1;
}
//遍历栈
void DispStack(SqStack *s)
{
    int i;
    if (s->top != -1)
    {
        printf("栈中的数据为：\n");
        printf("学号    姓名    性别    联系电话    QQ号\n");
        for (i = s->top; i >= 0; i--)
        {
            printf("%s\t%s\t", s->data[i].xuehao, s->data[i].name);
            if (s->data[i].sex)
                printf("男");
            else
                printf("女");
            printf("\t%s\t%6s\n", s->data[i].tel, s->data[i].qq);
        }
    }
    else
        printf("栈中无数据！");
    printf("\n");
}
//销毁栈
void DestroyStack(SqStack *&s)
{
    free(s);
}
int Pop(SqStack *&s, ElemType &e) //出栈
{
    if (s->top == -1)
        return false;
    e = s->data[s->top];
    s->top--;
    return true;
}
int GetTop(SqStack *s, ElemType &e) //取栈顶
{
    if (s->top == -1)
        return false;
    e = s->data[s->top];
    return true;
}
void ClearStack(SqStack *&s) //清空栈
{
    s->top = -1;
}
int main()
{
    int i, n;
    ElemType e;
    SqStack *s;
    InitStack(s);
    puts("请输入要进栈的记录个数：");
    scanf("%d", &n);
    if (n > MaxSize)
    {
        printf("数据太多，不足以存储！");
        return false;
    }
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个数据(学号  姓名  性别（0或1） 联系电话  QQ号)：\n", i + 1);
        scanf("%s%s%d%s%s", e.xuehao, e.name, &e.sex, e.tel, e.qq);
        Push(s, e);
    }
    DispStack(s);
    puts("栈顶数据出栈：");
    Pop(s, e);
    DispStack(s);
    GetTop(s, e);
    printf("当前栈顶数据为：");
    printf("%s\t%s\t", e.xuehao, e.name);
    if (e.sex)
        printf("男");
    else
        printf("女");
    printf("\t%s\t%6s\n", e.tel, e.qq);
    DispStack(s);
    puts("清空栈中数据：");
    ClearStack(s);
    DispStack(s);
    DestroyStack(s);
    return 0;
}
