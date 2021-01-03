#ifndef NOVINTOOLS_H
#define NOVINTOOLS_H

int _cnv_hex_to_decimal_serial (unsigned char *dest, const wchar_t *src);
inline int _check_dev_connected (const unsigned char *serial);                        
inline int _check_dev_selected (const unsigned char *serial);                         
int _encrypt_packet (unsigned char *buff, const unsigned char *serial);               
int _decrypt_packet (unsigned char *buff, const unsigned char *serial);               
int _send_packet (unsigned char *result, const size_t result_reportid_index,
                  unsigned char *packet, const size_t packet_reportid_index);

int _get_public_key (unsigned char *public, unsigned char *exponent);
int _get_private_key (unsigned char *private, unsigned char *exponent, const unsigned char *pwd);
int _get_dev_status_internal (void);

#endif  /* NOVINTOOLS_H */
