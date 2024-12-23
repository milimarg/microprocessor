#include <microprocessor.h>

component_t *init_component(int input_number,
                            int output_number,
                            void (*run)(const component_t *component))
{
    component_t *component = malloc(sizeof(component_t));

    component->input_number = input_number;
    component->output_number = output_number;
    component->compute = run;
    component->input = malloc(sizeof(bool) * component->input_number);
    component->output = malloc(sizeof(bool) * component->output_number);

    for (int i = 0; i < input_number; ++i)
        component->input[i] = false;
    for (int i = 0; i < output_number; ++i)
        component->output[i] = false;
    return component;
}

void delete_component(component_t *component)
{
    free(component->input);
    free(component->output);
    free(component);
}

void dump_component(const component_t *component)
{
    if (component->output_number == 1) {
        printf("Output = %d\n", component->output[0]);
        return;
    }
    for (int i = 0; i < component->output_number; ++i)
        printf("Output %d = %d\n", i, component->output[i]);
}
