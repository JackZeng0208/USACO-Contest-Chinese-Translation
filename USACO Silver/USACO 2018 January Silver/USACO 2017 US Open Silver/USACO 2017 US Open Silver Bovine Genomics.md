## Description

题目描述翻译来源：[P3670 [USACO17OPEN\]Bovine Genomics S - 洛谷 | 计算机科学教育新生态 (luogu.com.cn)](https://www.luogu.com.cn/problem/P3670)

FJ有n头有斑点的牛和n头没有斑点的牛。由于他刚刚学完牛的基因学的课程，他想知道牛有没有斑点是否与牛的基因有关。

FJ花了巨大的代价测出了每个牛的基因，每头牛的基因用一个长度为M的由“A,C,G,T”的串构成。FJ将这些串写成一个表，就像图中这样（当N=3时）：

```
Positions: 1 2 3 4 5 6 7 ... M

Spotty Cow 1: A A T C C C A ... T
Spotty Cow 2: G A T T G C A ... A
Spotty Cow 3: G G T C G C A ... A

Plain Cow 1: A C T C C C A ... G
Plain Cow 2: A G T T G C A ... T
Plain Cow 3: A G T T C C A ... T
```

FJ仔细的观察这个表，他发现通过观测2,4位置的字符串可以预测牛是否有斑点。（在这个例子中，假如他看到24位置是GC、AT或者AC就可以断定其有斑点，因为1号有斑点的牛24位置基因为AC，2号为AT，3号为GC，而且没有任何一头无斑点的牛的24位置出现过这三个串）

FJ认为，1个或者两个位点是不能够区分品种的，必须是刚好3个位点。他想知道能用多少组三个本质不同的位置判断牛的斑点，{1,2,3}和{1,3,2}是本质相同的

## Input Format

第一行包括N$$(1 \leq N \leq 500)$$和M$$(3 \leq M \leq 50)$$。接下来的N行每行包括一个有M个字母的字符串。这个字符串描述了斑点牛的基因组。最后的N行描述了无斑点牛的基因组。

## Output Format

请输出能解释斑点性的三个不同位置的集合的数量。如果只看基因组中的这三个位置就能完全准确地预测FJ的奶牛种群中的斑点性状，那么这一组三个位置就能解释斑点性状。

## Sample Input

```
3 8
AATCCCAT
GATTGCAA
GGTCGCAA
ACTCCCAG
ACTCGCAT
ACTTCCAT
```

## Sample Output

```
22
```

