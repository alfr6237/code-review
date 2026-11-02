#include <stdio.h>
#include "business_logic/webstore_backend.h"
#include "business_logic/webstore_types.h"
#include "user_interface/ui.h"

// FIXME: main borde kanske vara i en fil som bara heter main.c
// så låter man hela den här modulen med ui grejer vara separat?
int main(void)
{
    warehouse_t *warehouse = warehouse_create();
    // TODO: skapa några varor till databasen
    // event_loop(warehouse);
    warehouse_list_merch(warehouse);
    puts("Program körs");
    warehouse_destroy(warehouse);
    
    return 0; 
}