int hash_par(unsigned char *buffer, u64 len);
u16 hash_xorpair(const u8 *b, u64 len);
u8  hash_xor(const u8 *b, u64 len);
u8  hash_mod255(const u8 *b, u64 len);
u32 hash_wrt54gv5v6(const u8 *pStart, u64 len);
u16 hash_bootp(const u8 *data, u64 len);
u8  hash_hamdist(const u8 *buf, u64 len);
float hash_entropy(const u8 *data, u64 size);
int hash_pcprint(unsigned char *buffer, u64 len);
float get_px(u8 x, u8 const *data, u64 size);
u16 crc16(u16 crc, const u8 *buffer, u64 len);
void mdfour(u8 *out, const u8 *in, u64 n);
u32 crc32(u8 *buf, u64 len);

u64 r_hash_name_to_bits(const char *name);
//extern u16 const crc16_table[256];
