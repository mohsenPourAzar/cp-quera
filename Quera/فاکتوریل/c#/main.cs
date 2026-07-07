int num = Convert.ToInt32(Console.ReadLine());
int res = 1;
for(int i=1; i<=num; i++)
{
    res *= i;
}
Console.WriteLine(res);