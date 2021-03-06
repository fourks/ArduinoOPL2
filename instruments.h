/**
 * This file contains instrument defenitions from the Adlib standard instrument library for use with the OPL2 Audio
 * Board library.
 *
 * Instrument definition is based on Adlib instrument bank format.
 *  0 - Drum channel
 *		Drum channels are predefined by the YM3812 and cannot be redefined. Regular instruments have their channel set
 *		to 0x00 and can be assigned to a channel by the setInstrument function.
 *
 *  1 - Channel c, operator 1, register 0x20
 *		Tremolo(1) | Vibrato(1) | Sustain(1) | KSR(1) | Frequency multiplier (4)
 *
 *  2 - Channel c, operator 1, register 0x40
 *		Key scale level(2) | Output level(6)
 *
 *  3 - Channel c, operator 1, register 0x60
 *		Attack(4) | Decay(4)
 *
 *  4 - Channel c, operator 1, register 0x80
 *		Sustain(4) | Release(4)
 *
 *  5 - Channel c, operator 1, register 0xE0
 *		Undefined(5) | Waveform(3)
 *
 *  6 - Channel c, register 0xC0
 *		Undefined(4) | Modulation feedback factor(3) | Synth type(1)
 *
 *  7 - Channel c, operator 2, register 0x20 
 *  8 - Channel c, operator 2, register 0x40
 *  9 - Channel c, operator 2, register 0x60
 * 10 - Channel c, operator 2, register 0x80
 * 11 - Channel c, operator 2, register 0xE0
 */

const unsigned char ACCORDN[12]  PROGMEM = { 0x00, 0x24, 0x4F, 0xF2, 0x0B, 0x00, 0x0E, 0x31, 0x00, 0x52, 0x0B, 0x00 };
const unsigned char BAGPIPE1[12] PROGMEM = { 0x00, 0x31, 0x43, 0x6E, 0x17, 0x01, 0x02, 0x22, 0x05, 0x8B, 0x0C, 0x02 };
const unsigned char BAGPIPE2[12] PROGMEM = { 0x00, 0x30, 0x00, 0xFF, 0xA0, 0x03, 0x00, 0xA3, 0x00, 0x65, 0x0B, 0x02 };
const unsigned char BANJO1[12]   PROGMEM = { 0x00, 0x31, 0x87, 0xA1, 0x11, 0x00, 0x08, 0x16, 0x80, 0x7D, 0x43, 0x00 };
const unsigned char BASS1[12]    PROGMEM = { 0x00, 0x01, 0x15, 0x25, 0x2F, 0x00, 0x0A, 0x21, 0x80, 0x65, 0x6C, 0x00 };
const unsigned char BASS2[12]    PROGMEM = { 0x00, 0x01, 0x1D, 0xF2, 0xEF, 0x00, 0x0A, 0x01, 0x00, 0xF5, 0x78, 0x00 };
const unsigned char BASSHARP[12] PROGMEM = { 0x00, 0xC0, 0x6D, 0xF9, 0x01, 0x01, 0x0E, 0x41, 0x00, 0xF2, 0x73, 0x00 };
const unsigned char BASSOON1[12] PROGMEM = { 0x00, 0x30, 0xC8, 0xD5, 0x19, 0x00, 0x0C, 0x71, 0x80, 0x61, 0x1B, 0x00 };
const unsigned char BASSTRLG[12] PROGMEM = { 0x00, 0xC1, 0x4F, 0xB1, 0x53, 0x03, 0x06, 0xE0, 0x00, 0x12, 0x74, 0x03 };
const unsigned char BDRUM1[12]   PROGMEM = { 0x06, 0x00, 0x0B, 0xA8, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char BELLONG[12]  PROGMEM = { 0x00, 0x64, 0xDB, 0xFF, 0x01, 0x00, 0x04, 0x3E, 0xC0, 0xF3, 0x62, 0x00 };
const unsigned char BELLS[12]    PROGMEM = { 0x00, 0x07, 0x4F, 0xF2, 0x60, 0x00, 0x08, 0x12, 0x00, 0xF2, 0x72, 0x00 };
const unsigned char BELSHORT[12] PROGMEM = { 0x00, 0x64, 0xDB, 0xFF, 0x01, 0x00, 0x04, 0x3E, 0xC0, 0xF5, 0xF3, 0x00 };
const unsigned char BNCEBASS[12] PROGMEM = { 0x00, 0x20, 0x4B, 0x7B, 0x04, 0x01, 0x0E, 0x21, 0x00, 0xF5, 0x72, 0x00 };
const unsigned char BRASS1[12]   PROGMEM = { 0x00, 0x21, 0x16, 0x71, 0xAE, 0x00, 0x0E, 0x21, 0x00, 0x81, 0x9E, 0x00 };
const unsigned char CBASSOON[12] PROGMEM = { 0x00, 0x30, 0xC5, 0x52, 0x11, 0x00, 0x00, 0x31, 0x80, 0x31, 0x2E, 0x00 };
const unsigned char CELESTA[12]  PROGMEM = { 0x00, 0x33, 0x87, 0x01, 0x10, 0x00, 0x08, 0x14, 0x80, 0x7D, 0x33, 0x00 };
const unsigned char CLAR1[12]    PROGMEM = { 0x00, 0x32, 0x16, 0x73, 0x24, 0x00, 0x0E, 0x21, 0x80, 0x75, 0x57, 0x00 };
const unsigned char CLAR2[12]    PROGMEM = { 0x00, 0x31, 0x1C, 0x41, 0x1B, 0x00, 0x0C, 0x60, 0x80, 0x42, 0x3B, 0x00 };
const unsigned char CLARINET[12] PROGMEM = { 0x00, 0x32, 0x9A, 0x51, 0x1B, 0x00, 0x0C, 0x61, 0x82, 0xA2, 0x3B, 0x00 };
const unsigned char CLAVECIN[12] PROGMEM = { 0x00, 0x11, 0x0D, 0xF2, 0x01, 0x00, 0x0A, 0x15, 0x0D, 0xF2, 0xB1, 0x00 };
const unsigned char CROMORNE[12] PROGMEM = { 0x00, 0x00, 0x02, 0xF0, 0xFF, 0x00, 0x06, 0x11, 0x80, 0xF0, 0xFF, 0x00 };
const unsigned char CYMBAL1[12]  PROGMEM = { 0x09, 0x01, 0x00, 0xF5, 0xB5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char ELCLAV1[12]  PROGMEM = { 0x00, 0x05, 0x8A, 0xF0, 0x7B, 0x00, 0x08, 0x01, 0x80, 0xF4, 0x7B, 0x00 };
const unsigned char ELCLAV2[12]  PROGMEM = { 0x00, 0x01, 0x49, 0xF1, 0x53, 0x01, 0x06, 0x11, 0x00, 0xF1, 0x74, 0x02 };
const unsigned char ELECFL[12]   PROGMEM = { 0x00, 0xE0, 0x6D, 0x57, 0x04, 0x01, 0x0E, 0x61, 0x00, 0x67, 0x7D, 0x00 };
const unsigned char ELECVIBE[12] PROGMEM = { 0x00, 0x13, 0x97, 0x9A, 0x12, 0x02, 0x0E, 0x91, 0x80, 0x9B, 0x11, 0x00 };
const unsigned char ELGUIT1[12]  PROGMEM = { 0x00, 0xF1, 0x01, 0x97, 0x17, 0x00, 0x08, 0x21, 0x0D, 0xF1, 0x18, 0x00 };
const unsigned char ELGUIT2[12]  PROGMEM = { 0x00, 0x13, 0x96, 0xFF, 0x21, 0x00, 0x0A, 0x11, 0x80, 0xFF, 0x03, 0x00 };
const unsigned char ELGUIT3[12]  PROGMEM = { 0x00, 0x07, 0x8F, 0x82, 0x7D, 0x00, 0x0C, 0x14, 0x80, 0x82, 0x7D, 0x00 };
const unsigned char ELGUIT4[12]  PROGMEM = { 0x00, 0x05, 0x8F, 0xDA, 0x15, 0x00, 0x0A, 0x01, 0x80, 0xF9, 0x14, 0x02 };
const unsigned char ELORGAN1[12] PROGMEM = { 0x00, 0xB2, 0xCD, 0x91, 0x2A, 0x02, 0x09, 0xB1, 0x80, 0x91, 0x2A, 0x01 };
const unsigned char ELPIANO1[12] PROGMEM = { 0x00, 0x01, 0x4F, 0xF1, 0x50, 0x00, 0x06, 0x01, 0x04, 0xD2, 0x7C, 0x00 };
const unsigned char ELPIANO2[12] PROGMEM = { 0x00, 0x02, 0x22, 0xF2, 0x13, 0x00, 0x0E, 0x02, 0x00, 0xF5, 0x43, 0x00 };
const unsigned char EPIANO1A[12] PROGMEM = { 0x00, 0x81, 0x63, 0xF3, 0x58, 0x00, 0x00, 0x01, 0x80, 0xF2, 0x58, 0x00 };
const unsigned char EPIANO1B[12] PROGMEM = { 0x00, 0x07, 0x1F, 0xF5, 0xFA, 0x00, 0x0E, 0x01, 0x57, 0xF5, 0xFA, 0x00 };
const unsigned char FLUTE[12]    PROGMEM = { 0x00, 0x21, 0x83, 0x74, 0x17, 0x00, 0x07, 0xA2, 0x8D, 0x65, 0x17, 0x00 };
const unsigned char FLUTE1[12]   PROGMEM = { 0x00, 0xA1, 0x27, 0x74, 0x8F, 0x00, 0x02, 0xA1, 0x80, 0x65, 0x2A, 0x00 };
const unsigned char FLUTE2[12]   PROGMEM = { 0x00, 0xE0, 0xEC, 0x6E, 0x8F, 0x00, 0x0E, 0x61, 0x00, 0x65, 0x2A, 0x00 };
const unsigned char FRHORN1[12]  PROGMEM = { 0x00, 0x21, 0x9F, 0x53, 0x5A, 0x00, 0x0C, 0x21, 0x80, 0xAA, 0x1A, 0x00 };
const unsigned char FRHORN2[12]  PROGMEM = { 0x00, 0x20, 0x8E, 0xA5, 0x8F, 0x02, 0x06, 0x21, 0x00, 0x36, 0x3D, 0x00 };
const unsigned char FSTRP1[12]   PROGMEM = { 0x00, 0xF0, 0x18, 0x55, 0xEF, 0x02, 0x00, 0xE0, 0x80, 0x87, 0x1E, 0x03 };
const unsigned char FSTRP2[12]   PROGMEM = { 0x00, 0x70, 0x16, 0x55, 0x2F, 0x02, 0x0C, 0xE0, 0x80, 0x87, 0x1E, 0x03 };
const unsigned char FUZGUIT1[12] PROGMEM = { 0x00, 0xF1, 0x00, 0x97, 0x13, 0x00, 0x0A, 0x25, 0x0D, 0xF1, 0x18, 0x01 };
const unsigned char FUZGUIT2[12] PROGMEM = { 0x00, 0x31, 0x48, 0xF1, 0x53, 0x00, 0x06, 0x32, 0x00, 0xF2, 0x27, 0x02 };
const unsigned char GUITAR1[12]  PROGMEM = { 0x00, 0x01, 0x11, 0xF2, 0x1F, 0x00, 0x0A, 0x01, 0x00, 0xF5, 0x88, 0x00 };
const unsigned char HARP1[12]    PROGMEM = { 0x00, 0x02, 0x29, 0xF5, 0x75, 0x00, 0x00, 0x01, 0x83, 0xF2, 0xF3, 0x00 };
const unsigned char HARP2[12]    PROGMEM = { 0x00, 0x02, 0x99, 0xF5, 0x55, 0x00, 0x00, 0x01, 0x80, 0xF6, 0x53, 0x00 };
const unsigned char HARP3[12]    PROGMEM = { 0x00, 0x02, 0x57, 0xF5, 0x56, 0x00, 0x00, 0x01, 0x80, 0xF6, 0x54, 0x00 };
const unsigned char HARPE1[12]   PROGMEM = { 0x00, 0x02, 0x29, 0xF5, 0x75, 0x00, 0x00, 0x01, 0x03, 0xF2, 0xF3, 0x00 };
const unsigned char HARPSI1[12]  PROGMEM = { 0x00, 0x32, 0x87, 0xA1, 0x10, 0x00, 0x08, 0x16, 0x80, 0x7D, 0x33, 0x00 };
const unsigned char HARPSI2[12]  PROGMEM = { 0x00, 0x33, 0x87, 0xA1, 0x10, 0x00, 0x06, 0x15, 0x80, 0x7D, 0x43, 0x00 };
const unsigned char HARPSI3[12]  PROGMEM = { 0x00, 0x35, 0x84, 0xA8, 0x10, 0x00, 0x08, 0x18, 0x80, 0x7D, 0x33, 0x00 };
const unsigned char HARPSI4[12]  PROGMEM = { 0x00, 0x11, 0x0D, 0xF2, 0x01, 0x00, 0x0A, 0x15, 0x0D, 0xF2, 0xB1, 0x00 };
const unsigned char HARPSI5[12]  PROGMEM = { 0x00, 0x36, 0x87, 0x8A, 0x00, 0x00, 0x08, 0x1A, 0x80, 0x7F, 0x33, 0x00 };
const unsigned char HELICPTR[12] PROGMEM = { 0x00, 0xF0, 0x00, 0x1E, 0x11, 0x01, 0x08, 0xE2, 0xC0, 0x11, 0x11, 0x01 };
const unsigned char HIHAT1[12]   PROGMEM = { 0x0A, 0x01, 0x00, 0xF7, 0xB5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char HIHAT2[12]   PROGMEM = { 0x0A, 0x01, 0x03, 0xDA, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char JAVAICAN[12] PROGMEM = { 0x00, 0x87, 0x4D, 0x78, 0x42, 0x00, 0x0A, 0x94, 0x00, 0x85, 0x54, 0x00 };
const unsigned char JAZZGUIT[12] PROGMEM = { 0x00, 0x03, 0x5E, 0x85, 0x51, 0x01, 0x0E, 0x11, 0x00, 0xD2, 0x71, 0x00 };
const unsigned char JEWSHARP[12] PROGMEM = { 0x00, 0x00, 0x50, 0xF2, 0x70, 0x00, 0x0E, 0x13, 0x00, 0xF2, 0x72, 0x00 };
const unsigned char KEYBRD1[12]  PROGMEM = { 0x00, 0x00, 0x02, 0xF0, 0xFA, 0x01, 0x06, 0x11, 0x80, 0xF2, 0xFA, 0x01 };
const unsigned char KEYBRD2[12]  PROGMEM = { 0x00, 0x01, 0x8F, 0xF2, 0xBD, 0x00, 0x08, 0x14, 0x80, 0x82, 0xBD, 0x00 };
const unsigned char KEYBRD3[12]  PROGMEM = { 0x00, 0x01, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0xE4, 0x03, 0xF3, 0x36, 0x00 };
const unsigned char LASER[12]    PROGMEM = { 0x09, 0xE6, 0x00, 0x25, 0xB5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char LOGDRUM1[12] PROGMEM = { 0x00, 0x32, 0x44, 0xF8, 0xFF, 0x00, 0x0E, 0x11, 0x00, 0xF5, 0x7F, 0x00 };
const unsigned char MARIMBA1[12] PROGMEM = { 0x00, 0x05, 0x4E, 0xDA, 0x25, 0x00, 0x0A, 0x01, 0x00, 0xF9, 0x15, 0x00 };
const unsigned char MARIMBA2[12] PROGMEM = { 0x00, 0x85, 0x4E, 0xDA, 0x15, 0x00, 0x0A, 0x81, 0x80, 0xF9, 0x13, 0x00 };
const unsigned char MDRNPHON[12] PROGMEM = { 0x00, 0x30, 0x00, 0xFE, 0x11, 0x01, 0x08, 0xAE, 0xC0, 0xF1, 0x19, 0x01 };
const unsigned char MLTRDRUM[12] PROGMEM = { 0x07, 0x0C, 0x00, 0xC8, 0xB6, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char MOOGSYNT[12] PROGMEM = { 0x00, 0x20, 0x90, 0xF5, 0x9E, 0x02, 0x0C, 0x11, 0x00, 0xF4, 0x5B, 0x03 };
const unsigned char NOISE1[12]   PROGMEM = { 0x00, 0x0E, 0x40, 0xD1, 0x53, 0x00, 0x0E, 0x0E, 0x00, 0xF2, 0x7F, 0x03 };
const unsigned char OBOE1[12]    PROGMEM = { 0x00, 0xB1, 0xC5, 0x6E, 0x17, 0x00, 0x02, 0x22, 0x05, 0x8B, 0x0E, 0x00 };
const unsigned char ORGAN1[12]   PROGMEM = { 0x00, 0x65, 0xD2, 0x81, 0x03, 0x00, 0x02, 0x71, 0x80, 0xF1, 0x05, 0x00 };
const unsigned char ORGAN2[12]   PROGMEM = { 0x00, 0x24, 0x80, 0xFF, 0x0F, 0x00, 0x01, 0x21, 0x80, 0xFF, 0x0F, 0x00 };
const unsigned char ORGAN3[12]   PROGMEM = { 0x00, 0x03, 0x5B, 0xF0, 0x1F, 0x00, 0x0A, 0x01, 0x80, 0xF0, 0x1F, 0x00 };
const unsigned char ORGAN3A[12]  PROGMEM = { 0x00, 0x03, 0x5B, 0xF0, 0x1F, 0x00, 0x0A, 0x01, 0x8D, 0xF0, 0x13, 0x00 };
const unsigned char ORGAN3B[12]  PROGMEM = { 0x00, 0x03, 0x5B, 0xF0, 0x1F, 0x00, 0x0A, 0x01, 0x92, 0xF0, 0x12, 0x00 };
const unsigned char ORGNPERC[12] PROGMEM = { 0x00, 0x0C, 0x00, 0xF8, 0xB5, 0x00, 0x01, 0x00, 0x00, 0xD6, 0x4F, 0x00 };
const unsigned char PHONE1[12]   PROGMEM = { 0x00, 0x17, 0x4F, 0xF2, 0x61, 0x00, 0x08, 0x12, 0x08, 0xF1, 0xB2, 0x00 };
const unsigned char PHONE2[12]   PROGMEM = { 0x00, 0x17, 0x4F, 0xF2, 0x61, 0x00, 0x08, 0x12, 0x0A, 0xF1, 0xB4, 0x00 };
const unsigned char PIAN1A[12]   PROGMEM = { 0x00, 0x81, 0x63, 0xF3, 0x58, 0x00, 0x00, 0x01, 0x80, 0xF2, 0x58, 0x00 };
const unsigned char PIAN1B[12]   PROGMEM = { 0x00, 0x07, 0x1F, 0xF5, 0xFA, 0x00, 0x0E, 0x01, 0x26, 0xF5, 0xFA, 0x00 };
const unsigned char PIAN1C[12]   PROGMEM = { 0x00, 0x07, 0x1F, 0xF5, 0xFA, 0x00, 0x0E, 0x01, 0x57, 0xF5, 0xFA, 0x00 };
const unsigned char PIANO[12]    PROGMEM = { 0x00, 0x03, 0x4F, 0xF1, 0x53, 0x00, 0x06, 0x17, 0x00, 0xF2, 0x74, 0x00 };
const unsigned char PIANO1[12]   PROGMEM = { 0x00, 0x01, 0x4F, 0xF1, 0x53, 0x00, 0x06, 0x11, 0x00, 0xD2, 0x74, 0x00 };
const unsigned char PIANO2[12]   PROGMEM = { 0x00, 0x41, 0x9D, 0xF2, 0x51, 0x00, 0x06, 0x13, 0x00, 0xF2, 0xF1, 0x00 };
const unsigned char PIANO3[12]   PROGMEM = { 0x00, 0x01, 0x4F, 0xF1, 0x50, 0x00, 0x06, 0x01, 0x04, 0xD2, 0x7C, 0x00 };
const unsigned char PIANO4[12]   PROGMEM = { 0x00, 0x01, 0x4D, 0xF1, 0x60, 0x00, 0x08, 0x11, 0x00, 0xD2, 0x7B, 0x00 };
const unsigned char PIANOBEL[12] PROGMEM = { 0x00, 0x03, 0x4F, 0xF1, 0x53, 0x00, 0x06, 0x17, 0x03, 0xF2, 0x74, 0x00 };
const unsigned char PIANOF[12]   PROGMEM = { 0x00, 0x01, 0xCF, 0xF1, 0x53, 0x00, 0x02, 0x12, 0x00, 0xF2, 0x83, 0x00 };
const unsigned char POPBASS1[12] PROGMEM = { 0x00, 0x10, 0x00, 0x75, 0x93, 0x01, 0x00, 0x01, 0x00, 0xF5, 0x82, 0x01 };
const unsigned char RKSNARE1[12] PROGMEM = { 0x07, 0x0C, 0x00, 0xC7, 0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char SAX1[12]     PROGMEM = { 0x00, 0x01, 0x4F, 0x71, 0x53, 0x00, 0x0A, 0x12, 0x00, 0x52, 0x7C, 0x00 };
const unsigned char SCRATCH[12]  PROGMEM = { 0x00, 0x07, 0x00, 0xF0, 0xF0, 0x00, 0x0E, 0x00, 0x00, 0x5C, 0xDC, 0x00 };
const unsigned char SCRATCH4[12] PROGMEM = { 0x00, 0x07, 0x00, 0xF0, 0xF0, 0x00, 0x0E, 0x00, 0x00, 0x5C, 0xDC, 0x00 };
const unsigned char SDRUM2[12]   PROGMEM = { 0x00, 0x06, 0x00, 0xF0, 0xF0, 0x00, 0x0E, 0x00, 0x00, 0xF6, 0xB4, 0x00 };
const unsigned char SHRTVIBE[12] PROGMEM = { 0x00, 0xE4, 0x0E, 0xFF, 0x3F, 0x01, 0x00, 0xC0, 0x00, 0xF3, 0x07, 0x00 };
const unsigned char SITAR1[12]   PROGMEM = { 0x00, 0x01, 0x40, 0xF1, 0x53, 0x00, 0x00, 0x08, 0x40, 0xF1, 0x53, 0x00 };
const unsigned char SITAR2[12]   PROGMEM = { 0x00, 0x01, 0x40, 0xF1, 0x53, 0x00, 0x00, 0x08, 0x40, 0xF1, 0x53, 0x01 };
const unsigned char SNAKEFL[12]  PROGMEM = { 0x00, 0x61, 0x0C, 0x81, 0x03, 0x00, 0x08, 0x71, 0x80, 0x61, 0x0C, 0x00 };
const unsigned char SNARE1[12]   PROGMEM = { 0x07, 0x0C, 0x00, 0xF8, 0xB5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char SNRSUST[12]  PROGMEM = { 0x00, 0x06, 0x00, 0xF0, 0xF0, 0x00, 0x0E, 0xC4, 0x03, 0xC4, 0x34, 0x00 };
const unsigned char SOLOVLN[12]  PROGMEM = { 0x00, 0x70, 0x1C, 0x51, 0x03, 0x02, 0x0E, 0x20, 0x00, 0x54, 0x67, 0x02 };
const unsigned char STEELGT1[12] PROGMEM = { 0x00, 0x01, 0x46, 0xF1, 0x83, 0x00, 0x06, 0x61, 0x03, 0x31, 0x86, 0x00 };
const unsigned char STEELGT2[12] PROGMEM = { 0x00, 0x01, 0x47, 0xF1, 0x83, 0x00, 0x06, 0x61, 0x03, 0x91, 0x86, 0x00 };
const unsigned char STRINGS1[12] PROGMEM = { 0x00, 0xB1, 0x8B, 0x71, 0x11, 0x00, 0x06, 0x61, 0x40, 0x42, 0x15, 0x01 };
const unsigned char STRNLONG[12] PROGMEM = { 0x00, 0xE1, 0x4F, 0xB1, 0xD3, 0x03, 0x06, 0x21, 0x00, 0x12, 0x74, 0x01 };
const unsigned char SYN1[12]     PROGMEM = { 0x00, 0x55, 0x97, 0x2A, 0x02, 0x00, 0x00, 0x12, 0x80, 0x42, 0xF3, 0x00 };
const unsigned char SYN2[12]     PROGMEM = { 0x00, 0x13, 0x97, 0x9A, 0x12, 0x00, 0x0E, 0x11, 0x80, 0x9B, 0x14, 0x00 };
const unsigned char SYN3[12]     PROGMEM = { 0x00, 0x11, 0x8A, 0xF1, 0x11, 0x00, 0x06, 0x01, 0x40, 0xF1, 0xB3, 0x00 };
const unsigned char SYN4[12]     PROGMEM = { 0x00, 0x21, 0x0D, 0xE9, 0x3A, 0x00, 0x0A, 0x22, 0x80, 0x65, 0x6C, 0x00 };
const unsigned char SYN5[12]     PROGMEM = { 0x00, 0x01, 0x4F, 0x71, 0x53, 0x00, 0x06, 0x19, 0x00, 0x52, 0x7C, 0x00 };
const unsigned char SYN6[12]     PROGMEM = { 0x00, 0x24, 0x0F, 0x41, 0x7E, 0x00, 0x0A, 0x21, 0x00, 0xF1, 0x5E, 0x00 };
const unsigned char SYN9[12]     PROGMEM = { 0x00, 0x07, 0x87, 0xF0, 0x05, 0x00, 0x04, 0x01, 0x80, 0xF0, 0x05, 0x00 };
const unsigned char SYNBAL1[12]  PROGMEM = { 0x00, 0x26, 0x03, 0xE0, 0xF0, 0x00, 0x08, 0x1E, 0x00, 0xFF, 0x31, 0x00 };
const unsigned char SYNBAL2[12]  PROGMEM = { 0x00, 0x28, 0x03, 0xE0, 0xF0, 0x00, 0x04, 0x13, 0x00, 0xE8, 0x11, 0x00 };
const unsigned char SYNBASS1[12] PROGMEM = { 0x00, 0x30, 0x88, 0xD5, 0x19, 0x00, 0x0C, 0x71, 0x80, 0x61, 0x1B, 0x00 };
const unsigned char SYNBASS2[12] PROGMEM = { 0x00, 0x81, 0x86, 0x65, 0x01, 0x00, 0x0C, 0x11, 0x00, 0x32, 0x74, 0x00 };
const unsigned char SYNBASS4[12] PROGMEM = { 0x00, 0x81, 0x83, 0x65, 0x05, 0x00, 0x0A, 0x51, 0x00, 0x32, 0x74, 0x00 };
const unsigned char SYNSNR1[12]  PROGMEM = { 0x00, 0x06, 0x00, 0xF0, 0xF0, 0x00, 0x0E, 0x00, 0x00, 0xF8, 0xB6, 0x00 };
const unsigned char SYNSNR2[12]  PROGMEM = { 0x00, 0x06, 0x00, 0xF0, 0xF0, 0x00, 0x0E, 0x00, 0x00, 0xF6, 0xB4, 0x00 };
const unsigned char TINCAN1[12]  PROGMEM = { 0x00, 0x8F, 0x81, 0xEF, 0x01, 0x00, 0x04, 0x01, 0x00, 0x98, 0xF1, 0x00 };
const unsigned char TOM1[12]     PROGMEM = { 0x08, 0x04, 0x00, 0xF7, 0xB5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char TOM2[12]     PROGMEM = { 0x08, 0x02, 0x00, 0xC8, 0x97, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char TRAINBEL[12] PROGMEM = { 0x00, 0x17, 0x4F, 0xF2, 0x61, 0x00, 0x08, 0x12, 0x08, 0xF2, 0x74, 0x00 };
const unsigned char TRIANGLE[12] PROGMEM = { 0x00, 0x26, 0x03, 0xE0, 0xF0, 0x00, 0x08, 0x1E, 0x00, 0xFF, 0x31, 0x00 };
const unsigned char TROMB1[12]   PROGMEM = { 0x00, 0xB1, 0x1C, 0x41, 0x1F, 0x00, 0x0E, 0x61, 0x80, 0x92, 0x3B, 0x00 };
const unsigned char TROMB2[12]   PROGMEM = { 0x00, 0x21, 0x1C, 0x53, 0x1D, 0x00, 0x0C, 0x61, 0x80, 0x52, 0x3B, 0x00 };
const unsigned char TRUMPET1[12] PROGMEM = { 0x00, 0x31, 0x1C, 0x41, 0x0B, 0x00, 0x0E, 0x61, 0x80, 0x92, 0x3B, 0x00 };
const unsigned char TRUMPET2[12] PROGMEM = { 0x00, 0x31, 0x1C, 0x23, 0x1D, 0x00, 0x0C, 0x61, 0x80, 0x52, 0x3B, 0x00 };
const unsigned char TRUMPET3[12] PROGMEM = { 0x00, 0x31, 0x1C, 0x41, 0x01, 0x00, 0x0E, 0x61, 0x80, 0x92, 0x3B, 0x00 };
const unsigned char TRUMPET4[12] PROGMEM = { 0x00, 0x31, 0x1C, 0x41, 0x0B, 0x00, 0x0C, 0x61, 0x80, 0x92, 0x3B, 0x00 };
const unsigned char TUBA1[12]    PROGMEM = { 0x00, 0x21, 0x19, 0x43, 0x8C, 0x00, 0x0C, 0x21, 0x80, 0x85, 0x2F, 0x00 };
const unsigned char VIBRA1[12]   PROGMEM = { 0x00, 0x84, 0x53, 0xF5, 0x33, 0x00, 0x06, 0xA0, 0x80, 0xFD, 0x25, 0x00 };
const unsigned char VIBRA2[12]   PROGMEM = { 0x00, 0x06, 0x73, 0xF6, 0x54, 0x00, 0x00, 0x81, 0x03, 0xF2, 0xB3, 0x00 };
const unsigned char VIBRA3[12]   PROGMEM = { 0x00, 0x93, 0x97, 0xAA, 0x12, 0x02, 0x0E, 0x91, 0x80, 0xAC, 0x21, 0x00 };
const unsigned char VIOLIN1[12]  PROGMEM = { 0x00, 0x31, 0x1C, 0x51, 0x03, 0x00, 0x0E, 0x61, 0x80, 0x54, 0x67, 0x00 };
const unsigned char VIOLIN2[12]  PROGMEM = { 0x00, 0xE1, 0x88, 0x62, 0x29, 0x00, 0x0C, 0x22, 0x80, 0x53, 0x2C, 0x00 };
const unsigned char VIOLIN3[12]  PROGMEM = { 0x00, 0xE1, 0x88, 0x64, 0x29, 0x00, 0x06, 0x22, 0x83, 0x53, 0x2C, 0x00 };
const unsigned char VLNPIZZ1[12] PROGMEM = { 0x00, 0x31, 0x9C, 0xF1, 0xF9, 0x00, 0x0E, 0x31, 0x80, 0xF7, 0xE6, 0x00 };
const unsigned char WAVE[12]     PROGMEM = { 0x00, 0x00, 0x02, 0x00, 0xF0, 0x00, 0x0E, 0x14, 0x80, 0x1B, 0xA2, 0x00 };
const unsigned char XYLO1[12]    PROGMEM = { 0x00, 0x11, 0x2D, 0xC8, 0x2F, 0x00, 0x0C, 0x31, 0x00, 0xF5, 0xF5, 0x00 };
const unsigned char XYLO2[12]    PROGMEM = { 0x06, 0x2E, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char XYLO3[12]    PROGMEM = { 0x00, 0x06, 0x00, 0xFF, 0xF0, 0x00, 0x0E, 0xC4, 0x00, 0xF8, 0xB5, 0x00 };
