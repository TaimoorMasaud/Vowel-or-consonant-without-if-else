#include<stdio.h>
int main()
{
    char ch;
    int answer;
    printf("Enter a letter :");
    scanf("%c",&ch);
    answer=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    printf("Your character is vowel if 1 and 0 if consonant: %d",answer);
}
