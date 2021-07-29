int TriDin(int a, int b, int c, int d, int cont1, int cont2)
{
    if (a > b)
    {
        cont1 = a;
    }
    else
    {
        cont1 = b ;    
    }

    if (c > d)
    {
        cont2 = c;
    }
    else
    {
        cont2 = d;
    }
    if (cont1 > cont2)
    {
        return cont1;
    }
    else
    {
        return cont2;
    }
}