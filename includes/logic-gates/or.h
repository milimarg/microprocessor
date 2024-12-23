#ifndef MICROPROCESSOR_OR_H
    #define MICROPROCESSOR_OR_H
    #include <component.h>

#define init_or init_component(2, 1, sizeof(component_t), NULL, &run_or, NULL)

void run_or(const component_t *component);

#endif //MICROPROCESSOR_OR_H
