#include <stdio.h>
#include <stdlib.h>

void fibo_iterativo(int a, int b, int c, int d){
     while ( d < (c-2) )
     {	
         if(d==0 || d==1) printf("%d\n", d);
			
         a = a + b;
         b = a - b;
         d = d + 1;
			
         if(d>0) printf("%d\n", a);
     }   
}

int fibo_recursivo(int b){

   if (b <= 1) { 
         return b; 
   } 
   else { 
        return fibo_recursivo(b - 1) + fibo_recursivo(b - 2); 
   }  
}

int main(){
    
    int a,b,c,d,op,num;	

     a = 1;		
     b = 0;
     d = 0;
     do{              
         printf("\nFIBONACCI \n[1] Iterativo \n[2] Recursivo \n[3]Sair \n");           
         scanf("%d", &op);
         
         if(op !=3){
             printf("Digite a quantidade de termos: ");
             scanf("%d", &c);
         }
    
         switch (op){
             case 1:
                 fibo_iterativo(a,b,c,d);
             break;
             
             case 2:
                  while(b<c)
                  {
                     printf("%d \n", fibo_recursivo(b));
                     b = b+1;
                  }
             break;
         }
         a = 1;		
         b = 0;
         d = 0;
     }while(op != 3);

    system("pause");
    return 0; 
}
