#include<stdio.h>
int main()
{
    int i=10,j=10,k=10,l=10;
    int w=i++;   //w=10,i=11 because first i is assigned to w then i is incremented
    int x=++j;   //x=11,j=11 because first j is incremented then assigned to x
    int y=k--;   //y=10,k=9 because first k is assigned to y then k is decremented
    int z=--l;   //z=9,l=9 because first l is decremented then assigned to z
    printf("w-%d\ni-%d\nx-%d\nj-%d\ny-%d\nk-%d\nz-%d\nl-%d\n",w,i,x,j,y,k,z,l);
    return 0;
}