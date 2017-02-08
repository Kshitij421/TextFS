#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "simdisk.h"
int dev_open(const char * path);
int read_block (int block_num, void * block);
int write_block (int block_num, void * block);
int read_inode (int inum, void * inode);
int write_inode (int inum, void * inode);
int get_block();
int get_inode();