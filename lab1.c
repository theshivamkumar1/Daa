#include <stdio.h>
void EXCHANGE(int *p,int*q){
int temp =*p;
*p=*q;
*q=temp;
}
void ROTATE_RIGHT(int *p1,int p2){
int temp=p1[p2-1];
for(int i=p2-1;i>0;i--){
p1[i]=p1[i-1];
}
EXCHANGE(&p1[0],&temp);
}
void rotate(int *p,int size){
printf("\nEnter position to rotate :-" );
int r;
scanf("%d",&r);
printf("\nelements in array (before rotation ):");
for(int i=0;i<size;i++){
printf("%d",p[i]);
}
ROTATE_RIGHT(p,r);
printf("\nelements in array (after rotation):- ");
for (int i=0;i<size;i++){
printf("%d",p[i]);
}
}
int main(){
int v,x,y,z=0,m=0;
printf("enter how many element you want to enter in array \n");
scanf("%d",&x);
int a[x];
FILE *file1= fopen ("lab1.txt", "r");
if(file1 == NULL){
printf("unable to open file ");
}

for(int i =0;i<x;i++){

fscanf(file1,"%d",&y);
a[i]=y;
}
printf("your given array is ");
for(int i=0 ;i<x;i++){
printf("%d\t",a[i]);
}
printf("sum of array is \n");
int sum=0 ;
for(int i=0;i<x;i++){
sum +=a[i];
}
printf("sum = %d",sum);
int avg;
avg = sum/x;
printf("avg of array %d \n",avg);
int l=a[0];
int s=a[0];
for(int i=0;i<x;i++){
if(a[i]<s){
s=a[i];
}
if(a[i]>l){
l=a[i];
}
}
printf("largest element int given array %d \n",l);
printf("smalltest element in given array %d \n",s);

printf("enter your search value ");
int sea;
scanf("%d",&sea);
for(int i=0 ; i<x;i++){
if(a[i]==sea){
printf("given element present in array %d \n" , sea);
z++;
break;

}

}
if(z==0){
printf("your given element is not present in array \n");

}
for(int i=0;i<x;i++){
for(m = i+1;m<x;m++){
if(a[i]>=a[m]){
v=a[i];
a[i]=a[m];
a[m]=v;

}
}
}
printf("second largest element int given array %d \n",a[x-2]);
printf(" second smalltest element in given array %d \n",a[1]);
 int count=0;
 for(int i=0;i<x;i++){
 for(int j=i+1;j<x;j++){
 if(a[i]==a[j]){
 count++;
 printf("duplicate element %d \n" ,a[j]);
 }
 }
 }
 if(count==0){
 printf("duplicate element not present ");
 }
 rotate(a,x);
}