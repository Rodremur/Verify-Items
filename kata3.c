/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Kata 3
 * Fecha: 14-09-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
int verifyItems(int origItems_size, char** origItems, int origPrices_size, float* origPrices, int items_size, char** items, int prices_size, float* prices) {
    int i, j, count;
    count = 0;
    for (i = 0; i < items_size; i++) {
        for (j = 0; j < origItems_size; j++) {
            if (strcmp(items[i], origItems[j]) == 0) {
                if (origPrices[j] != prices[i]) count +=1;
                break;
            }
        }
    }
    return count;
}
