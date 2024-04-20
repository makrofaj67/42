int ft_strcmpr(char *s1, char *s2)
{   
    int i;

    i = 0;
    while ((s1[i] == s2[i]) && s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

char **ft_split(char *str, char *charset)
{   
    int i;
    char *tmp;

    while (*str)
    {   
        if (ft_strcmpr(str, charset) != 0)
        {
            tmp[i] = *str;
            i++;            
        }
        else
        {
            
        }

    }
}

int main ()
{
    char s1[] = "abac***fghjf***rtrsd***r";
    char s2[] = "***";

    ft_split(s1, s2);
}