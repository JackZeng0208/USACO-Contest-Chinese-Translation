## Description

听说最新的流行趋势是牛皮上有两个斑点的母牛，农夫John（下简称FJ）购买了很多两个斑点的母牛。不幸的是，时尚趋势往往会迅速改变，目前最受欢迎的时尚是只有一处斑点的母牛。

FJ希望通过将每头母牛上的两个斑点通过绘画合并成一个点来使自己的牛群更加时尚。

牛的皮由N×M（1 \<= N，M \<= 50）个字符网格表示，如下所示：

```
................
..XXXX....XXX...
...XXXX....XX...
.XXXX......XXX..
........XXXXX...
.........XXX....
```

在上图中，每一个X表示斑点的一部分。如果两个“X”在垂直或水平方向上相邻（对角相邻不计算在内），则它们属于同一点，因此上图恰好有两个点。FJ牛群中的所有母牛都恰好有两个斑点。

FJ希望使用尽可能少的涂料将两个斑点合并为一个。

在上面的示例中，他可以通过仅画三个带有'X'的字符来做到这一点（新字符在下面用'\*'标记，以使它们更易于查看）。

```
................
..XXXX....XXX...
...XXXX*...XX...
.XXXX..**..XXX..
........XXXXX...
.........XXX....
```

请帮助FJ确定为将两个点合并为一个大点而必须绘制的新'X'的最小数量。

## Input Format

-   第一行：两个整数N和M

-   第二行到第N+1行：每一行包含了M个X和.。

## Output Format

-   一行，输出需要填涂X的最小数量

## Sample Input

```
................
..1111....222...
...1111....22...
.1111......222..
........22222...
.........222....
```

## Sample Output

```
3
```
