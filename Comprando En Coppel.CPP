/*Hacer un programa que obtenga el total a pagar en Coppel.
Los datos para capturar son los siguientes:
• Nombre del cliente:
• Artículo:
• Precio:
• Unidades:
• Forma de pago: */

#include<conio.h>
#include<stdio.h>
char nom[20], art[20];
float precio, subtotal, intereses, total;
int uni, form_pag;
main()
{
  printf("COMPRA EN COPEL\n\n");
  printf("\n Nombre del cliente: ");gets(nom);
  printf("\n Articulo: ");gets(art); fflush(stdin);
  printf("\n Precio: ");scanf("%f",&precio);
  printf("\n Unidades: ");scanf("%d",&uni);
  printf("\n Forma de pago(1.Efectivo, 2.Credito): ");scanf("%d",&form_pag);

  subtotal = precio * uni;

  printf("\n\n Subtotal:%.2f", subtotal);

  if (form_pag == 2)
  {
    intereses = subtotal * .30;
  }
  else
  {
    intereses = 0;
  }
  printf("\n Intereses: %.2f", intereses);

  total = subtotal + intereses;

  printf("\n Total a pagar: %.2f", total);
  printf("\n\n\n Alumno: Irvin Adrian");
  getch();
}
