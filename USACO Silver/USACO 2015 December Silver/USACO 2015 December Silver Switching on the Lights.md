## Description

FJ最近建造了一个巨大的谷仓，由N×N的房间网格组成$$(2 \leq N \leq 100)$$，编号从 (1,1) 到 (N, N)。Bessie有点怕黑，想尽可能多地打开房间的灯。

Bessie从 (1,1) 房间开始，这是唯一一个最初有灯光的房间。在一些房间里，她会发现可以用来切换其他房间的灯的开关。例如，在房间 (1,1) 里可能有一个开关可以切换房间(1,1) 的灯。Bessie只能穿过有灯光的房间，她只能从一个房间 (x, y)  移动到它的四个相邻房间 (x-1,y)，(x+1,y) ，(x, y-1) 和 (x, y+1)（如果这个房间在网格的边界上，则只能移动到更少的相邻房间）。

请确定Bessie能点亮的房间的最大数量。

## Input Format

第一行包括两个整数N和M$$(1 \leq M \leq 20,000)$$。

接下来的M行每行用四个整数x, y, a, b描述了一个房间的灯。在房间(x, y)的开关能够打开房间(a, b)的灯。任何一个房间都可能存在多个开关，而多个开关可以切换任何一个房间的灯光。

## Output Format

一行，输出Bessie能够点亮的最大房间数。

## Sample Input

```
3 6
1 1 1 2
2 1 2 2
1 1 1 3
2 3 3 1
1 3 1 2
1 3 2 1
```

## Sample Output

```
5
```

在此样例中，Bessie可以用 (1, 1) 里的开关打开 (1, 2) 和 (1, 3)。她可以走到房间 (1, 3) 然后打开 (2, 1)的灯。在 (2, 1) 房间可以打开 (2, 2) 的灯。Bessie无法走到 (2, 3)，因此这个房间最终是黑的。Bessie总共可以点亮5个房间。