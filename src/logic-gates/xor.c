#include <component.h>
#include <logic-gates/xor.h>
#include <logic-gates/and.h>
#include <logic-gates/or.h>
#include <logic-gates/not.h>
#include <stdio.h>

void init_custom_xor(component_t *component)
{
    xor_t *xor = (xor_t *)component;

    for (unsigned long i = 0; i < ARRAY_SIZE(xor->and); ++i)
        xor->and[i] = init_and;
    for (unsigned long i = 0; i < ARRAY_SIZE(xor->not); ++i)
        xor->not[i] = init_not;
    xor->or = init_or;
}

void run_xor(const component_t *component)
{
    const xor_t *xor = (const xor_t *)component;

    xor->or->input[0] = 1;
    xor->or->input[1] = 1;
    xor->or->compute(xor->or);
    component->output[0] = xor->or->output[0];
}

void delete_xor(component_t *component)
{
    xor_t *xor = (xor_t *)component;

    for (unsigned long i = 0; i < ARRAY_SIZE(xor->and); ++i)
        delete_component(xor->and[i]);
    for (unsigned long i = 0; i < ARRAY_SIZE(xor->not); ++i)
        delete_component(xor->not[i]);
    delete_component(xor->or);
}
