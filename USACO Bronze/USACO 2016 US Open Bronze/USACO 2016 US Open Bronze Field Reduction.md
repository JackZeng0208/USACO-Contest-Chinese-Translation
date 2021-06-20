## Description

农夫FJ的N头奶牛（3≤N≤50000）都位于他的二维农场的不同位置。FJ希望用一个矩形栅栏将所有奶牛围起来；栅栏的边平行于x轴和y轴。他希望这个栅栏尽可能小，以便它能圈住每一头奶牛（允许奶牛在栅栏上）。

不幸的是，由于上一季度牛奶产量低，FJ的预算很紧张。因此，如果可能的话，他希望建造一个更小的栅栏，他愿意从他的牛群中出售一头奶牛来实现这一目标。

请帮助FJ计算在从牛群中取出一头奶牛后，他能用栅栏围出的最小面积（此后则是为剩余的N-1头奶牛建造最小的栅栏）。

对于这个问题，请将奶牛视为点，栅栏视为四条线段的结合（即不要将奶牛视为 "单位正方形"）。请注意，答案可以是零，例如，如果剩下的所有奶牛最终都站在一条共同的垂直线或水平线上。最后，不仅如此，由于N可能相当大，你可能需要谨慎地处理这个问题，以确保你的程序运行得足够快。

## Input Format

第一行有一个整数N。

接下来的N行每行包含两个整数，这代表了奶牛的位置。牛的位置是范围为1到40000的正整数。

## Output Format

一个整数。代表当FJ从牛群里卖出一头奶牛后，可以用栅栏围出的最小面积。

## Sample Input

```
4
2 4
1 1
5 2
17 25
```

## Sample Output

```
1
```
