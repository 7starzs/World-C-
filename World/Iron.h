#ifndef IRON_H_INCLUDED
#define IRON_H_INCLUDED

typedef struct {
    char name_of_Material;
    int weight_of_Material;
    char material_symbol;
}Iron;

Iron* create_Iron(char name_of_Material, int weight_of_Material, char material_symbol);
void remove_Iron(Iron* iron);
void print_Iron(Iron* iron);


#endif
