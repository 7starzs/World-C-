#include <stdio.h>
#include <stdlib.h>
#include "Material.h"
#include "Iron.h"
#include "Wood.h"
int main()
{
   /* MaterialOperations* materialOperation = CheckMaterial("Iron",1000,"ir");
    print_Material(materialOperation);
    remove_Material(materialOperation);*/
    Iron* iron = create_Iron('Iron',56,'ir');
    print_Iron(iron);
    remove_Iron(iron);
    Wood* wood = create_Wood('Wood',23,'wo');
    print_Wood(wood);
    remove_Wood(wood);

    return 0;
}
