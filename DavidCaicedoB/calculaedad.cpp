

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	float  DACB_aa,DACB_ma,DACB_da,DACB_an,DACB_mn,DACB_dn,DACB_a,DACB_m,DACB_d;

/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DACB_aa:*/
	cout<< " Ingrese la fecha actual: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DACB_an */
	cin>>DACB_aa>>DACB_ma>>DACB_da;



/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DACB_an:*/
	cout<< " Ingrese la fecha de nacimiento: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DACB_an */
	cin>>DACB_an>>DACB_mn>>DACB_dn;


/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if (DACB_da>DACB_dn){


//decimos que la DACB_d va hacer igual a DACB_da menos DACB_dn, para poder calcular la edad de cualquier persona
		DACB_d=DACB_da-DACB_dn;


/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	}  else {


//decimos que la DACB_d va hacer igual a DACB_da menos DACB_dn, para poder calcular la edad de cualquier persona
		DACB_da=DACB_da+ 30 ;


//decimos que la DACB_d va hacer igual a DACB_da menos DACB_dn, para poder calcular la edad de cualquier persona
		DACB_ma=DACB_ma- 1 ;


//decimos que la DACB_d va hacer igual a DACB_da menos DACB_dn, para poder calcular la edad de cualquier persona
		DACB_d=DACB_da-DACB_dn;



	}



/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if(DACB_ma>DACB_mn){


//decimos que la DACB_m va hacer igual a DACB_ma menos DACB_mn, para poder calcular la edad de cualquier persona
		DACB_m=DACB_ma-DACB_mn;


/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	} else {DACB_ma=DACB_ma+ 12 ;


//decimos que la DACB_aa va hacer igual a  DACB_aa, menos 1 para poder calcular la edad de cualquier persona
		DACB_aa=DACB_aa- 1 ;


//decimos que la CBPJ_m va hacer igual a DACB_ma menos DACB_mn, para poder calcular la edad de cualquier persona
		DACB_m=DACB_ma-DACB_mn;
	
	}

//decimos que la DACB_a va hacer igual a DACB_aa menos DACB_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
	DACB_a=DACB_aa-DACB_an;


/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comilas:*/
	cout<< " Usted tiene " <<DACB_a<< " años, " <<DACB_m<< " meses, " <<DACB_d<< " dias " <<endl;


/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
	return 0 ;

}
