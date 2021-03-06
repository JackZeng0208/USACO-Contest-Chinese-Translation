## Description

为了庆祝Bessie的生日，FJ让它在他最好的一块地里自由地吃草。

这块田地上有N块草坪$$(1 \leq N \leq 1000)$$。我们将其编号为1到N。每块草坪都有一个不同的质量值。如果Bessie吃了质量为Q的草，她会获得Q单位的能量。每块草坪通过双向路径与最多10个相邻草坪相连。Bessie在相邻草坪之间移动需要E单位的能量$$(1 \leq E \leq 1,000,000)$$。Bessie可以选择在她希望的任何草坪上开始吃草，一旦她积累了最大的能量，她就会停止吃草。

不幸的是，Bessie是一头挑剔的牛，一旦她吃了某种质量的草，她就不会再吃相同或低于该质量水平的草了。但是，她仍然乐于在不吃草的情况下走过这些区域。事实上，她发现在不吃草的情况下走过一片高质量的草是有好处的。因为这可以让她又走回来吃美味的饭后点心。

请帮助确定Bessie能积累的最大能量。

## Input Format

第一行包括N和E。 接下来的N行每行描述了一块草坪。每行的前两个数字分别为Q和D（范围在1到1,000,000）。接下来的D个数字表示和这块草坪相邻的其它草坪。

## Output Format

请输出Bessie能积累的最大能量。

## Sample Input

```
5 2
4 1 2
1 3 1 3 4
6 2 2 5
5 2 2 5
2 2 3 4
```

## Sample Output

```
7
```

Bessie从4号草坪开始，从那里获得了5个单位的能量。然后她走小路到5号草坪，在路上损失了2个单位的能量。她拒绝吃5号草坪的低质量的草，并走到3号草坪，再次损失2个单位的能量。最后她吃了3号草坪的草，获得了6个单位的能量。Bessie总共获得了7个能量。

请注意，上面的例子与提交时的测试样例1不同。

