// asm_overview.cpp
// processor: x86
void __declspec(naked) main()
{
    // Naked functions must provide their own prolog...
    __asm {
        push ebp
        mov ebp, esp
        sub esp, __LOCAL_SIZE
    }

    // ... and epilog
    __asm {
        pop ebp
        ret
    }
}

// Source: https://docs.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-2010/5f7adz6y(v=vs.100)
// Reference: https://stackoverflow.com/a/4548792/