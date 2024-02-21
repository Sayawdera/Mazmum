#ifndef MAZMUM_MAZMUMHTTP_H
#define MAZMUM_MAZMUMHTTP_H


#include "../AlGhadab/MazmumMod.h"

#define MAZMUM_HEADER_TYPE_USER_HEADER 'h'
#define MAZMUM_HEADER_TYPE_USER_HEADER_REPL 'H'
#define MAZMUM_HEADER_TYPE_DEFAULT 'D'
#define MAZMUM_HEADER_TYPE_DEFAULT_REPL 'd

typedef struct MAZMUM_NODE_HEADER mazmum_node_header_t, *mazmum_ptr_node_header;

extern char *mazmum_webtarget;
extern char *mazmum_slash;
extern char *mazmum_optional1;

extern int32_t parse_options(char *miscptr, mazmum_ptr_node_header *ptr_head);
extern int32_t add_header(mazmum_ptr_node_header *ptr_head, char *header, char *value, char type);

extern char *stringify_headers(mazmum_ptr_node_header *ptr_head);

#endif MAZMUM_MAZMUMHTTP_H
