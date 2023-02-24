#ifndef MATERIAL_H
#define MATERIAL_H

typedef struct {
    char name_of_Material;
    int weight_of_Material;
    char material_symbol;
}MaterialOperations;

MaterialOperations* checkMaterial(char name_of_Material, int weight_of_Material, char material_symbol);
void remove_Material(MaterialOperations* operations);
void print_Material(MaterialOperations* operations);


#endif // MATERIAL_H_INCLUDED
