#include <stdio.h>
#include <stdlib.h>


void print_search_results (int** matrix, int x1, int y1, int x2, int y2); 

int main(){
    int arraysize;
    int fre[10]={0};
    scanf("%d",&arraysize);
    int math[arraysize][arraysize];
    int xone,yone,xtw,ytw;
    scanf("%d %d %d %d",&xone,&yone,&xtw,&ytw);
    int i,j;
    
    for(i=0;i<arraysize;++i){
        for(j=0;j<arraysize;++j){            
            math[i][j]=rand()%10;
        }
    }
    
    for(i=0;i<arraysize;++i){
        for(j=0;j<arraysize;++j){
            if(j%arraysize==0)
            puts("");
            printf("%d",math[i][j]);
        }
    }
    for(i=0;i<arraysize;++i){
        for(j=0;j<arraysize;++j){
            ++fre[math[i][j]];
        }
    }    
    for(i=0;i<=9;i++){
        if(fre[i]!=0)
        printf("\n %d %d",i,fre[i]);
    }



   // void print_search_results(&&math,xone,yone,xtw,ytw);
    
    return 0; 
}
void print_search_results (int** matrix, int x1, int y1, int x2, int y2){

}
