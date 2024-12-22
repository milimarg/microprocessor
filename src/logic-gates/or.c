#include <component.h>

void run_or(const component_t *component)
{
    component->output[0] = component->input[0] || component->input[1];
}
