int i;
int length(char s[100]) {
    for ( i = 0;s[i]!='\0'; i++);
    return i;
}
void lower(char s[100]) { 
    for ( i = 0; s[i]!='\0'; i++)
    {
        if (s[i]>=65 && s[i]<=90)s[i] = s[i]+32;
    } 
}
void upper(char s[100]) { 
    for ( i = 0; s[i]!='\0'; i++)
    {
        if (s[i]>=97 && s[i]<=122)s[i] = s[i]-32;
    } 
}