#include <stdint.h>
#define SIZE 4094

#define INDIRECT_SCREEN    0x000001000000000000
#define ADDRESS_SCREEN     0x000000111111111111
#define INSTRUCTION_SCREEN 0x111110000000000000

typedef uint32_t Word;
typedef Word MemoryUnit[SIZE];
typedef struct Memory {
    Word accumulator;
    Word pc;
    MemoryUnit memory_units[8];
} Memory;

typedef *Memory Memory_Pointer;

void execute_instruction(Memory_Pointer) {
}
