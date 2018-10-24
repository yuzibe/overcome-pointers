# 指针：兰花指到弹指神通  

> 指针：从😭到😂系列   🎈  
  
## 地址与内存  
  
我们说地址就如同我们现实中淘宝的收货地址一样，送货员拿到这个地址之后可以将货物精准的送到家里，那么在计算机中也像这样，也像根据地址来定位到一个空间内，它具有唯一性。内存像是地图一样，它是有限个地址的集合，计算机将这些地址聚合计算机的内存中，统一进行管理，我们在这里不做详细叙述，只做一个大概了解，因为这不是我们本章着重讨论的内容。  
  
![地址](https://r.photo.store.qq.com/psb?/V146EW4F0E6ZOW/g0BQLunkWp1OU55*Izu4kuNCCO4eLpa1Vn7oEEiONmU!/r/dEcBAAAAAAAA)  
  
## 指针与内容   
  
说到指针，我们可以联想到什么呢？大多数人可能联想到是钟表的指针，可以说这个联想是错误的，因为在计算机中，其实这个如同钟表指针是不存在的，指针就是储存着一个地址，这个地址是你希望指向内容的他的地址（在左值和右值中会详细讨论）。很多人也把这个地址和内容分别比作门牌号和房间里的事物，这个比喻也是不恰当的，在后续内容中，我们就可以知道在多级指针中，房间里头存着一个室外的房间，这显然是不合理的。因为没有办法找到合理的比喻，所以说我只能用两个模型来告诉大家 ：  
  
![两个模型](https://r.photo.store.qq.com/psb?/V146EW4F0E6ZOW/0xONTyFIyFV.pXZY*NgoiibOgUR.2B.bL7aUTwTLXEM!/r/dGcBAAAAAAAA  
)
  
## 左值和右值  

左值又是l-value，但是他不是left-value，而是我们常说的location-value，同样右值也不是right-value，而是read-value。我这里举一个例子：我们说如果我们现在要定义int a，这样计算机会预先分配一个我们不知道的地址给a，它的长度是4字节（或者8字节取决于你的写的是32位还是64位程序）这个地址我们不知道，怎么办？（人类对未知事物都是恐惧的！）@这里引入题外话，在Java中为了对未知事物（地址）的解决方式是“隐瞒”，我们去访问某个变量的地址的时候，我们会有两个结果，有或者没有（空指针），除此之外，我们没有任何可以对地址的操作。那为了知道这个地址，我们需要利用指针来把它这段计算机事先分配的地址存储起来 @在c语言中我们可以试图通过指针访问任意一个位置（全局） @因此说他不安全。那这局就是指针（左值）最直接的思想或者说它的应用方式。不固定的左值就需要用确定的右值（这个右值的左值可能不确定）来存储他。  

## 错误的习惯  

1.	一个指针初始化NULL（0x0）  
2.	NULL是一个特殊指针，当你尝试访问他！（（list *）l =NULL ）（*l）？err  
3.	野指针  

## 几个Demo  

程序在codeblocks-minGW通过！  `0 error(s), 0 warning(s)` 如果你运行失败请优先考虑是否引入正确！  

- *demo-1*: [**swap-demo**](https://github.com/son9wx/overcome-pointers/blob/master/main.c)  
> desc:在一个普通函数中的指针模型理解
- *demo-2*: [**swap-funcation-demo**](https://github.com/son9wx/overcome-pointers/blob/master/swap-funcation-demo.c)  
> desc:作为参数传递的指针模型内容理解
- *demo-3*: [**swap-adress-demo**](https://github.com/son9wx/overcome-pointers/blob/master/swap-adress-demo.c)  
> desc:作为参数传递的指针模型地址理解
- *demo-4*: [**find-char-demo**](https://github.com/son9wx/overcome-pointers/blob/master/find-char-demo.c)  
> desc:多级指针的理解
- *demo-5*: [**bitree-demo**](https://github.com/son9wx/overcome-pointers/blob/master/bitree-demo.c)  
> desc:指针综合运用，一个二叉树建立的模型，他的内容比网上的一般例程要丰富，涉及字符串指针等  

Demo地址在我的[GitHub](https://github.com/son9wx/overcome-pointers)上，欢迎大家访问，如果通过此你理解了指针，希望你可以帮我点个star(☆▽☆)。你也可以对一些你希望解答的相关问题发起issue，共同进步！ 
