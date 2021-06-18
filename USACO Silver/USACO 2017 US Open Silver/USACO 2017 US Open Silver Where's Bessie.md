## Description

题目描述翻译来源：[P3671 [USACO17OPEN\]Where's Bessie? S - 洛谷 | 计算机科学教育新生态 (luogu.com.cn)](https://www.luogu.com.cn/problem/P3671)

农夫John正在测试一个他新发明的全自动寻找奶牛无人机，它能够照一张农场的图片然后自动找出奶牛的位置。

不幸的是，这个相机并不包含一个优秀的寻找奶牛函数，所以农夫John需要你来写一个。农场的俯瞰图被定义为一个n * n的字符矩阵。矩阵由大写字母A到Z组成，每个字母表示一种可行的颜色。农夫John发现一个可能是奶牛的位置（以下简称PCL）的最好定义如下：一个PCL是一个矩阵（可能是整张图），矩阵的边与图像的边缘平行，且不能被其他PCL所包含（因此PCL内部不可能有PCL）更多的，一个PCL必须满足以下特性：

1. 矩阵有且只能有2种颜色构成。

2. 这两种颜色一种构成一个连通块，另一种形成两个或两个以上的连通块。

举个例子：

AAAAA ABABA AAABB 这个矩阵就是一个PCL，其中颜色A构成一个连通块，B构成两个连通块，描述了一只可能以A为底色，B为花纹的奶牛。

在这里连通块被定义为：从其中的任何一个点，你能仅通过上下左右移动，到达另外任何一个点（即上下左右相邻）

给定农场的照片，请你计算图中有几个PCL。

## Input Format

第一行包括N，即矩阵的大小$$(1 \leq N \leq 20)$$。接下N行包括N个字符。

## Output Format

请输出PCL的数量。

## Sample Input

```
4
ABBC
BBBC
AABB
ABBC
```

## Sample Output

```
2
```

在这个样例中，矩阵中有如下两个PCL：

```
ABB
BBB
AAB
ABB
```

```
BC
BC
BB
BC
```


