#include "stdc.h"
#include "malloc.h"
#define TREESTR "abd--e--cf--g--"

typedef struct node
{
  struct node *left;
  struct node *right;
  char data;
} node, *nodeptr;

typedef struct bitree
{
  int num;
  nodeptr root;
} bitree, *bitreeptr;
/**
 * @desc 为bt树bt树封装了一棵树的root节点
 * - malloc创建bt
 * @param (bitree **) bt 树根
 * @return void 
 */
void creat_bitree_head(bitreeptr *btp);
/**
 * @desc 为bt树创建node节点
 * - 为bt树创建node节点
 * @param (bitree) bt 树根
 * @param (node *) np 树根或者子树根或者叶子节点
 * @return void 
 */
void creat_bitree_node(bitree bt, nodeptr np, char **elem);
/**
 * @desc 通过根节点遍历二叉树！
 * - 通过根节点遍历二叉树！
 * @param (node) root 某棵树的根节点
 * @return void [打印前序遍历的二叉树，原则上与构造字符串相同]
 */
void print_bitree(node root);
// 模拟main环境
void bitree_main();

void bitree_main()
{
  bitree bt;
  bitreeptr btp = &bt;
  char *str = TREESTR;
  creat_bitree_head(&btp);
  creat_bitree_node((*btp), btp->root, &str);
  print_bitree(*(btp->root));
  printf("\n");
}

void creat_bitree_head(bitreeptr *btp)
{
  (*btp) = (bitreeptr)malloc(sizeof(bitree));
  if (!*btp)
    exit(-500);
  (*btp)->num = 1;
  (*btp)->root = (nodeptr)malloc(sizeof(node));
  if (!(*btp)->root)
    exit(-500);
  return;
}

void creat_bitree_node(bitree bt, nodeptr np, char **elem)
{
  char cur = *((*elem)++);
  if (cur == '-')
  {
    np->left = NULL;
    np->right = NULL;
    np->data = '-';
    return;
  }
  np->data = cur;
  np->left = (nodeptr)malloc(sizeof(node));
  if (!np->left)
    exit(-500);

  np->right = (nodeptr)malloc(sizeof(node));
  if (!np->right)
    exit(-500);

  creat_bitree_node(bt, np->left, elem);
  creat_bitree_node(bt, np->right, elem);

  return;
}

void print_bitree(node n)
{
  printf("%c", n.data);
  if (n.left)
    print_bitree(*(n.left));
  if (n.right)
    print_bitree(*(n.right));
}
