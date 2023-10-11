#ifndef __EBPF_READ_H__
#define __EBPF_READ_H__

typedef struct read_data_key {
    	/* node id */
    	uint64_t nodeid;
} read_data_key_t;

typedef struct read_data_value {
	/* Data Size */
	uint32_t size;
	/* Disk Block Data */
	unsigned char data[512];
} read_data_val_t;

/* number of entries in hash lookup table */
#undef MAX_ENTRIES
#define MAX_ENTRIES (2 << 16)

#endif /* __EBPF_READ_H__ */
