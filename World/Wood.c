#include <stdio.h>
#include <stdlib.h>
#include "Wood.h"


Wood* create_Wood(char name_of_Material, int weight_of_Material, char material_symbol);
{
    Wood* wood = (Wood*) malloc(sizeof(Wood));
    wood->name_of_Material = name_of_Material;
    wood->weight_of_Material = weight_of_Material;
    wood->material_symbol = material_symbol;
    return wood;
}
void remove_Wood(Wood* wood)
{
    free(wood);
}
void print_Wood(Wood* wood)
{
    printf("The material is (name_of_Material=%c, material_symbol=%c, weight_of_Material=%d )\n", iron->name_of_Material, iron->weight_of_Material, iron->material_symbol);
}
