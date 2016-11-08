/* HEADER */


typedef struct header_posix_ustar {
char name[100]; // ca
char mode[8];
char uid[8];
char gid[8];
char size[12];
char mtime[12];
char checksum[8];
char typeflag[1];
char linkname[100];
char magic[6];
char version[2];
char uname[32];
char gname[32];
char devmajor[8];
char devminor[8];
char prefix[155]; // ca
char pad[12];
} header_t;

typedef struct pile_header {
struct header_posix_ustar* header;
int pos;
int size;
char path[257];
struct pile_header* next;
} pile_h;
