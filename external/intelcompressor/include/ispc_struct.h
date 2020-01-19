#pragma once

#include "BearCore.hpp"
struct rgba_surface {
    uint8 * ptr;
    int32 width;
    int32 height;
    int32 stride;
};
struct bc6h_enc_settings {
    bool slow_mode;
    bool fast_mode;
    int32 refineIterations_1p;
    int32 refineIterations_2p;
    int32 fastSkipTreshold;
};
struct bc7_enc_settings {
    bool mode_selection[4];
    int32 refineIterations[8];
    bool skip_mode2;
    int32 fastSkipTreshold_mode1;
    int32 fastSkipTreshold_mode3;
    int32 fastSkipTreshold_mode7;
    int32 mode45_channel0;
    int32 refineIterations_channel;
    int32 channels;
};
struct etc_enc_settings {
    int32 fastSkipTreshold;
};

struct astc_enc_settings
{
    int block_width;
    int block_height;
    int channels;

    int fastSkipTreshold;
    int refineIterations;
};
struct astc_enc_context {
    int32 width;
    int32 height;
    int32 channels;
    bool dual_plane;
    int32 partitions;
    int32 color_endpoint_pairs;
};



struct astc_block {
    int32 width;
    int32 height;
    bool dual_plane;
    int32 weight_range;
    uint8 weights[64];
    int32 color_component_selector;
    int32 partitions;
    int32 partition_id;
    int32 color_endpoint_pairs;
    int32 channels;
    int32 color_endpoint_modes[4];
    int32 endpoint_range;
    uint8 endpoints[18];
};


struct astc_enc_state
{
    float pixels[256];
    float scaled_pixels[256];
    uint32 data[4];

    // settings
     int block_width;
     int block_height;
     int pitch;

     int refineIterations;
};
