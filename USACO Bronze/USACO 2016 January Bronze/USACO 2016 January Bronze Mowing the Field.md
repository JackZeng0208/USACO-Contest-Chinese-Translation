## Description

FJ在管理农场的各个方面都相当可靠，除了一点：他很不擅长及时或合理地修剪草地。

农场是一个由方形单元格组成的大型二维网格。FJ在t=0时从其中一个单元开始，修剪这个单元的草，所以最初只有这个单元的草地被修剪。F接下来的割草模式由N个序列描述。例如，如果第一条语句是 "W 10"，那么在时间t=1到t=10（即接下来的10个时间单位），FJ将向西边的一个单元走去，沿途割草。在完成这一连串的步骤后，他将在时间t=10内向西走10个单元，沿途修剪每个单元的草。

FJ的进展很缓慢，以至于在他完成所有修剪之前，他所修剪的一些草可能会重新长出来。任何一段在时间t被剪掉的草都会在时间t+x重新出现。

FJ的修剪模式可能会让他多次重复访问同一个单元，但是他说他从来没有遇到过草已经被剪掉的单元。也就是说，每次他访问一个单元时，他最近一次访问同一单元的时间必须至少在x个单位之前（因为这样草才会有时间重新生长）。

请你找出当FJ的观察仍然有效时，x的最大可能值。

## Input Format

第一行包含一个N$$(1 \leq N \leq 100)$$。剩下的N行每行包括一个字母和一个数字'S'。字母代表了FJ割草的方向（N=北，E=东，S=南，W=西）。数字S则代表了FJ割草的步数$$(1 \leq S \leq 10)$$。

## Output Format

请给出当FJ的观察仍然有效时，x的最大可能值。如果FJ从没有访问同一个单位超过一次，请输出-1

## Sample Input

```
6
N 10
E 2
S 3
W 4
S 5
E 8
```

## Sample Output

```
10
```

在这个例子中，FJ在t=17时踩到了他之前在t=7时踩到的单元格；因此，x最多只能是10，否则他第一次访问的草还没有长回来。他还在t=26时踩到了他在t=2时访问过的一个单元；因此x也必须是最多24。由于这两个约束条件中的第一个更加严格，所以x=10。