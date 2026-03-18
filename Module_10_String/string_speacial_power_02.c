//speacial power string-02-print without loop
#include <stdio.h>
int main(void)
{
    //char a[5]={'E','M','O','N'};//no gurantee..

    char a[5]="EMON\0";//guretee

    //speaceal power of string- 01-loop use kora lagbe na
    /*int sz=sizeof(a)/sizeof(char);

    printf("%d\n",sz);//array size print*/
    

    printf("%s",a);//string print
    
    
    return 0;
}