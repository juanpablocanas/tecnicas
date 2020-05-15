#include "FuncionesCC.c"


// 4 pisos, 9 locales por piso



int main(){

   int counter[10]={0};
   int id=5;
   int n=sizeof(counter)/sizeof(counter[0]);
   
  int cantLocales=0;
   
   
   int pisos, localesPiso;
    printf("Numero de pisos: ");
    scanf("%d", &pisos);
    printf("Numero de locales por piso: ");
    scanf("%d", &localesPiso);
    local** arreglo = crearCC(pisos, localesPiso);
 	int ocupados=malloc(sizeof(int) * pisos);
 	Queue fila = createQueue();
 	consumidor c;
 	
   int opcion;
   do{
	  opcion=menu();
      switch(opcion){
         case 1:
            agregarLocal(arreglo,pisos,localesPiso,&cantLocales);
            break;
         case 2:
         	mostrarTodosLocal(arreglo,pisos,localesPiso);
            break;
         case 3:
         	buscarLocalNombre(arreglo,  pisos,  localesPiso);
            break;
          case 4:
          	mostrarLocalesPiso(arreglo,pisos);
          	break;
          case 5:
          	cambiarNombre(arreglo);
          	break;
          case 6:
          	printf("Hay %d Locales ", contarNumLocales(ocupados,0,0));
          	break;
          case 7:
          	agregarDeudores(arreglo);
          	break;
          case 8:
          	ordenarTrabajadores(arreglo,cantLocales);
          	break;
          case 9:
          	printf( "Ingrese nombre consumidor: " ); scanf("%s", c.nombre);
				printf( "Ingrese id consumidor: " ); scanf("%d", &c.id);
				printf( "Ingrese  edad consumidor: " ); scanf("%d", &c.edad);
				fila.put(&fila,c);
          	
          	break;
           case 10:
				printf( "La persona ha entrado al centro comercial \n" );
				fila.delete( &fila );
				break;
          	case 11:
				fila.display(&fila);
				break;
          	
          	break;
          
          

      }
   }while(opcion!=0);

	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                   
