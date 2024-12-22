#ifndef MICROPROCESSOR_COMPONENT_H
    #define MICROPROCESSOR_COMPONENT_H
    #include <stdbool.h>

typedef struct component_s component_t;

struct component_s {
    int input_number;
    int output_number;
    bool *input;
    bool *output;
    void (*run)(const component_t *component);
};

component_t *init_component(int input_number,
                            int output_number,
                            void (*run)(const component_t *component));
void delete_component(component_t *component);
void dump_component(const component_t *component);

#endif //MICROPROCESSOR_COMPONENT_H
