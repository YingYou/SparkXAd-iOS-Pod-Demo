#ifndef rc_h
#define rc_h
#ifdef __cplusplus
extern "C"{
#endif
    void rc4_init_walk(unsigned char*s, unsigned char*key, unsigned long Len);
    void rc4_crypt_walk(unsigned char*s, unsigned char*Data, unsigned long Len);
#ifdef __cplusplus
}
#endif
#endif 
