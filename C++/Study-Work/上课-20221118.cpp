#include <stdio.h>
#include <malloc.h>
//定义队列大小
#define MaxSize 50

typedef struct
{
	char xuehao[14]; //学号
	char name[20];	 //姓名
	int sex;		 //性别
	char tel[14];	 //联系电话
	char qq[12];	 // QQ号
} QElemType;		 //数据元素结构

//队列结构
typedef struct
{
	QElemType data[MaxSize];
	int front;
	int rear;
} SqQueue;
//入队操作
int EnQueue(SqQueue *&q, QElemType e)
{ //插入到队尾
	if ((q->rear + 1) % MaxSize == q->front)
		return 0;
	q->rear = (q->rear + 1) % MaxSize;
	q->data[q->rear] = e;
	return 1;
}
//初始化
void InitQueue(SqQueue *&q)
{
	q = (SqQueue *)malloc(sizeof(SqQueue));
	q->front = q->rear = 0;
}
//显示队列中元素
void ListQueue(SqQueue *q)
{
	int i = q->front;
	printf("队列中从头到尾的数据分别为： \n");
	printf("学号    姓名    性别    联系电话    QQ号\n");
	while (i != q->rear)
	{
		i = (i + 1) % MaxSize;
		printf("%s\t%s\t", q->data[i].xuehao, q->data[i].name);
		if (q->data[i].sex)
			printf("男");
		else
			printf("女");
		printf("\t%s\t%6s\n", q->data[i].tel, q->data[i].qq);
	}
	printf("\n");
}
int DeQueue(SqQueue *&q, QElemType &e) //出队列
{
	if (q->front == q->rear)
		return false;
	q->front++;
	e = q->data[q->front];
	return true;
}
bool GetHead(SqQueue *&q, QElemType &e) //获取首列元素
{
	if (q->front == q->rear)
		return false;
	e = q->data[q->front + 1];
	return true;
}
int QueueLength(SqQueue *q) //队列长度
{

	return q->rear - q->front;
}
//销毁队列
void DestroyQueue(SqQueue *&q)
{
	free(q);
}
//主程序
int main()
{
	int i, d, n;
	SqQueue *q;
	QElemType e;
	InitQueue(q);
	printf("请输入入队数据的个数:");
	scanf("%d", &n);
	if (n > MaxSize - 1)
	{
		printf("数据太多，不足以存储！");
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个数据(学号  姓名  性别（0或1） 联系电话  QQ号)：\n", i + 1);
		scanf("%s%s%d%s%s", e.xuehao, e.name, &e.sex, e.tel, e.qq);
		EnQueue(q, e); //入队
	}
	ListQueue(q); //显示队列中所有元素
	printf("取队列首元素操作：\n");
	GetHead(q, e);
	printf("%s\t%s\t", e.xuehao, e.name); //显示队首元素
	if (e.sex)
		printf("男");
	else
		printf("女");
	printf("\t%s\t%6s\n", e.tel, e.qq);
	printf("队列长度为：%d\n", QueueLength(q)); //显示队列长度
	printf("出队操作：\n");
	DeQueue(q, e); //出队
	printf("%s\t%s\t", e.xuehao, e.name);
	if (e.sex)
		printf("男");
	else
		printf("女");
	printf("\t%s\t%6s\n", e.tel, e.qq);
	ListQueue(q);								//显示队列中所有元素
	printf("队列长度为：%d\n", QueueLength(q)); //显示队列长度
	printf("取队列首元素操作：\n");
	GetHead(q, e);
	printf("%s\t%s\t", e.xuehao, e.name);
	if (e.sex)
		printf("男");
	else
		printf("女");
	printf("\t%s\t%6s\n", e.tel, e.qq);
	printf("队列长度为：%d\n", QueueLength(q)); //显示队列长度
	ListQueue(q);								//显示队列中所有元素
	DestroyQueue(q);
}
