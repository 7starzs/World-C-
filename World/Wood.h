#ifndef WOOD_H_INCLUDED
#define WOOD_H_INCLUDED

typedef struct {
    char name_of_Material;
    int weight_of_Material;
    char material_symbol;
}Wood;

Wood* create_Wood(char name_of_Material, int weight_of_Material, char material_symbol);
void remove_Wood(Wood* wood);
void print_Wood(Wood* wood);

#endif // WOOD_H_INCLUDED
