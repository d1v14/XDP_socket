//
// Created by dmitr on 16.03.2026.
//

#include <linux/bpf.h>
#include <bpf/bpf_helpers.h>

SEC("xdp")
int xdp_test_function(struct xdp_md *context){
    return XDP_PASS;
}

char _license[] SEC("license") = "GPL";