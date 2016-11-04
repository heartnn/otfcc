#ifndef CARYLL_TABLE_OTL_GPOS_CURSIVE_H
#define CARYLL_TABLE_OTL_GPOS_CURSIVE_H

#include "common.h"

subtable_gpos_cursive *otl_new_gpos_cursive();
void otl_delete_gpos_cursive(otl_Subtable *subtable);
otl_Subtable *otl_read_gpos_cursive(const font_file_pointer data, uint32_t tableLength, uint32_t subtableOffset,
                                    const otfcc_Options *options);
json_value *otl_gpos_dump_cursive(const otl_Subtable *_subtable);
otl_Subtable *otl_gpos_parse_cursive(const json_value *_subtable, const otfcc_Options *options);
caryll_Buffer *otfcc_build_gpos_cursive(const otl_Subtable *_subtable);

#endif
