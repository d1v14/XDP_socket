set(BPF_OBJECT_FILE ${BINARY_DIR}/xdp_kernel_program.o)
set(BPF_SOURCE_FILE ${CMAKE_CURRENT_SOURCE_DIR}/xdp_kernel_program.c)

add_custom_command(
        OUTPUT ${BPF_OBJECT_FILE}
        COMMAND clang -O2 -target bpf -c ${BPF_SOURCE_FILE} -o ${BPF_OBJECT_FILE}
        DEPENDS ${BPF_SOURCE_FILE}
        COMMENT "Building XDP kernel program ${BPF_OBJECT_FILE}..."
)

add_custom_target(bpf_kernel_program ALL DEPENDS ${BPF_OBJECT_FILE})