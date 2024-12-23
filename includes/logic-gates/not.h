#ifndef MICROPROCESSOR_NOT_H
    #define MICROPROCESSOR_NOT_H
    #include <component.h>

#define init_not init_component(1, 1, sizeof(component_t), NULL, &run_not, NULL)

void run_not(const component_t *component);

#endif //MICROPROCESSOR_NOT_H
