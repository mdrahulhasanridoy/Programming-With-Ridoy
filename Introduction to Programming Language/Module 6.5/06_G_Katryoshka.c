#include<stdio.h>
int main()
{
    long long int eyes,mouth,body;
    scanf("%lld %lld %lld", &eyes, &mouth, &body);

    long long minimum_katryoshka = 0;

    if(eyes<mouth && eyes<body)
    {
        minimum_katryoshka=eyes;
    }
    else if(mouth<eyes && mouth<body)
    {
        minimum_katryoshka=mouth;
    }
    else if(body<mouth && body<eyes)
    {
        minimum_katryoshka=body;
    }

    long long int remaining_eyes=(eyes-minimum_katryoshka)/2;
    long long int remaining_mouth=mouth-minimum_katryoshka;
    long long int remaining_body=body-minimum_katryoshka;
    
    if(remaining_eyes<=remaining_body)
    {
        printf("%lld",remaining_eyes+minimum_katryoshka);
    }
    else if(remaining_body<=remaining_eyes)
    {
        printf("%lld",remaining_body+minimum_katryoshka);
    }
    return 0;
}