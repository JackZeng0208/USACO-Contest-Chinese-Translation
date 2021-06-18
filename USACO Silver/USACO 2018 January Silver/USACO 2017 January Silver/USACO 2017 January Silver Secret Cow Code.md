## Description

奶牛们正在进行秘密代码的实验，并设计了一种方法来创建一个无限长的字符串，作为他们代码的一部分。

给出一个字符串s，让最后的字符“向右”旋转一次（s的最后一个字符旋转并成为新的第一个字符）。因此，当给出一个字符串时，每一次操作都会使当前字符串的长度增加一倍。

给出初始字符串和一个索引N，请帮助奶牛计算无限代码串中第N个位置上的字符。

## Input Format

共一行，包括一个字符串和N$$(N \leq 10^{18})$$。字符串最多30个大写字母。

请注意，N可能过大，无法放进32位整数型。你可能需要使用64位整数型来存储（比如C/C++中的long long）。

## Output Format

请输出由初始字符串建立的无限代码串的第N个字符。第一个字符是N=1。

## Sample Input

```
COW 8
```

## Sample Output

```
C
```

在这个例子中，初始字符串COW会按照如下的方式扩展：

```
COW -> COWWCO -> COWWCOOCOWWC
                 12345678
```
