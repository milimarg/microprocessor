#ifndef MICROPROCESSOR_XOR_H
    #define MICROPROCESSOR_XOR_H
    #include <component.h>

typedef struct xor_s xor_t;

struct xor_s {
    /* DEFAULT VARIABLES */
    int input_number;
    int output_number;
    bool *input;
    bool *output;
    void (*compute)(const component_t *component);
    void (*delete)(component_t *component);
    /* ----- */
    component_t *not[2];
    component_t *and[2];
    component_t *or;
};

#define init_xor init_component(2, 1, sizeof(xor_t), &init_custom_xor, &run_xor, &delete_xor);

void init_custom_xor(component_t *component);
void run_xor(const component_t *component);
void delete_xor(component_t *component);

#endif //MICROPROCESSOR_XOR_H
