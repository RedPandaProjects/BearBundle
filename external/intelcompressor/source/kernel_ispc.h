
#pragma once
#include "ispc_struct.h"


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////

    extern void CompressBlocksBC1_ispc(struct rgba_surface * src, uint8 * dst);
    extern void CompressBlocksBC3_ispc(struct rgba_surface * src, uint8 * dst);
    extern void CompressBlocksBC6H_ispc(struct rgba_surface * src, uint8 * dst, struct bc6h_enc_settings * settings);
    extern void CompressBlocksBC7_ispc(struct rgba_surface * src, uint8 * dst, struct bc7_enc_settings * settings);
    extern void CompressBlocksETC1_ispc(struct rgba_surface * src, uint8 * dst, struct etc_enc_settings * settings);


