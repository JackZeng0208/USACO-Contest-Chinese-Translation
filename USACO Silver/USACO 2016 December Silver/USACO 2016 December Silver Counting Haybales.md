## Description

FJ刚刚将他的N个干草堆$$(1 \leq N \leq 100,000)$$放置在贯穿他的农场的一维道路上的不同位置上。为了确保这些干草堆的间距合适，请帮助他回答Q个问题$$(1 \leq Q \leq 100,000)$$，每个问题都要求回答在特定间隔内的干草堆的数量。

## Input Format

第一行包括N和Q。

接下来的一行包括N个不同的整数，每一个整数的范围都在0到1,000,000,000之间。这些数表示了干草堆在道路上的位置。

接下来的Q行包括两个整数A和B$$(0 \leq A \leq B \leq 1,000,000,000)$$。每行都是一个问题，即在A到B之间有多少个干草堆（包含A和B）。

## Output Format

你需要输出Q行。每行回答上述的问题。

## Sample Input

```
4 6
3 2 7 5
2 3
2 4
2 5
2 7
4 6
8 10
```

## Sample Output

```
2
2
3
4
1
0
```



