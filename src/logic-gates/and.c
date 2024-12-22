#include <logic-gates/component.h>

void run_and(const component_t *component)
{
    component->output[0] = component->input[0] && component->input[1];
}
