#ifndef MICROPROCESSOR_NOT_H
    #define MICROPROCESSOR_NOT_H
    #include <component.h>

#define init_not init_component(1, 1, &run_not)

void run_not(const component_t *component);

#endif //MICROPROCESSOR_NOT_H