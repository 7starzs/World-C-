#include <stdio.h>
#include <stdlib.h>
#include "Iron.h"


Iron* create_Iron(char name_of_Material, int weight_of_Material, char material_symbol);
{
    Iron* iron = (Iron*) malloc(sizeof(Iron));
    iron->name_of_Material = name_of_Material;
    iron->weight_of_Material = weight_of_Material;
    iron->material_symbol = material_symbol;
    return iron;
}
void remove_Iron(Iron* iron)
{
    free(iron);
}
void print_Iron(Iron* iron)
{
    printf("The material is (name_of_Material=%c, material_symbol=%c, weight_of_Material=%d )\n", iron->name_of_Material, iron->weight_of_Material, iron->material_symbol);
}
