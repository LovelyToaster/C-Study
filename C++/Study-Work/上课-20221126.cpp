#include <stdio.h>
#include <stdlib.h>
#define MAXV 100         //最大顶点数
typedef char VerTexType; //假设顶点的数据类型为字符型

typedef struct
{
    VerTexType vexs[MAXV]; //顶点表
    int arcs[MAXV][MAXV];  //邻接矩阵
    int vexnum, arcnum;    //图的当前点数和边数
} AMGraph;

//构造无权图
void Create(AMGraph *G)
{
    int i, j;
    char c;
    printf("请输入顶点数和边数:\n");
    scanf("%d%d", &G->vexnum, &G->arcnum);
    fflush(stdin);
    for (i = 0; i < G->vexnum; i++) //建立顶点表
    {
        printf("\n第%d个顶点：", i);
        scanf("%c", &G->vexs[i]);
        getchar();
    }
    for (i = 0; i < G->vexnum; i++) //矩阵初始化
        for (j = 0; j < G->vexnum; j++)
            G->arcs[i][j] = 0;

    for (i = 0; i < G->vexnum; i++)
        for (j = 0; j < G->vexnum; j++)
        {
            if (i != j)
            {
                printf("顶点%c到%c有边吗(Y/y/N/n)？", G->vexs[i], G->vexs[j]);
                fflush(stdin);
                scanf("%c", &c);
                if (c == 'y' || c == 'Y')
                {
                    G->arcs[i][j] = 1;
                }
            }
        }
}
//输出邻接矩阵
void Output(AMGraph *G)
{
    int i, j, count = 0;
    for (i = 0; i < G->vexnum; i++)
        printf("\t%c", G->vexs[i]);
    printf("\n");
    for (i = 0; i < G->vexnum; i++)
    {
        printf("%4c", G->vexs[i]);
        for (j = 0; j < G->vexnum; j++)
        {
            printf("\t%d", G->arcs[i][j]);
            count++;
            if (count % G->vexnum == 0)
                printf("\n");
        }
    }
}

void Degree(AMGraph *G) //无向图顶点度
{
    int sum;
    for (int i = 0; i < G->vexnum; i++)
    {
        for (int j = 0; j < G->vexnum; j++)
        {
            if (G->arcs[i][j] == 1)
                sum++;
        }
        printf("顶点%c的度:%d\n", G->vexs[i], sum);
        sum = 0;
    }
}
void Degree(AMGraph *G) //有向图顶点度
{
    int sum1, sum2;
    for (int i = 0; i < G->vexnum; i++)
    {
        for (int j = 0; j < G->vexnum; j++)
        {
            if (G->arcs[i][j] == 1)
                sum1++;
            if (G->arcs[j][i] == 1)
                sum2++;
        }
        printf("顶点%c的出度:%d 入度: %d\n", G->vexs[i], sum1, sum2);
        sum1 = 0;
        sum2 = 0;
    }
}
//主函数
int main()
{
    AMGraph G;
    Create(&G);
    printf("邻接矩阵数据如下：\n");
    Degree(&G);
    Output(&G);
    return 0;
}