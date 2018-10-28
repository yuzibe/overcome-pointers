#include "stdc.h"

typedef struct People{
  char * name;
  int age;
}People,*_People;

// 模拟main环境
void object_main();
/**
 * @desc set方法
 * - 实现 对 参数self结构体赋值
 * @param (const _People) self _People的地址 不可以在函数内发生改变
 * @param (char*) name 姓名的字符串
 * @return (void) [打印地址，不返回参数]
 */
void setName(const _People self,char * name);
/**
 * @desc set方法
 * - 实现 对 参数self结构体赋值
 * @param (const _People) self _People的地址 不可以在函数内发生改变
 * @param (int) age 年龄
 * @return (void) [打印地址，不返回参数]
 */
void setAge(const _People self,int age);
/**
 * @desc get方法
 * - 实现 对 参数self结构体赋值
 * @param (const _People) self _People的地址 不可以在函数内发生改变
 * @return (char*) name 姓名的字符串
 */
char * getName(const _People self);
/**
 * @desc set方法
 * - 实现 对 参数self结构体赋值
 * @param (const _People) self _People的地址 不可以在函数内发生改变
 * @return (int) age 年龄
 */
int getAge(const _People self);

void object_main()
{
  People son9wx;
  setName(&son9wx,"songwx\0");
  setOld(&son9wx,18);
  printf("user name is %s\n",(&son9wx)->name);
  printf("user old is %d\n",(&son9wx)->age);
  return;
}

void setName(_People self,char * name)
{
  self->name = name;
  return;
}

void setAge(_People self,int age)
{
  self->age = age;
  return;
}

char * getName(_People self)
{
  return self->name;
}

int getAge(_People self)
{

  return self->age;
}
