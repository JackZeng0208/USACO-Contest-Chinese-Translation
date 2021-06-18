## Description

FJ发现，当他的奶牛在附近有另一头奶牛作为精神支持时，每头奶牛都更容易产奶。因此，他想把他的M头奶牛$$(M \leq 1,000,000,000，M为偶数)$$分成M/2对。然后，每对奶牛将被赶到牛棚里的一个单独的挤奶间进行挤奶。这M/2个牛棚的挤奶工作将同时进行。

让事情变得有点复杂的是，FJ的每头奶牛都有不同的牛奶产量。如果把牛奶产量为A和B的奶牛结成一对，那么给它们挤奶总共需要A+B单位的时间。

假设FJ以最佳方式将奶牛配对。请帮助他确定整个挤奶过程可能需要的最少时间，

## Input Format

第一行包括N$$(1 \leq N \leq 100,000)$$。接下来的N行每行包括两个整数x和y。这代表了x头奶牛每头都能产y$$(1 \leq y \leq 1,000,000,000)$$个单位的牛奶。x的和为M，即奶牛的总数。

## Output Format

请输出假设FJ以最佳方式将奶牛配对，整个挤奶过程需要的最少时间。

## Sample Input

```
3
1 8
2 5
1 2
```

## Sample Output

```
10
```

如果将产出8的奶牛和产出2的奶牛进行配对；产出5的奶牛和另一头产出为5的奶牛进行配对，这两个牛棚的挤奶时间都为10个单位。由于挤奶是同时进行的，因此所有的奶牛都会在10个单位时间里完成挤奶。任何其他的配对都会导致使用超过10个单位时间来挤奶。