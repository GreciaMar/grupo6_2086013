#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>


using namespace std;

struct empresa
{
	int idcontrato, numoc, lanzamiento;
	string nombre, clasificacion, caracteristicas, descripcion, genero;
	float subtotal, iva, total;
};


int main()
{
	empresa compras[3];
	int opcion, busqueda;
	string busquedastring;

	do
	{
		printf("\t ***MENU OPCIONES*** \n");
		printf("1.-Agregar articulo \n2.-Modificar articulo \n3.-Eliminar articulo \n4.-Lista de articulos \n5.-Limpiar pantalla \n6.-Salir \n");
		scanf_s("%d", &opcion);

		switch (opcion)
		{
		case 1: //Alta
			for (int i = 0; i < 3; i++)
			{
				compras[i].idcontrato = 1001 + i;
				printf("\n \nID CONTRATO: %d \n", compras[i].idcontrato);
				int salida = 1;
				{

					do
					{
						printf("Ingrese el numero del articulo \n");
						scanf_s("%d", &compras[i].numoc);
						if (compras[i].numoc == compras[i - 1].numoc || compras[i].numoc == compras[i - 2].numoc)
						{
							printf("El numero de orden del articulo ya existe\n");

						}
						else
						{
							salida = 2;
						}
					} while (salida == 1);


					printf("Ingrese el nombre del videojuego \n");
					cin.ignore();
					getline(cin, compras[i].nombre);
					printf("Ingrese el a%co del lanzaminto\n", 164);
					scanf_s("%d", &compras[i].lanzamiento);
					printf("Ingrese la clasificacion \n");
					cin.ignore();
					getline(cin, compras[i].clasificacion);
					printf("Ingrese las caracteristicas \n");
					cin.ignore();
					getline(cin, compras[i].caracteristicas);
					printf("Ingrese la descripcion del videojuego \n");
					cin.ignore();
					getline(cin, compras[i].descripcion);
					printf("Ingrese su genero \n");
					cin.ignore();
					getline(cin, compras[i].genero);
					printf("Ingrese el subtotal \n");
					scanf_s("%f", &compras[i].subtotal);
					compras[i].total = compras[i].subtotal * 1.16;
					printf("Con un iva del 1.16 \nSu total es: %f", compras[i].total);
				}
			}
			printf("\n\nSus datos han sido dados de alta\n");
			system("pause");
			system("cls");
		    break;

		case 2:
			system("pause");
			system("cls");
			break;

		case 3: //Eliminar
			printf("Ingrese el num oc");
			scanf_s("%d", &busqueda);

			for (int i = 0; i < 3; i++)
			{
				if (busqueda == compras[i].numoc)
				{
					compras[i].numoc = 0;
				}
			}
			system("pause");
			system("cls");
	     	break;

		case 4: //Lista

			system("cls");
			int opc2;
			do
			{
				printf("1.-Buscar por numero de articulo \n2.-Buscar por genero \n3.-Buscar por clasificacion \n4.-Ver listas de articulos vigente\n5.-Regresar a menu principal\n");
				scanf_s("%d", &opc2);

				switch (opc2)
				{

				case 1:
					printf("Ingrese el numero de orden de compra que busca\n");
					scanf_s("%d", &busqueda);

					for (int i = 0; i < 3; i++)
					{
						if (busqueda == compras[i].numoc)
						{
							printf("El id del contrato es: %d \n", compras[i].idcontrato);
							printf("El número de orden compra es %d \n", compras[i].numoc);
							printf("El nombre del videojugo es %s \n", compras[i].nombre.c_str());
							printf("El a%co del lanzaminto es %f \n", 164, compras[i].lanzamiento);
							printf("Las clasificaciones son %s \n", compras[i].clasificacion.c_str());
							printf("Las caracteristicas son %s \n", compras[i].caracteristicas.c_str());
							printf("Su descripcion es %s \n", compras[i].descripcion.c_str());
							printf("Los generos son %s \n", compras[i].genero.c_str());
							printf("El subtotal es %f \n", compras[i].subtotal);
							printf("El iva es 1.16");
							printf("El total es %f \n", compras[i].total);
							printf("\n\n");
						}
					}
					system("pause");
					system("cls");
					break;

				case 2:
					printf("Ingrese el genero que busca\n");
					cin.ignore();
					getline(cin, busquedastring);

					for (int i = 0; i < 3; i++)
					{
						if (busquedastring == compras[i].genero)
						{
							printf("El id del contrato es: %d \n", compras[i].idcontrato);
							printf("El número de orden compra es %d \n", compras[i].numoc);
							printf("El nombre del videojugo es %s \n", compras[i].nombre.c_str());
							printf("El a%co del lanzaminto es %f \n", 164, compras[i].lanzamiento);
							printf("Las clasificaciones son %s \n", compras[i].clasificacion.c_str());
							printf("Las caracteristicas son %s \n", compras[i].caracteristicas.c_str());
							printf("Su descripcion es %s \n", compras[i].descripcion.c_str());
							printf("Los generos son %s \n", compras[i].genero.c_str());
							printf("El subtotal es %f \n", compras[i].subtotal);
							printf("El iva es 1.16");
							printf("El total es %f \n", compras[i].total);
							printf("\n\n");
						}
					}
					system("pause");
					system("cls");
					break;

				case 3:
					printf("Ingrese la clasificacion que busca\n");
					cin.ignore();
					getline(cin, busquedastring);

					for (int i = 0; i < 3; i++)
					{
						if (busquedastring == compras[i].clasificacion)
						{
							printf("El id del contrato es: %d \n", compras[i].idcontrato);
							printf("El número de orden compra es %d \n", compras[i].numoc);
							printf("El nombre del videojugo es %s \n", compras[i].nombre.c_str());
							printf("El a%co del lanzaminto es %f \n", 164, compras[i].lanzamiento);
							printf("Las clasificaciones son %s \n", compras[i].clasificacion.c_str());
							printf("Las caracteristicas son %s \n", compras[i].caracteristicas.c_str());
							printf("Su descripcion es %s \n", compras[i].descripcion.c_str());
							printf("Los generos son %s \n", compras[i].genero.c_str());
							printf("El subtotal es %f \n", compras[i].subtotal);
							printf("El iva es 1.16");
							printf("El total es %f \n", compras[i].total);
							printf("\n\n");
						}
					}
					system("pause");
					system("cls");
					break;

				case 4:
					for (int i = 0; i < 3; i++)
					{
						if (compras[i].numoc != 0)
						{
							printf("El id del contrato es: %d \n", compras[i].idcontrato);
							printf("El número de orden compra es %d \n", compras[i].numoc);
							printf("El nombre del videojugo es %s \n", compras[i].nombre.c_str());
							printf("El a%co del lanzaminto es %f \n", 164, compras[i].lanzamiento);
							printf("Las clasificaciones son %s \n", compras[i].clasificacion.c_str());
							printf("Las caracteristicas son %s \n", compras[i].caracteristicas.c_str());
							printf("Su descripcion es %s \n", compras[i].descripcion.c_str());
							printf("Los generos son %s \n", compras[i].genero.c_str());
							printf("El subtotal es %f \n", compras[i].subtotal);
							printf("El iva es 1.16");
							printf("El total es %f \n", compras[i].total);
							printf("\n\n");
						}
					}
					system("pause");
					system("cls");
					break;
				case 5:
					system("cls");
					return main();
					break;

				default:
					printf("Intente de nuevo... \n");
					system("pause");
					system("cls");
					break;
				}
			} while (opcion != 5);
			system("pause");
			system("cls");
	    	break;

		case 5: //Limpiar pantalla
			system("cls");
	    	break;

		case 6:
			printf("Saliendo... \n");
	    	break;

		default:
			printf("Intente denuevo... \n");
			system("pause");
			system("cls");
	    	break;
		}
	} while (opcion != 6);
	system("pause");
}