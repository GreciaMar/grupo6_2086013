#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <locale.h>
#include <windows.h>


using namespace std;

//Declaracion de variables
int* numoc, * lanzamiento, registros;
string* nombre, * clasificacion, * caracteristicas, * descripcion, * genero;
float* subtotal, * iva, * total;

void Alta();
void Eliminar();
void Modificar();
void Lista();
void Archivo();

int main()
{
	setlocale(LC_ALL, "spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	int opcion, busqueda = 0;
	string busquedastring;

	printf("\t ***IT%cS NOT JUST A GAME MOM*** \n", 39);
	printf("\t       videogame store \n");
	printf("1.-Agregar articulo \n2.-Modificar articulo \n3.-Eliminar articulo \n4.-Lista de articulos \n5.-Limpiar pantalla \n6.-Salir \n");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1: //Alta
		Alta();
		system("pause");
		system("cls");
		return main();
		break;

	case 2: //Modificar articulo
		Modificar();
		system("pause");
		system("cls");
		return main();
		break;

	case 3: //Eliminar
		Eliminar();
		system("pause");
		system("cls");
		return main();
		break;

	case 4: //Lista
		Lista();
		system("pause");
		system("cls");
		return main();
		break;

	case 5: //Limpiar pantalla
		system("pause");
		system("cls");
		return main();
		break;

	case 6: //Salir, Creacion de archivo
		Archivo();
		exit(1);
		break;

	default:
		printf("Numero invalido, favor de intentar de nuevo... \n");
		system("pause");
		system("cls");
		return main();
		break;
	}

}

void Alta()
{

	printf("Cuantos registros desea dar de alta \n");
	scanf_s("%d", &registros);
	system("cls");

	numoc = new int[registros];
	lanzamiento = new int[registros];
	nombre = new string[registros];
	clasificacion = new string[registros];
	caracteristicas = new string[registros];
	descripcion = new string[registros];
	genero = new string[registros];
	subtotal = new float[registros];
	iva = new float[registros];
	total = new float[registros];

	for (int i = 0; i < registros; i++)
	{
		system("cls");

		printf("Ingrese el numero de orden de compra\n");
		scanf_s("%d", &numoc[i]);

		int n = 1;

		do
		{
			if (numoc[i] != numoc[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("El numero de orden de compra ya existe \n");
				printf("\nFavor de ingresar uno distinto \n");
				scanf_s("%d", &numoc[i]);
				n = n + 1;
			}
		} while (n < registros);

		printf("Ingrese el nombre del videojuego \n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("Ingrese el a%co del lanzaminto\n", 164);
		scanf_s("%d", &lanzamiento[i]);
		printf("Ingrese la clasificacion \n");
		cin.ignore();
		getline(cin, clasificacion[i]);
		printf("Ingrese las caracteristicas \n");
		getline(cin, caracteristicas[i]);
		printf("Ingrese la descripcion del videojuego \n");
		getline(cin, descripcion[i]);
		printf("Ingrese su genero \n");
		getline(cin, genero[i]);
		printf("Ingrese el precio \n");
		scanf_s("%f", &subtotal[i]);
		total[i] = subtotal[i] * 1.16;
		printf("El iva es:   1.16 \n");
		printf("El total es:   %f \n", total[i]);
		printf("\n\n");

		system("pause");
		system("cls");

		if ((registros - 1) == i)
		{
			int desicion;
			printf("Desea dar de alta otra orden de compra \n 1-.Si\n 2.-No\n");
			scanf_s("%d", &desicion);
			if (desicion == 1)
			{
				registros = registros + 1;
			}
		}
	}
	printf("Sus datos han sido dados de alta\n");

}

void Modificar()
{
	int modificar, opc;

	system("cls");

	printf("ELiga que tipo de dato desea modificar \n");
	printf("1.-Todos los datos \n2.-Numeros de contrato \n3.-Nombre \n4.-A%co de lanzamiento \n5.-Clasificacion \n6.-Caracteristicas \n7.-Descripcion \n8.-Genero \n9.-Precio \n10.-Salir \n", 164);
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1: //Todos los datos

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				int n = 1;

				if (numoc[i] != numoc[i - 1])
				{
					n = n + 1;
				}
				else
				{
					printf("El numero de orden del articulo ya existe\n");
					printf("Ingrese el numero del articulo \n");
					scanf_s("%d", &numoc[i]);
				}while (n < registros);

				printf("Ingrese el nombre del videojuego \n");
				cin.ignore();
				getline(cin, nombre[i]);
				printf("Ingrese el a%co del lanzaminto\n", 164);
				scanf_s("%d", &lanzamiento[i]);
				printf("Ingrese la clasificacion \n");
				cin.ignore();
				getline(cin, clasificacion[i]);
				printf("Ingrese las caracteristicas \n");
				getline(cin, caracteristicas[i]);
				printf("Ingrese la descripcion del videojuego \n");
				getline(cin, descripcion[i]);
				printf("Ingrese su genero \n");
				getline(cin, genero[i]);
				printf("Ingrese el precio \n");
				scanf_s("%f", &subtotal[i]);
				subtotal[i] = subtotal[i] * 1.16;
				printf("Con un iva del 1.16 \nSu total es: %f", subtotal[i]);
			}
		}
		printf("\n\nSus datos han sido dados de alta\n");
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 2: //Numeros de contrato

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				int n = 1;

				if (numoc[i] != numoc[i - 1])
				{
					n = n + 1;
				}
				else
				{
					printf("El numero de orden del articulo ya existe\n");
					printf("Ingrese el numero del articulo \n");
					scanf_s("%d", &numoc[i]);
				}while (n < registros);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 3: //Nombre

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				printf("Ingrese el nombre del videojuego \n");
				cin.ignore();
				getline(cin, nombre[i]);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 4: //Lanzamiento

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				printf("Ingrese el a%co del lanzaminto\n", 164);
				cin.ignore();
				scanf_s("%d", &nombre[i]);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 5: //Clasificacion

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				printf("Ingrese la clasificacion \n");
				cin.ignore();
				getline(cin, clasificacion[i]);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 6: //Caracteristicas

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				printf("Ingrese las caracteristicas \n");
				cin.ignore();
				getline(cin, caracteristicas[i]);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 7: //Descripcion

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				printf("Ingrese la descripcion del videojuego \n");
				cin.ignore();
				getline(cin, descripcion[i]);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 8: //Genero

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				printf("Ingrese su genero \n");
				cin.ignore();
				getline(cin, genero[i]);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 9: //Subtotal

		system("cls");

		for (int i = 0; i < registros; i++)
		{
			do
			{
				printf("Ingrese el numero de articulo que desea modificar \n");
				scanf_s("%d", &modificar);

			} while (modificar <= 0);

			if (modificar == numoc[i]);
			{
				printf("Ingrese el precio \n");
				cin.ignore();
				scanf_s("%f", &subtotal[i]);
			}
		}
		system("pause");
		system("cls");
		return Modificar();
		break;

	case 10: //Salir
		printf("Regresando a menu principal...\n");
		break;

	default:
		break;
	}while (opc != 10);
}

void Eliminar()
{
	int eliminar;

	system("cls");

	printf("Ingrese el numero de orden de compra del articulo a eliminar \n");
	scanf_s("%d", &eliminar);

	for (int i = 0; i < registros; i++)
	{
		if (eliminar == numoc[i])
		{
			numoc[i] = 0;
		}
		printf("Su orden de compra a sido eliminada....\n");
	}
}

void Lista()
{
	int opc2, busqueda, n = 0;
	string busquedastring;

	system("cls");
	do
	{
		printf("Seleccione una de las siguientes pociones \n");
		printf("1.-Ver listas de articulos vigente \n2.-Buscar por genero \n3.-Buscar por clasificacion \n4.-Buscar por numero de articulo \n5.-Regresar a menu principal\n");
		scanf_s("%d", &opc2);

		switch (opc2)
		{

		case 1:
			for (int i = 0; i < registros; i++)
			{
				n = n + 1;

				if (numoc[i] != 0)
				{
					printf("El numero de orden compra es:   %d \n", numoc[i]);
					printf("El nombre del videojugo es:   %s \n", nombre[i].c_str());
					printf("El a%co del lanzaminto es:   %d \n", 164, lanzamiento[i]);
					printf("Las clasificaciones son:   %s \n", clasificacion[i].c_str());
					printf("Las caracteristicas son:   %s \n", caracteristicas[i].c_str());
					printf("Su descripcion es:   %s \n", descripcion[i].c_str());
					printf("Los generos son:   %s \n", genero[i].c_str());
					printf("El subtotal es:   %f \n", subtotal[i]);
					total[i] = subtotal[i] * 1.16;
					printf("El iva es:   1.16 \n");
					printf("El total es:   %f \n", total[i]);
					printf("\n\n");
				}
			}while (n < registros);

			system("pause");
			system("cls");
			break;


		case 2:
			printf("Ingrese el genero que busca\n");
			cin.ignore();
			getline(cin, busquedastring);

			for (int i = 0; i < 3; i++)
			{
				if (busquedastring == genero[i])
				{
					printf("El numero de orden compra es:   %d \n", numoc[i]);
					printf("El nombre del videojugo es:   %s \n", nombre[i].c_str());
					printf("El a%co del lanzaminto es:   %d \n", 164, lanzamiento[i]);
					printf("Las clasificaciones son:   %s \n", clasificacion[i].c_str());
					printf("Las caracteristicas son:   %s \n", caracteristicas[i].c_str());
					printf("Su descripcion es:   %s \n", descripcion[i].c_str());
					printf("Los generos son:   %s \n", genero[i].c_str());
					printf("El subtotal es:   %f \n", subtotal[i]);
					printf("El iva es:   1.16");
					printf("El total es:   %f \n", total[i]);
					printf("\n\n");
				}
			}
			system("pause");
			system("cls");
			return Lista();
			break;

		case 3:
			printf("Ingrese la clasificacion que busca\n");
			cin.ignore();
			getline(cin, busquedastring);

			for (int i = 0; i < 3; i++)
			{
				if (busquedastring == clasificacion[i].c_str())
				{
					printf("El numero de orden compra es:   %d \n", numoc[i]);
					printf("El nombre del videojugo es:   %s \n", nombre[i].c_str());
					printf("El a%co del lanzaminto es:   %d \n", 164, lanzamiento[i]);
					printf("Las clasificaciones son:   %s \n", clasificacion[i].c_str());
					printf("Las caracteristicas son:   %s \n", caracteristicas[i].c_str());
					printf("Su descripcion es:   %s \n", descripcion[i].c_str());
					printf("Los generos son:   %s \n", genero[i].c_str());
					printf("El subtotal es:   %f \n", subtotal[i]);
					printf("El iva es:   1.16 \n");
					printf("El total es:   %f \n", total[i]);
					printf("\n\n");
				}
			}
			system("pause");
			system("cls");
			return Lista();
			break;

		case 4:

			for (int i = 0; i < 3; i++)
			{
				printf("Ingrese el numero de orden de compra que busca\n");
				scanf_s("%d", &busqueda);

				if (busqueda == numoc[i])
				{
					printf("El numero de orden compra es:   %d \n", numoc[i]);
					printf("El nombre del videojugo es:   %s \n", nombre[i].c_str());
					printf("El a%co del lanzaminto es:   %d \n", 164, lanzamiento[i]);
					printf("Las clasificaciones son:   %s \n", clasificacion[i].c_str());
					printf("Las caracteristicas son:   %s \n", caracteristicas[i].c_str());
					printf("Su descripcion es:   %s \n", descripcion[i].c_str());
					printf("Los generos son:   %s \n", genero[i].c_str());
					printf("El subtotal es:   %f \n", subtotal[i]);
					printf("El iva es:   1.16");
					printf("El total es:   %f \n", total[i]);
					printf("\n\n");
				}
				else
				{
					printf("No existe este numero de orden de compra");
				}
			}
			system("pause");
			system("cls");
			return Lista();
			break;

		case 5:
			printf("Regresando a menu principal...\n");
			break;

		default:
			printf("Intente de nuevo... \n");
			system("pause");
			system("cls");
			return Lista();
			break;
		}
	} while (opc2 != 5);
}

void Archivo()
{
	ofstream archivo;
	string nombrea, nombrev, clasificacionv, caracteristicasv, descripcionv, generov;
	int numocv, lanzamientov;
	float subtotalv, totalv;

	nombrea = "Archivo Proyecto Final";
	archivo.open(nombrea.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("ERROR NO SE GENERO EL ARCHIVO\n");
		system("pause");
		exit(1);
	}

	archivo << "\t \t ARCHIVOS DADOS DE ALTA \n";

	for (int i = 0; i < registros; i++)
	{
		archivo << "\n" << endl;

		numocv = numoc[i];
		archivo << "Orden de compra: " << numocv << endl;

		nombrev = nombre[i];
		archivo << "Nombre: " << nombrev << endl;

		lanzamientov = lanzamiento[i];
		archivo << "Lanzamiento: " << lanzamientov << endl;

		clasificacionv = clasificacion[i];
		archivo << "Clasificaciones: " << clasificacionv << endl;

		caracteristicasv = caracteristicas[i];
		archivo << "Caracteristicas: " << caracteristicasv << endl;

		descripcionv = descripcion[i];
		archivo << "Descripcion: " << descripcionv << endl;

		generov = genero[i];
		archivo << "Genero: " << generov << endl;

		subtotalv = subtotal[i];
		archivo << "Subtotal: " << subtotalv << endl;
		
		archivo << "IVA: 0.16" << endl;

		totalv = total[i];
		archivo << "Total: " << totalv << endl;
	}
	archivo.close();
}