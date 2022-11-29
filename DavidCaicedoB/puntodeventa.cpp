

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*Es la función principal y dentro de ella podemos escribir las operaciones*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable, en este caso utilizaremos las siguientesDACB_x,DACB_s=0,DACB_vb,DACB_piva=12,DACB_viva,DACB_pdesc=10,DACB_vdesc,DACB_vn*/
float DACB_x,DACB_s=0,DACB_vb,DACB_piva=12,DACB_viva,DACB_pdesc=10,DACB_vdesc,DACB_vn;

/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación, estaremos utilizando DACB_i=0,DACB_l*/
int DACB_i=0,DACB_l;

/*Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas,ingrese l*/
	cout<<"Ingrese l: ";

/*cin es el flujo de entrada estándar que normalmente es el teclado, que el usuario debera ingresar*/
	cin>>DACB_l;

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
	do{

/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DACB_x:*/
		cout<<"Ingrese x: ";

/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DACB_x */
                cin>>DACB_x;

//Hacemos el proceso de la sumatoria de nuestros contadores
		DACB_i=DACB_i+1;

//Sumamos en el acumulador
		DACB_s=DACB_s+DACB_x; 

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
	}while(DACB_i<DACB_l);

//Luego hacemos, el proceso de DACB_vb que va hacer igual a DACB_s, en esta linea estamos igualando dos Cantidades
	DACB_vb=DACB_s;

//Aqui vamos a sacar el % de DACB_viva que va hacer igual a DACB_vb*DACB_piva/100
	DACB_viva=DACB_vb*DACB_piva/100;

//procedemos a calcular el DACB_vdesc que va hacer igual a DACB_vdesc=DACB_vb*DACB_pdesc/100, asi podemos sacar su %
	DACB_vdesc=DACB_vb*DACB_pdesc/100;

//decimos que DACB_vn es igual a DACB_vb+DACB_viva-DACB_vdesc, para poder calcular DACB_vn
	DACB_vn=DACB_vb+DACB_viva-DACB_vdesc;

//Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicito.
	cout<<"El valor a pagar es de: "<<DACB_vn<<endl;

/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
	return 0;
	
}
