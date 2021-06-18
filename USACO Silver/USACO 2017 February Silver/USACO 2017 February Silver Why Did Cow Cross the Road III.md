## Description

牛为什么要过马路？一个原因是FJ的农场有很多条路。为了在农场间走动，他的奶牛必须要跨过很多条路。

将FJ的农场看作一个N x N个正方形田地网格$$(2 \leq N \leq 100)$$。某些成对相邻的田地（如南北或东西方向）被道路隔开；一个高大的栅栏环绕着整个网格的外围，防止奶牛离开农场。奶牛可以从任何一块田地自由移动到任何其他相邻的田地（北、东、南或西）。然而，除非不得已，它们宁愿不跨马路。

FJ的农场有K头奶牛$$(1 \leq K \leq 100,K \leq N^2)$$，每一头牛都分布在不同的田地里。如果一头牛为了拜访另一头牛必须至少穿过一条马路的话，那么这对牛就被称之为“遥远的牛”。请帮助FJ数一数有多少对这样的牛。

## Input Format

第一行包括N，K和R。接下来的R行描述了成对的相邻田地之间存在的R条道路。每一行的形式为r c r' c'（整数，范围在1到N）。这表示了两块相邻的田地（第r行第c列和第r′行和第c′列）之间有一条道路。最后的K行表示K个奶牛的位置，每个奶牛也用行和列来表示。

## Output Format

输出有多少对“遥远的牛”。

## Sample Input

```
3 3 3
2 2 2 3
3 3 3 2
3 3 2 3
3 3
2 2
2 3
```

## Sample Output

```
2
```
