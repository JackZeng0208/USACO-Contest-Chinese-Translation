## Description

Bessie是纸牌游戏的超级粉丝。这很令人惊讶，因为她没有对立的拇指。不幸的是，牛群中的其他奶牛的水平都不高。事实上，它们是如它们总是以一种完全可预测的方式进行游戏。尽管如此，对Bessie来说，如何取胜仍然是一个挑战。

Bessie和她的朋友Elsie目前正在玩一个简单的纸牌游戏，他们拿着一副2N张牌，方便地编号为1...2N。将这堆卡分N张牌给Bessie，N张牌给Elsie。然后两人玩N轮，每轮Bessie和Elsie都出一张牌，出牌大小最高的一方可以获得一分。

鉴于Bessie可以预测Elsie出牌的顺序，请给出Bessie可以赢得的最大分数。

## Input Format

第一行包括一个整数N$$(1 \leq N \leq 50,000)$$。

接下来的N行给出了每局游戏中Elsie将会打出的牌。通过上述题目条件，我们能很容易地知道Bessie的牌是哪些。

## Output Format

输出一个数，表示Bessie所能赢得的最大分数。

## Sample Input

```
3
1
6
4
```

## Sample Output

```
2
```

在这里，Bessie一定会有卡2，3和5。她会最多会赢两次。她可以用2或3来应对Elsie出的1。然后将剩下的5留到Elsie出4时再使用。

