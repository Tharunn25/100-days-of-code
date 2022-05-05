// day 92 out of 100
// cpp program to find wheather the string contains binary values or not
// gfg problem
{
    for (int i = 0; i < str.length(); i++)
        if (str[i] != '0' && str[i] != '1')
            return false;
    return true;
}
