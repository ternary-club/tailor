typedef enum {
    NOOP = 0,
    COMP,
    JUMP,
    JMPG,
    JMPL,
    JMPGE,
    JMPLE,
    JMPE,
    JMPN,
    STORE,
    LOAD,
    MATH, 
    CALL,
    HALT,
} INSTRUCTION;