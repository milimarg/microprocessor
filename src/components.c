#include <microprocessor.h>

void init_component(component_t *component,
                    int input_number,
                    int output_number,
                    void (*run)(const component_t *component))
{
    component->input_number = input_number;
    component->output_number = output_number;
    component->run = run;
    component->input = malloc(sizeof(bool) * component->input_number);
    component->output = malloc(sizeof(bool) * component->output_number);

    for (int i = 0; i < input_number; ++i)
        component->input[i] = false;
    for (int i = 0; i < output_number; ++i)
        component->output[i] = false;
}

void delete_component(component_t *component)
{
    free(component->input);
    free(component->output);
}
