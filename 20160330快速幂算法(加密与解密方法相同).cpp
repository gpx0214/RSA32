#include<stdio.h>

__int64 powmod(__int64 m,__int64 e,__int64 n)
{
    __int64 ret=1;
    __int64 ret2[64];
    for(int i=0;i<=31;i++)
    {
        if(i==0)
        {
            ret2[0]=m%n;
        }else{
            ret2[i]=(ret2[i-1]*ret2[i-1])%n;
        }
        //printf("m\^\(2\^%d\)=%I64d\n",i,ret2[i]);
        if((e>>i)%2)ret=(ret*ret2[i])%n;
    }
    return ret;
}

int main(){
    printf("M=%lld\n",powmod(5234673,3674911,6012707));
    printf("M=%lld\n",powmod(3650502,422191,6012707));
    printf("M=%lld\n",powmod(5234673,422191,6012707));
    printf("M=%lld\n",powmod(4798452,3674911,6012707));
    return 0;
}
