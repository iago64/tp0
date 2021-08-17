/*
 * main.c
 *
 *  Created on: 28 feb. 2019
 *      Author: utnso
 */

#include "cliente.h"

int main(void)
{
	/*---------------------------------------------------PARTE 2-------------------------------------------------------------*/
	int conexion;
	char* ip;
	char* puerto;
	char* valor;

	t_log* logger;
	t_config* config;

	logger = iniciar_logger();

	// Usando el logger creado previamente
	// Escribi: "Hola! Soy un log"

	config = iniciar_config();

	// Usando el config creado previamente
	// Lee las variables de IP, Puerto y Valor
	// Spoiler: Revisa commons/config.h


	//Loggear valor de config

	leer_consola(logger);


	/*---------------------------------------------------PARTE 3-------------------------------------------------------------*/

	//antes de continuar, tenemos que asegurarnos que el servidor esté corriendo porque lo necesitaremos para lo que sigue.

	//crear conexion

	//enviar CLAVE al servirdor

	paquete(conexion);

	terminar_programa(conexion, logger, config);
}

t_log* iniciar_logger(void)
{
	// Para iniciar un logger, vas a tener que usar las funciones de logs
	// Estas funciones las vamos a encontrar en commons\log.h
	t_log* nuevo_logger;

	// Vamos a retornar el logger que acabamos de crear
	// El problema es que si no lo creamos, al usarlo va a explotar.
	return nuevo_logger;
}

t_config* iniciar_config(void)
{
	// Para iniciar un logger, vas a tener que usar las funciones de logs
	// Estas funciones las vamos a encontrar en commons\config.h
	t_config* nuevo_config;

	// Vamos a retornar el config que acabamos de crear
	// El problema es que si no lo creamos, al usarlo va a explotar.
	return nuevo_config;
}

void leer_consola(t_log* logger)
{
	char* leido;

	//El primero te lo dejo de yapa
	leido = readline(">");

	// Acá la idea es que imprimas por el log lo que recibis de la consola.


}

void paquete(int conexion)
{
	//Ahora toca lo divertido!

	char* leido;
	t_paquete* paquete;


}

void terminar_programa(int conexion, t_log* logger, t_config* config)
{
	//Y por ultimo, para cerrar, hay que liberar lo que utilizamos (conexion, log y config) con las funciones de las commons y del TP mencionadas en el enunciado
}
