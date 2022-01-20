#include <stdio.h>

void bub(int di[],int size){
 int i,j;
 for(i=0;i<size;i++){
    for(j=1;j<size-i;j++){
        if(di[j]<di[j-1]){
        int temp=di[j];
        di[j]=di[j-1];
        di[j-1]=temp;
        //swap(di[j],di[j-1])
                }
            }
        }
    }
    
  int main(){
  	
  int dizi[100],i,boyut;
  printf("dizi boyutunu gir: ");
  scanf("%d",&boyut);
  
  for(i=0;i<boyut;i++){
  	printf("%d. elemani gir: ",i+1);
    scanf("%d",&dizi[i]);
    }
    
  bub(dizi,boyut);
  
  printf("bubble sort edilmis dizi: ");
  for(i=0;i<boyut;i++)
    printf("%d ",dizi[i]);
}
