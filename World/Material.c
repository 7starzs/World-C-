#include <stdio.h>
#include <stdlib.h>
#include "Material.h"

MaterialOperations* checkMaterial(char name_of_Material, int weight_of_Material, char material_symbol);
{
    MaterialOperations* materialOperation = (MaterialOperations*) malloc(sizeof(materialOperation));
    materialOperation->name_of_Material = name_of_Material;
    materialOperation->weight_of_Material = weight_of_Material;
    materialOperation->material_symbol = material_symbol;
    return materialOperation;
}
void remove_Material(MaterialOperations* materialOperation) {
  free(materialOperation);
}

void print_Material(MaterialOperations* operations) {
  printf("The material is (material_symbol=%c, weight_of_Material=%d, name_of_Material=%c)\n", operations->name_of_Material, operations->weight_of_Material, operations->material_symbol);
}
