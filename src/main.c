#include <microprocessor.h>

int main(void)
{
    component_t and;

    init_component(&and, 2, 1, &run_and);

    and.input[0] = true;
    and.input[1] = true;

    and.run(&and);

    printf("%d\n", and.output[0]);

    delete_component(&and);

    return 0;
}
