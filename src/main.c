#include <microprocessor.h>

int main(void)
{
    component_t *xor = init_xor;

    xor->input[0] = true;
    xor->input[1] = true;
    xor->compute(xor);
    dump_component(xor);

    delete_component(xor);
    return 0;
}
