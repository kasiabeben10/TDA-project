#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
FILE *in, *out;
int rozmiar_tablicy,i=0,w,o;
int min1,min2,min3,min4,min5,min6,min7,min8;
int max1,max2,max3,max4,max5,max6,max7,max8;
char nazwa[15],naz[5];
double x;
int *t1, *t2, *t3,*t4,*t5,*t6,*t7,*t8,*t9;
t1 = (int *) calloc(1,sizeof *t1);
t2 = (int *) calloc(1,sizeof *t2);
t3 = (int *) calloc(1,sizeof *t3);
t4 = (int *) calloc(1,sizeof *t4);
t5 = (int *) calloc(1,sizeof *t5);
t6 = (int *) calloc(1,sizeof *t6);
t7 = (int *) calloc(1,sizeof *t7);
t8 = (int *) calloc(1,sizeof *t8);
t9 = (int *) calloc(1,sizeof *t9);


min1=0;
max1=0;
min2=0;
max2=0;
min3=0;
max3=0;
min4=0;
max4=0;
min5=0;
max5=0;
min6=0;
max6=0;
min7=0;
max7=0;
min8=0;
max8=0;

for (w=1;w<34;w++)
{

itoa(w,naz,10);
strcpy(nazwa,"");
strcat(nazwa,naz);
strcat(nazwa,"t");
strcat(nazwa,".txt");
in = fopen(nazwa,"r");


if(in==NULL)
{
        printf("Brak pliku");
}
else
{
    while(!feof(in))
    {
        fscanf(in,"%d",&t1[i]);
        if (t1[i]<min1)
        {
            min1=t1[i];
        }
        if (t1[i]>max1)
        {
            max1=t1[i];
        }
        fscanf(in,"%d",&t2[i]);
        if (t2[i]<min2)
        {
            min2=t2[i];
        }
        if (t2[i]>max2)
        {
            max2=t2[i];
        }
        fscanf(in,"%d",&t3[i]);
        if (t3[i]<min3)
        {
            min3=t3[i];
        }
        if (t3[i]>max3)
        {
            max3=t3[i];
        }
        fscanf(in,"%d",&t4[i]);
        if (t4[i]<min4)
        {
            min4=t4[i];
        }
        if (t4[i]>max4)
        {
            max4=t4[i];
        }
        fscanf(in,"%d",&t5[i]);
        if (t5[i]<min5)
        {
            min5=t5[i];
        }
        if (t5[i]>max5)
        {
            max5=t5[i];
        }
        fscanf(in,"%d",&t6[i]);
        if (t6[i]<min6)
        {
            min6=t6[i];
        }
        if (t6[i]>max6)
        {
            max6=t6[i];
        }
        fscanf(in,"%d",&t7[i]);
        if (t7[i]<min7)
        {
            min7=t7[i];
        }
        if (t7[i]>max7)
        {
            max7=t7[i];
        }
        fscanf(in,"%d",&t8[i]);
        if (t8[i]<min8)
        {
            min8=t8[i];
        }
        if (t8[i]>max8)
        {
            max8=t8[i];
        }
        fscanf(in,"%d\n",&t9[i]);
        i++;
        t1 = (int*)realloc(t1,(i+1)*sizeof(int));
        t2 = (int*)realloc(t2,(i+1)*sizeof(int));
        t3 = (int*)realloc(t3,(i+1)*sizeof(int));
        t4 = (int*)realloc(t4,(i+1)*sizeof(int));
        t5 = (int*)realloc(t5,(i+1)*sizeof(int));
        t6 = (int*)realloc(t6,(i+1)*sizeof(int));
        t7 = (int*)realloc(t7,(i+1)*sizeof(int));
        t8 = (int*)realloc(t8,(i+1)*sizeof(int));
        t9 = (int*)realloc(t9,(i+1)*sizeof(int));
    }
    rozmiar_tablicy = i;
}
fclose(in);
}
printf("%d  --- %d",min1,max1);
o=0;
for (w=1;w<34;w++)
{

itoa(w,naz,10);
strcpy(nazwa,"");
strcat(nazwa,naz);
//strcat(nazwa,"t");
strcat(nazwa,"_norm");
strcat(nazwa,".txt");
out = fopen(nazwa,"w");
fprintf(out,"%s\n","l_uczniow proc_dziewczyn l_ucz_w_klasie l_naucz proc_dyplo proc_staz progres_mat progres_pol");
//fprintf(out,"%d\n",8);
//fprintf(out,"%d %s %d\n",1,"0.0004",500);
for (i=0;i<10;i++)
{

x = ((float)(t1[o]-min1)/(float)(max1-min1));
fprintf(out,"%f ",x);
x = ((float)(t2[o]-min2)/(float)(max2-min2));
fprintf(out,"%f ",x);
x = ((float)(t3[o]-min3)/(float)(max3-min3));
fprintf(out,"%f ",x);
x = ((float)(t4[o]-min4)/(float)(max4-min4));
fprintf(out,"%f ",x);
x = ((float)(t5[o]-min5)/(float)(max5-min5));
fprintf(out,"%f ",x);
x = ((float)(t6[o]-min6)/(float)(max6-min6));
fprintf(out,"%f ",x);
x = ((float)(t7[o]-min7)/(float)(max7-min7));
fprintf(out,"%f ",x);
x = ((float)(t8[o]-min8)/(float)(max8-min8));
o=o+1;
fprintf(out,"%f\n",x);
//fprintf(out,"%d\n",0);

}
fclose(out);
}

return 0;
}
