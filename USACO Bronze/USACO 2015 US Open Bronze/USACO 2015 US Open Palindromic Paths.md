## Description

FJ的农场是一个N×N的田地网格$$(2 \leq N \leq 18)$$，每个田地都标有一个英文字母。比如:

```
ABCD
BXZX
CDXB
WCBA
```

每天，奶牛Bessie从左上角走到右下角，每走一步，她都会向右走或是像下走一步。Bessie记录着她在这个过程中产生的字符串，它是由她走过的字母组成的。然而，如果这个字符串是一个回文串（向前读和向后读都是一样的），她就会非常迷茫，因为她会迷失方向。

请帮助Bessie确定她在行走过程中能形成多少种不同的回文串。不同的方式（即不同的路线）形成相同的回文串只算一次；以上文的网格为例，有几条路线都可以产生回文串ABXZXBA。最终，Bessie一共只能记录四中不同的回文串，ABCDCBA, ABCWCBA, ABXZXBA, ABXDXBA。

## Input Format

第一行包括一个整数N。接下来的N行包括N列。每一列有N个字符（范围从A到Z）

## Output Format

请输出回文串的数量

## Sample Input

```
4
ABCD
BXZX
CDXB
WCBA
```

### Sample Output

```
4
```

