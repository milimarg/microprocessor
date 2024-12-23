#ifndef MICROPROCESSOR_AND_H
    #define MICROPROCESSOR_AND_H
    #include <component.h>

#define init_and init_component(2, 1, sizeof(component_t), NULL, &run_and, NULL)

void run_and(const component_t *component);

#endif //MICROPROCESSOR_AND_H
