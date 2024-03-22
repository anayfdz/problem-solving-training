#include <stdio.h>
#include <string.h>
int distance_hamming(char *chain1, char *chain2)
{
int distance = 0;
int longitude = strlen(chain1);
if (longitude != strlen(chain2))
{
    printf("Las cadenas de ADN deben tener la misma longitud\n");
    return -1;
}
for (int i = 0; i < longitude; i++)
{
    if(chain1[i] != chain2[i])
    {
        distance++;
    }
}
return distance;
}
