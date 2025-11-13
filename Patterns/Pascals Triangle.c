int binomialCoeff(int n, int k);
void printPascal(int n)
{

    for (int i= 0; i < n; i++)

    {

        for (int j = 0; j <= i; j++)

            printf("%d ",

                   binomialCoeff(i,j));

        printf("\n");

    }
}

int binomialCoeff(int n, int k)
{

    int res = 1;

    if (k > n - k)

        k = n - k;

    for (int i = 0; i < k; ++i)

    {

        res *= (n - i);

        res /= (i + 1);

    }

    return res;
}

int main()
{

    int n = 7;

    printPascal(n);

    return 0;
}
