#include "FuncionesCC.c"


// 4 pisos, 9 locales por piso



int main(){
	local arreglo[p][l];
   int counter[10]={0};
   int id=5;
   int n=sizeof(counter)/sizeof(counter[0]);
  
   int ocupados[5][10]={0};  //0 vacio , 1 lleno
 
  
   int opcion;
   do{
	  opcion=menu();
      switch(opcion){
         case 1:
            agregarLocal(arreglo,counter,ocupados);
            break;
         case 2:
         	mostrarTodosLocal(arreglo,counter, ocupados);
            break;
         case 3:
         	buscarLocalNombre(arreglo);
            break;
          case 4:
          	mostrarLocalesPiso(arreglo,counter);
          	break;
          case 5:
          	cambiarNombre(arreglo);
          	break;
          case 6:
          	printf("Hay %d Locales ", contarNumLocales(ocupados,0,0));
          	break;
          
          

      }
   }while(opcion!=0);

	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                   
