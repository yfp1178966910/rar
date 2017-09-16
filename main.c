#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ¶¨Òå½Úµã 
typedef struct BiTNode
{
	int data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

// ¿¿ ¿¿ ¿¿¿¿¿¿¿
void CreateBiTree(BiTree *T)
{
	int data;
	scanf("%d", &data);
	
	if (data == -1)
		*T = NULL;
	else
	{
		*T = (BiTree)malloc(sizeof(BiTree));
		(*T)->data = data;
		CreateBiTree( & (*T)->lchild);
		CreateBiTree( & (*T)->rchild);
	}

} 

// ¿¿¿¿¿¿¿¿
void PreOrderTraverse(BiTree T)
{
    if (T == NULL)
	{
		return;
	}

    else
	{
		printf("%d ", T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}

// ¿¿¿¿¿¿¿¿
void MidOrderTraverse(BiTree T)
{
    if (T == NULL)
	{
		return;
	}

    else
	{
		PreOrderTraverse(T->lchild);
		printf("%d ", T->data);
		PreOrderTraverse(T->rchild);
	}
}

// ¿¿¿¿¿¿¿¿
void BackOrderTraverse(BiTree T)
{
    if (T == NULL)
	{
		return;
	}

    else
	{
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
		printf("%d ", T->data);
	}
}
int main(int argc, char *argv[]) {
	
	BiTree T;
	CreateBiTree(&T);
	PreOrderTraverse(T);
	printf("\n");
	MidOrderTraverse(T);
	printf("\n");
	BackOrderTraverse(T);
	printf("\n");
	return 0;
}
