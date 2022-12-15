#include <stdio.h>
#include <stdlib.h> //exit(),system()
#include <malloc.h>
typedef struct TNode //结构体定义
{
    int data;                      //数据域
    struct TNode *lchild, *rchild; // 指针域包括左右孩子指针
} TNode;
TNode *CreateT()
{
    TNode *T, *t;
    T = (TNode *)malloc(sizeof(TNode)); //创建根结点
    T->data = 1;
    T->lchild = NULL;
    T->rchild = NULL;

    t = (TNode *)malloc(sizeof(TNode)); //创建根左子结点
    t->data = 2;
    t->lchild = NULL;
    t->rchild = NULL;

    T->lchild = t; //链入

    t = (TNode *)malloc(sizeof(TNode)); //创建根右子结点
    t->data = 3;
    t->lchild = NULL;
    t->rchild = NULL;

    T->rchild = t; //链入

    t = (TNode *)malloc(sizeof(TNode)); //创建根左子结点的左子结点
    t->data = 4;
    t->lchild = NULL;
    t->rchild = NULL;

    T->lchild->lchild = t; //链入

    t = (TNode *)malloc(sizeof(TNode)); //创建根左子结点的左子结点的左子结点
    t->data = 7;
    t->lchild = NULL;
    t->rchild = NULL;

    T->lchild->lchild->lchild = t; //链入

    t = (TNode *)malloc(sizeof(TNode)); //创建根右子结点的左子结点
    t->data = 5;
    t->lchild = NULL;
    t->rchild = NULL;

    T->rchild->lchild = t;              //链入
    t = (TNode *)malloc(sizeof(TNode)); //创建根右子结点的右子结点
    t->data = 6;
    t->lchild = NULL;
    t->rchild = NULL;

    T->rchild->rchild = t;              //链入
    t = (TNode *)malloc(sizeof(TNode)); //创建根右子结点的右子结点的右子结点
    t->data = 8;
    t->lchild = NULL;
    t->rchild = NULL;

    T->rchild->rchild->rchild = t; //链入
    return T;
}
void PreOrderT(TNode *T) //先序遍历
{
    if (T != NULL) // 二叉树非空
    {
        printf("%d ", T->data); // 先访问根结点
        PreOrderT(T->lchild);   // 递归调用函数，先序遍历左子树
        PreOrderT(T->rchild);   // 递归调用函数，先序遍历右子树
    }
}
void InOrderT(TNode *T) //中序遍历
{
    if (T != NULL)
    {
        InOrderT(T->lchild);    // 递归调用函数，中序遍历左子树
        printf("%d ", T->data); // 访问根结点
        InOrderT(T->rchild);    // 递归调用函数，中序遍历右子树
    }
}
void example()
{
    int i;
    printf("示例：建立如图所示的二叉树\n");
    printf("\n");
    printf("                        1                       \n");
    printf("                      /   \\                     \n");
    printf("                    2       3                   \n");
    printf("                  /   \\       \\                 \n");
    printf("                4       5       6               \n");
    printf("\n");
    for (i = 0; i < 71; i++)
        printf("*");
    printf("\n");
}
void PostOrderT(TNode *T) //后序遍历
{
    if (T != NULL)
    {
        PostOrderT(T->lchild);
        PostOrderT(T->rchild);
        printf("%d ", T->data);
    }
}
int Count(TNode *T) //叶节点个数
{
    if (T == NULL)
        return 0;
    if (T->lchild == NULL && T->rchild == NULL)
    {
        return 1;
    }
    else
        return (Count(T->lchild)+Count(T->rchild));
}
//销毁二叉树
void DestroyBTree(TNode *T)
{
    if (T != NULL)
    {
        DestroyBTree(T->lchild);
        DestroyBTree(T->rchild);
        free(T);
    }
}
int main()
{
    TNode *T;
    T = CreateT();
    printf("先序遍历二叉树：\n");
    PreOrderT(T);
    printf("\n中序遍历二叉树：\n");
    InOrderT(T);
    printf("\n后序遍历二叉树：\n");
    PostOrderT(T);
    printf("\n该二叉树叶结点个数：%d\n", Count(T));
    DestroyBTree(T);
    return 0;
}
