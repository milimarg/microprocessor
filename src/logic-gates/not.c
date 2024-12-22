#include <component.h>

void run_not(const component_t *component)
{
    component->output[0] = !component->input[0];
}
