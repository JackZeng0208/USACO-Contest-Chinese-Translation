## Description

最初，FJ的每头奶牛每天生产G加仑的牛奶$$(1 \leq G \leq 10^9)$$。由于随着时间的推移，奶牛的产奶量可能会发生变化，FJ决定定期对奶牛的产奶量进行测量，并将其记录在日志中。

他的日志中的记录如下:

```
35 1234 -2
14 2345 +3
```



第一条输入表明：在第35天，1234号奶牛的产奶量比上次测量时降低了2加仑。第二条输入表明：在第14天，2345号奶牛的产奶量比上次测量时增加了3加仑。FJ每天最多有时间测量一次。不幸的是，FJ有点杂乱无章，他不一定按照时间顺序记下测量结果。

为了保持奶牛的产奶动力，农夫约翰自豪地在谷仓的墙上展示了目前产奶量最高的奶牛的照片（如果有若干头奶牛的产奶量最高，他就会展示所有的图片）。

请求出FJ需要调整所展示的照片的次数。

请注意，FJ有一大群奶牛。所以尽管日志中记录了一些奶牛改变了产奶量，但仍然还有很多奶牛的产奶量保持在G加仑。

## Input Format

第一行是两个整数N和G，分别表示测量的次数N和初始产奶量G。接下来N行，每行代表了一次测量。每行有三个数。分别为：第i天（一个范围为1到$$10^6$$的整数），牛的ID（范围在1到$$10^9$$），和相比与上次产奶量的变化量（一个非零整数）。每头牛的产出将始终保持在0到$$10^9$$之间。

## Output Format

请输出有多少天FJ需要调整展示的照片

## Sample Input

```
4 10
7 3 +3
4 2 -1
9 3 -1
1 1 +2
```

## Sample Output

```
3
```
