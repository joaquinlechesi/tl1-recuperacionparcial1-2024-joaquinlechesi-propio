#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char Servicios[3][10] = {"50Mb", "100Mb", "300Mb"};

typedef struct TVenta {
    int ServicioID;              // Numerado en ciclo iterativo
    char *ServicioContratado;    // Algún valor del arreglo Servicios
    float Precio;                // Entre 10000 - 20000
    int Bonificacion;            // 40% de descuento si es "1" ,  "0" sin descuento
    int Empresa;                 // 1 - Telecom, 2 - Claro, 3 - Movistar
}TVenta;

typedef struct NodoTVenta {
    TVenta venta;
    struct NodoTVenta *Siguiene;
}NodoTVenta;

struct TVenta CrearVenta(int id, char *servicio, float precio, int bonificacion, int empresa) {
    struct TVenta venta;
    venta.ServicioID = id;
    venta.ServicioContratado = (char *)malloc(strlen(servicio) + 1);
    strcpy(venta.ServicioContratado, servicio);
    venta.Precio = precio;
    venta.Bonificacion = bonificacion;
    venta.Empresa = empresa;
    return venta;
}

struct TVenta * CrearVentas() {
    struct TVenta * Ventas = (struct TVenta *)malloc(sizeof(struct TVenta) * 100);

    Ventas[0] = CrearVenta(1, Servicios[0], 15000.0, 1, 1);
    Ventas[1] = CrearVenta(2, Servicios[1], 12000.0, 0, 1);
    Ventas[2] = CrearVenta(3, Servicios[2], 18000.0, 1, 1);
    Ventas[3] = CrearVenta(4, Servicios[0], 11000.0, 0, 1);
    Ventas[4] = CrearVenta(5, Servicios[1], 19000.0, 1, 1);
    Ventas[5] = CrearVenta(6, Servicios[2], 13000.0, 0, 1);
    Ventas[6] = CrearVenta(7, Servicios[0], 17000.0, 1, 1);
    Ventas[7] = CrearVenta(8, Servicios[1], 16000.0, 0, 1);
    Ventas[8] = CrearVenta(9, Servicios[2], 14000.0, 1, 3);
    Ventas[9] = CrearVenta(10, Servicios[0], 10000.0, 0, 1);
    Ventas[10] = CrearVenta(11, Servicios[1], 15000.0, 1, 2);
    Ventas[11] = CrearVenta(12, Servicios[2], 12000.0, 0, 1);
    Ventas[12] = CrearVenta(13, Servicios[0], 18000.0, 1, 1);
    Ventas[13] = CrearVenta(14, Servicios[1], 11000.0, 0, 1);
    Ventas[14] = CrearVenta(15, Servicios[2], 19000.0, 1, 1);
    Ventas[15] = CrearVenta(16, Servicios[0], 13000.0, 0, 1);
    Ventas[16] = CrearVenta(17, Servicios[1], 17000.0, 1, 2);
    Ventas[17] = CrearVenta(18, Servicios[2], 16000.0, 0, 3);
    Ventas[18] = CrearVenta(19, Servicios[0], 14000.0, 1, 1);
    Ventas[19] = CrearVenta(20, Servicios[1], 10000.0, 0, 2);
    Ventas[20] = CrearVenta(21, Servicios[2], 15000.0, 1, 1);
    Ventas[21] = CrearVenta(22, Servicios[0], 12000.0, 0, 1);
    Ventas[22] = CrearVenta(23, Servicios[1], 18000.0, 1, 1);
    Ventas[23] = CrearVenta(24, Servicios[2], 11000.0, 0, 1);
    Ventas[24] = CrearVenta(25, Servicios[0], 19000.0, 1, 1);
    Ventas[25] = CrearVenta(26, Servicios[1], 13000.0, 0, 2);
    Ventas[26] = CrearVenta(27, Servicios[2], 17000.0, 1, 3);
    Ventas[27] = CrearVenta(28, Servicios[0], 16000.0, 0, 1);
    Ventas[28] = CrearVenta(29, Servicios[1], 14000.0, 1, 2);
    Ventas[29] = CrearVenta(30, Servicios[2], 10000.0, 0, 1);
    Ventas[30] = CrearVenta(31, Servicios[0], 15000.0, 1, 1);
    Ventas[31] = CrearVenta(32, Servicios[1], 12000.0, 0, 1);
    Ventas[32] = CrearVenta(33, Servicios[2], 18000.0, 1, 1);
    Ventas[33] = CrearVenta(34, Servicios[0], 11000.0, 0, 1);
    Ventas[34] = CrearVenta(35, Servicios[1], 19000.0, 1, 1);
    Ventas[35] = CrearVenta(36, Servicios[2], 13000.0, 0, 1);
    Ventas[36] = CrearVenta(37, Servicios[0], 17000.0, 1, 1);
    Ventas[37] = CrearVenta(38, Servicios[1], 16000.0, 0, 2);
    Ventas[38] = CrearVenta(39, Servicios[2], 14000.0, 1, 3);
    Ventas[39] = CrearVenta(40, Servicios[0], 10000.0, 0, 1);
    Ventas[40] = CrearVenta(41, Servicios[1], 15000.0, 1, 2);
    Ventas[41] = CrearVenta(42, Servicios[2], 12000.0, 0, 3);
    Ventas[42] = CrearVenta(43, Servicios[0], 18000.0, 1, 1);
    Ventas[43] = CrearVenta(44, Servicios[1], 11000.0, 0, 2);
    Ventas[44] = CrearVenta(45, Servicios[2], 19000.0, 1, 3);
    Ventas[45] = CrearVenta(46, Servicios[0], 13000.0, 0, 1);
    Ventas[46] = CrearVenta(47, Servicios[1], 17000.0, 1, 2);
    Ventas[47] = CrearVenta(48, Servicios[2], 16000.0, 0, 3);
    Ventas[48] = CrearVenta(49, Servicios[0], 14000.0, 1, 1);
    Ventas[49] = CrearVenta(50, Servicios[1], 10000.0, 0, 2);
    Ventas[50] = CrearVenta(51, Servicios[2], 15000.0, 1, 3);
    Ventas[51] = CrearVenta(52, Servicios[0], 12000.0, 0, 1);
    Ventas[52] = CrearVenta(53, Servicios[1], 18000.0, 1, 2);
    Ventas[53] = CrearVenta(54, Servicios[2], 11000.0, 0, 3);
    Ventas[54] = CrearVenta(55, Servicios[0], 19000.0, 1, 1);
    Ventas[55] = CrearVenta(56, Servicios[1], 13000.0, 0, 2);
    Ventas[56] = CrearVenta(57, Servicios[2], 17000.0, 1, 3);
    Ventas[57] = CrearVenta(58, Servicios[0], 16000.0, 0, 1);
    Ventas[58] = CrearVenta(59, Servicios[1], 14000.0, 1, 1);
    Ventas[59] = CrearVenta(60, Servicios[2], 10000.0, 0, 1);
    Ventas[60] = CrearVenta(61, Servicios[0], 15000.0, 1, 1);
    Ventas[61] = CrearVenta(62, Servicios[1], 12000.0, 0, 1);
    Ventas[62] = CrearVenta(63, Servicios[2], 18000.0, 1, 3);
    Ventas[63] = CrearVenta(64, Servicios[0], 11000.0, 0, 1);
    Ventas[64] = CrearVenta(65, Servicios[1], 19000.0, 1, 2);
    Ventas[65] = CrearVenta(66, Servicios[2], 13000.0, 0, 3);
    Ventas[66] = CrearVenta(67, Servicios[0], 17000.0, 1, 1);
    Ventas[67] = CrearVenta(68, Servicios[1], 16000.0, 0, 1);
    Ventas[68] = CrearVenta(69, Servicios[2], 14000.0, 1, 1);
    Ventas[69] = CrearVenta(70, Servicios[0], 10000.0, 0, 1);
    Ventas[70] = CrearVenta(71, Servicios[1], 15000.0, 1, 2);
    Ventas[71] = CrearVenta(72, Servicios[2], 12000.0, 0, 3);
    Ventas[72] = CrearVenta(73, Servicios[0], 18000.0, 1, 1);
    Ventas[73] = CrearVenta(74, Servicios[1], 11000.0, 0, 2);
    Ventas[74] = CrearVenta(75, Servicios[2], 19000.0, 1, 3);
    Ventas[75] = CrearVenta(76, Servicios[0], 13000.0, 0, 1);
    Ventas[76] = CrearVenta(77, Servicios[1], 17000.0, 1, 2);
    Ventas[77] = CrearVenta(78, Servicios[2], 16000.0, 0, 3);
    Ventas[78] = CrearVenta(79, Servicios[0], 14000.0, 1, 1);
    Ventas[79] = CrearVenta(80, Servicios[1], 10000.0, 0, 1);
    Ventas[80] = CrearVenta(81, Servicios[2], 15000.0, 1, 1);
    Ventas[81] = CrearVenta(82, Servicios[0], 12000.0, 0, 1);
    Ventas[82] = CrearVenta(83, Servicios[1], 18000.0, 1, 1);
    Ventas[83] = CrearVenta(84, Servicios[2], 11000.0, 0, 1);
    Ventas[84] = CrearVenta(85, Servicios[0], 19000.0, 1, 1);
    Ventas[85] = CrearVenta(86, Servicios[1], 13000.0, 0, 2);
    Ventas[86] = CrearVenta(87, Servicios[2], 17000.0, 1, 1);
    Ventas[87] = CrearVenta(88, Servicios[0], 16000.0, 0, 1);
    Ventas[88] = CrearVenta(89, Servicios[1], 14000.0, 1, 1);
    Ventas[89] = CrearVenta(90, Servicios[2], 10000.0, 0, 1);
    Ventas[90] = CrearVenta(91, Servicios[0], 15000.0, 1, 1);
    Ventas[91] = CrearVenta(92, Servicios[1], 12000.0, 0, 1);
    Ventas[92] = CrearVenta(93, Servicios[2], 18000.0, 1, 1);
    Ventas[93] = CrearVenta(94, Servicios[0], 11000.0, 0, 1);
    Ventas[94] = CrearVenta(95, Servicios[1], 19000.0, 1, 1);
    Ventas[95] = CrearVenta(96, Servicios[2], 13000.0, 0, 1);
    Ventas[96] = CrearVenta(97, Servicios[0], 17000.0, 1, 1);
    Ventas[97] = CrearVenta(98, Servicios[1], 16000.0, 0, 1);
    Ventas[98] = CrearVenta(99, Servicios[2], 14000.0, 1, 1);
    Ventas[99] = CrearVenta(100, Servicios[0], 10000.0, 0, 1);

    return Ventas;
}

NodoTVenta *crearListaVacia();
void crearLista(NodoTVenta **listaVentas, TVenta * Ventas);
void mostrarLista(NodoTVenta *listaVentas);
void eliminarProductos(NodoTVenta **listaVentas);

//NodoTVenta *crearVenta();

int main() {
    struct TVenta * Ventas = CrearVentas(); // <-- Preguntar si es el ArregloDeVentas del punto 1.
    NodoTVenta *listaVentas;
    listaVentas = crearListaVacia();
    crearLista(&listaVentas, Ventas); // Punto 1, consultar si esta bien
    mostrarLista(listaVentas); //Punto 2 - Mostrar lista, consultar si esta bien
    eliminarProductos(&listaVentas);
    mostrarLista(listaVentas);

    // for (int i = 0; i < 100; i++) {
    //     printf("Venta ID: %d\n", Ventas[i].ServicioID);
    //     printf("Servicio Contratado: %s\n", Ventas[i].ServicioContratado);
    //     printf("Precio: %.2f\n", Ventas[i].Precio);
    //     printf("Bonificacion: %s\n", Ventas[i].Bonificacion == 0 ? "1" : "0");
    //     printf("Empresa: %d\n\n", Ventas[i].Empresa);
    // }

    return 0;
}

NodoTVenta *crearListaVacia(){
    return NULL;
}

void crearLista(NodoTVenta **listaVentas, TVenta * Venta){
    // NodoTVenta *aux;
    // //aux = crearListaVacia; // *inicio;
    // aux = (NodoTVenta *)malloc(sizeof(NodoTVenta) * 100);
    // *listaVentas = aux;
    // //inicio = aux;
    // for (int i = 0; i < 100; i++)
    // {
    //     aux->venta.Bonificacion = Venta[i].Bonificacion;
    //     aux->venta.Empresa = Venta[i].Empresa;
    //     aux->venta.Precio = Venta[i].Precio;
    //     tamanio = strlen(Venta[i].ServicioContratado);
    //     aux->venta.ServicioContratado = (char *)malloc(sizeof(char) * tamanio + 1);
    //     strcpy(aux->venta.ServicioContratado, Venta[i].ServicioContratado);
    //     aux->venta.ServicioID = Venta[i].ServicioID;
    //     aux = aux->Siguiene;
    // }
    //aux->Siguiene = NULL;
    //nuevaVenta = crearListaVacia();
    int tamanio;
    for (int i = 0; i < 100; i++)
    {
        NodoTVenta *nuevaVenta;
        nuevaVenta = (NodoTVenta *)malloc(sizeof(NodoTVenta));
        if (*listaVentas == NULL)
        {
            //tamanio = strlen(Venta[i].ServicioContratado) + 1;
            //nuevaVenta->venta.ServicioContratado = (char *)malloc(sizeof(char) * tamanio);
            nuevaVenta->venta = CrearVenta(Venta[i].ServicioID, Venta[i].ServicioContratado, Venta[i].Precio, Venta[i].Bonificacion, Venta[i].Empresa);
            nuevaVenta->Siguiene = NULL;
            *listaVentas = nuevaVenta;
        }else
        {
            NodoTVenta *aux = *listaVentas;
            while (aux->Siguiene)
            {
                aux = aux->Siguiene;
            }
            //tamanio = strlen(Venta[i].ServicioContratado) + 1;
            //nuevaVenta->venta.ServicioContratado = (char *)malloc(sizeof(char) * tamanio);
            nuevaVenta->venta = CrearVenta(Venta[i].ServicioID, Venta[i].ServicioContratado, Venta[i].Precio, Venta[i].Bonificacion, Venta[i].Empresa);
            nuevaVenta->Siguiene = NULL;
            aux->Siguiene = nuevaVenta;
        }
        
    }
    
}

void mostrarLista(NodoTVenta *listaVentas){
    NodoTVenta *aux = listaVentas;
    int contador = 1;
    while (aux->Siguiene)
    {
        printf("%d: %d - %s - %.2f - %d - %d\n", contador, aux->venta.ServicioID, aux->venta.ServicioContratado, aux->venta.Precio, aux->venta.Bonificacion, aux->venta.Empresa);
        aux = aux->Siguiene;
        contador++;
    }
    printf("%d: %d - %s - %.2f - %d - %d", contador, aux->venta.ServicioID, aux->venta.ServicioContratado, aux->venta.Precio, aux->venta.Bonificacion, aux->venta.Empresa);
}

void eliminarProductos(NodoTVenta **listaVentas){
    NodoTVenta *aux, *nuevaLista, *aux2;
    nuevaLista = crearListaVacia();
    int contador = 1;
    //aux = crearListaVacia();
    //aux2 = crearListaVacia();
    aux = *listaVentas;
    //aux2->Siguiene = *listaVentas;
    while (aux->Siguiene)
    {
        
        aux = aux->Siguiene;
        //printf("%d\n",contador);
        //contador++;
    }
    // if (aux->venta.Empresa != 1)
    // {
    //     aux2->Siguiene = NULL;
    // }
    
}