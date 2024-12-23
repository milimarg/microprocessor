#include <microprocessor.h>

int main(void)
{
    component_t *and = init_and;
    component_t *or = init_or;
    component_t *not = init_not;

    and->input[0] = true;
    and->input[1] = false;
    and->compute(and);
    dump_component(and);

    or->input[0] = true;
    or->input[1] = false;
    or->compute(or);
    dump_component(or);

    not->input[0] = true;
    not->compute(not);
    dump_component(not);

    delete_component(and);
    delete_component(or);
    delete_component(not);
    return 0;
}
