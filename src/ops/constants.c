#include "ops/constants.h"
#include "ops/op.h"

#include "ii.h"

const tele_op_t op_WW_PRESET =
    MAKE_CONSTANT_OP(WW.PRESET, WW_PRESET, "WW.PRESET");
const tele_op_t op_WW_POS = MAKE_CONSTANT_OP(WW.POS, WW_POS, "WW.POS");
const tele_op_t op_WW_SYNC = MAKE_CONSTANT_OP(WW.SYNC, WW_SYNC, "WW.SYNC");
const tele_op_t op_WW_START = MAKE_CONSTANT_OP(WW.START, WW_START, "WW.START");
const tele_op_t op_WW_END = MAKE_CONSTANT_OP(WW.END, WW_END, "WW.END");
const tele_op_t op_WW_PMODE = MAKE_CONSTANT_OP(WW.PMODE, WW_PMODE, "WW.PMODE");
const tele_op_t op_WW_PATTERN =
    MAKE_CONSTANT_OP(WW.PATTERN, WW_PATTERN, "WW.PATTERN");
const tele_op_t op_WW_QPATTERN =
    MAKE_CONSTANT_OP(WW.QPATTERN, WW_QPATTERN, "WW.QPATTERN");
const tele_op_t op_WW_MUTE1 = MAKE_CONSTANT_OP(WW.MUTE1, WW_MUTE1, "WW.MUTE1");
const tele_op_t op_WW_MUTE2 = MAKE_CONSTANT_OP(WW.MUTE2, WW_MUTE2, "WW.MUTE2");
const tele_op_t op_WW_MUTE3 = MAKE_CONSTANT_OP(WW.MUTE3, WW_MUTE3, "WW.MUTE3");
const tele_op_t op_WW_MUTE4 = MAKE_CONSTANT_OP(WW.MUTE4, WW_MUTE4, "WW.MUTE4");
const tele_op_t op_WW_MUTEA = MAKE_CONSTANT_OP(WW.MUTEA, WW_MUTEA, "WW.MUTEA");
const tele_op_t op_WW_MUTEB = MAKE_CONSTANT_OP(WW.MUTEB, WW_MUTEB, "WW.MUTEB");

const tele_op_t op_MP_PRESET =
    MAKE_CONSTANT_OP(MP.PRESET, MP_PRESET, "MP.PRESET");
const tele_op_t op_MP_RESET = MAKE_CONSTANT_OP(MP.RESET, MP_RESET, "MP.RESET");
const tele_op_t op_MP_SYNC = MAKE_CONSTANT_OP(MP.SYNC, MP_SYNC, "MP.SYNC");
const tele_op_t op_MP_MUTE = MAKE_CONSTANT_OP(MP.MUTE, MP_MUTE, "MP.MUTE");
const tele_op_t op_MP_UNMUTE =
    MAKE_CONSTANT_OP(MP.UNMUTE, MP_UNMUTE, "MP.UNMUTE");
const tele_op_t op_MP_FREEZE =
    MAKE_CONSTANT_OP(MP.FREEZE, MP_FREEZE, "MP.FREEZE");
const tele_op_t op_MP_UNFREEZE =
    MAKE_CONSTANT_OP(MP.UNFREEZE, MP_UNFREEZE, "MP.UNFREEZE");
const tele_op_t op_MP_STOP = MAKE_CONSTANT_OP(MP.STOP, MP_STOP, "MP.STOP");

const tele_op_t op_ES_PRESET =
    MAKE_CONSTANT_OP(ES.PRESET, ES_PRESET, "ES.PRESET");
const tele_op_t op_ES_MODE = MAKE_CONSTANT_OP(ES.MODE, ES_MODE, "ES.MODE");
const tele_op_t op_ES_CLOCK = MAKE_CONSTANT_OP(ES.CLOCK, ES_CLOCK, "ES.CLOCK");
const tele_op_t op_ES_RESET = MAKE_CONSTANT_OP(ES.RESET, ES_RESET, "ES.RESET");
const tele_op_t op_ES_PATTERN =
    MAKE_CONSTANT_OP(ES.PATTERN, ES_PATTERN, "ES.PATTERN");
const tele_op_t op_ES_TRANS = MAKE_CONSTANT_OP(ES.TRANS, ES_TRANS, "ES.TRANS");
const tele_op_t op_ES_STOP = MAKE_CONSTANT_OP(ES.STOP, ES_STOP, "ES.STOP");
const tele_op_t op_ES_TRIPLE =
    MAKE_CONSTANT_OP(ES.TRIPLE, ES_TRIPLE, "ES.TRIPLE");
const tele_op_t op_ES_MAGIC = MAKE_CONSTANT_OP(ES.MAGIC, ES_MAGIC, "ES.MAGIC");

const tele_op_t op_ORCA_TRK = MAKE_CONSTANT_OP(OR.TRK, ORCA_TRACK, "OR.TRK");
const tele_op_t op_ORCA_CLK = MAKE_CONSTANT_OP(OR.CLK, ORCA_CLOCK, "OR.CLK");
const tele_op_t op_ORCA_DIV = MAKE_CONSTANT_OP(OR.DIV, ORCA_DIVISOR, "OR.DIV");
const tele_op_t op_ORCA_PHASE =
    MAKE_CONSTANT_OP(OR.PHASE, ORCA_PHASE, "OR.PHASE");
const tele_op_t op_ORCA_RST = MAKE_CONSTANT_OP(OR.RST, ORCA_RESET, "OR.RST");
const tele_op_t op_ORCA_WGT = MAKE_CONSTANT_OP(OR.WGT, ORCA_WEIGHT, "OR.WGT");
const tele_op_t op_ORCA_MUTE = MAKE_CONSTANT_OP(OR.MUTE, ORCA_MUTE, "OR.MUTE");
const tele_op_t op_ORCA_SCALE =
    MAKE_CONSTANT_OP(OR.SCALE, ORCA_SCALE, "OR.SCALE");
const tele_op_t op_ORCA_BANK = MAKE_CONSTANT_OP(OR.BANK, ORCA_BANK, "OR.BANK");
const tele_op_t op_ORCA_PRESET =
    MAKE_CONSTANT_OP(OR.PRESET, ORCA_PRESET, "OR.PRESET");
const tele_op_t op_ORCA_RELOAD =
    MAKE_CONSTANT_OP(OR.RELOAD, ORCA_RELOAD, "OR.RELOAD");
const tele_op_t op_ORCA_ROTS =
    MAKE_CONSTANT_OP(OR.ROTS, ORCA_ROTATES, "OR.ROTS");
const tele_op_t op_ORCA_ROTW =
    MAKE_CONSTANT_OP(OR.ROTW, ORCA_ROTATEW, "OR.ROTW");
const tele_op_t op_ORCA_GRST =
    MAKE_CONSTANT_OP(OR.GRST, ORCA_GRESET, "OR.GRST");
const tele_op_t op_ORCA_CVA = MAKE_CONSTANT_OP(OR.CVA, ORCA_CVA, "OR.CVA");
const tele_op_t op_ORCA_CVB = MAKE_CONSTANT_OP(OR.CVB, ORCA_CVB, "OR.CVB");
