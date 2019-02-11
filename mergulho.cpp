#include<iostream>

using namespace std;

int busca(int vet[],int tam,int item);

int main(){
    int n,r,i,vert[1000],r2,n2,j,item;
   while(cin>>n>>r){// lendo os numero  de voluntários que mergulhou 
                    //e o número de voluntários que retornou do mergulho
    for(i=0;i<r;i++){
      cin>>vert[i]; //lendo os voluntários que retornaram do mergulho                       
     }//fim de for 
   if(n!=r){
      for(j=1;j<=n;j++){
        r2=busca(vert,r,j);// comparando para saber qual mergulhado voltou
        if(r2==0){
          cout<<j<<" ";          
        }                       
     }//fim de for
    cout<<"\n";         
   
  }/*fim do if*/else{cout<<"*\n";}         
    
} 
    
    
  system("pause");  
  return 0;    
}


int busca(int vet[],int tam,int item){
    int i;
    
      for(i=0;i<tam;i++){
         if(vet[i]==item){
              return 1;               
          }
                         
      }
     return 0;
    
}
