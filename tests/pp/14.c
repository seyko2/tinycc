extern int printf(const char *format, ...);
#define P ++

int main(void)
{
    int a = 0, b = -1;
    int i1 = a P+P b;
    printf("i1 = %d\n", i1);
    return 0;
}
