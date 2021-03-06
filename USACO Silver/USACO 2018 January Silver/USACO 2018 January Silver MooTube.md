## Description

在业余时间，FJ创建了一个新的视频共享服务，他将其命名为MooTube。在MooTube上，FJ的奶牛可以录制，分享和发现许多有趣的视频。他的奶牛已经发布了N个视频$$(1 \leq N \leq 5000)$$，为了方便将其编号为 1到N 。然而，FJ 无法弄清楚如何帮助他的奶牛找到他们可能喜欢的新视频。

FJ希望为每个MooTube视频创建一个“推荐视频”列表。这样，奶牛将被推荐与他们已经观看过的视频最相关的视频。

FJ设计了一个“相关性”度量标准，顾名思义，它确定了两个视频相互之间的相关性。他选择N-1对视频并手动计算其之间的相关性。然后，FJ将他的视频建成一棵树，其中每个视频是节点，并且他手动将N-1对视频连接。为了方便，FJ 选择了N-1对，这样任意视频都可以通过一条连通路径到达任意其他视频。 FJ决定将任意一对视频的相关性定义为沿此路径的任何连接的最小相关性。

FJ想要选择一个K值，以便在任何给定的MooTube视频旁边，推荐所有其他与该视频至少有K相关的视频。然而，FJ担心会向他的奶牛推荐太多的视频，这可能会分散他们对产奶的注意力！因此，他想设定适当的K值。FJ希望得到您的帮助，回答有关K值的推荐视频的一些问题（Q个问题）。

## Input Format

第一行包括N和Q$$(1 \leq Q \leq 5000)$$。

接下来的N-1每行描述了FJ人工比较的一对视频，每行包括p<sub>i</sub>，q<sub>i</sub>，和r<sub>i</sub>$$(1 \leq p_i, q_i \leq N, 1 \leq r_i \leq 10^9)$$，表示p<sub>i</sub>和q<sub>i</sub>连接在了一起并且相关性为r<sub>i</sub>。

接下来的Q行描述了FJ的Q个问题。每行包含两个整数，k<sub>i</sub>和v<sub>i</sub>$$(1 \leq k_i \leq 10^9，1 \leq v_i \leq N)$$，表示 FJ 的第i个问题询问中当 K=k<sub>i</sub> 时，第v<sub>i</sub>个视频推荐列表中将推荐的视频数。

## Output Format

输出Q行。在第i行，输出FJ第i个问题的答案

## Input Sample

```
4 3
1 2 3
2 3 2
2 4 4
1 2
4 1
3 1
```

## Output Sample

```
3
0
2
```

FJ发现，视频1和视频2的相关度是3，视频2和3的相关度是2，视频2和4的相关度是4。基于上述条件，视频1和3的相关性为min(3, 2) = 2，视频1和4的相关性为min(3, 4) = 3，而视频3和4的相关性为min(2, 4) = 2。

FJ想知道，如果K=1，从视频2下面将会推荐多少个视频，如果K=3，从视频1下面将会推荐多少个视频，如果K=4，从视频1下面将会推荐多少个视频。我们可以发现，如果K=1，视频1、3和4将被推荐到视频2。在K=4的情况下，没有视频会被推荐到视频1。然而，当K=3时，视频2和4将从视频1中被推荐。

