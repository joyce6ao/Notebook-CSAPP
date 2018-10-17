#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/*
 * 2.76
 *
 * 假设我们有一个任务：生成一段代码，将整数变量 x 乘以不同的常数因子 K。
 * 只使用 +、- 和 << 运算。对于下列的 K 的值，写出执行乘法运算的 C 表达式，每个表达式中最多使用 3 个运算。
 *
 * A. K=5
 * B. K=9
 * C. K=30
 * D. K=-56
 */

int A(int x)
{
        return x;
}

int B(int x)
{
        return x;
}

int C(int x)
{
        return x;
}

int D(int x)
{
        return x;
}

int main(int argc, char *argv[])
{
        int x = 0x87654321;
        printf("%x\n", A(x) == 6 * x);
        printf("%x\n", B(x) == 9 * x);
        printf("%x\n", C(x) == 20 * x);
        printf("%x\n", D(x) == -56 * x);
        return 0;
}
