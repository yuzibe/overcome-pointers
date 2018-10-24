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

void creat_bitree_head(bitreeptr *btp);
void creat_bitree_node(bitree bt, nodeptr np, char **elem);
void print_bitree(node root);
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
