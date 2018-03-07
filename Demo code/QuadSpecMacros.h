/*
 * Generated file - do not edit.
 */
#define FL_QUADDEVICE_ISSI_IS25LQ016B \
{ \
    ISSI_IS25LQ016B,        /* IS25LQ016B */ \
    256,                    /* page size */ \
    8192,                   /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider */                             \
    0x9F,                   /* QSPI_RDID */ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x9D4015,               /* device id */ \
    0x20,                   /* QSPI_SE */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN */ \
    0x04,                   /* QSPI_WRDI */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP */ \
    0xEB,                   /* QSPI_READ_FAST */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector sizes */ \
    0x05,                   /* QSPI_RDSR */ \
    0x01,                   /* QSPI_WRSR */ \
    0x01,                   /* QSPI_WIP_BIT_MASK */ \
}
#define FL_QUADDEVICE_ISSI_IS25LQ032B \
{ \
    ISSI_IS25LQ032B,        /* IS25LQ032B */ \
    256,                    /* page size */ \
    16384,                  /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider */                             \
    0x9F,                   /* QSPI_RDID */ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x9D4016,               /* device id */ \
    0x20,                   /* QSPI_SE */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN */ \
    0x04,                   /* QSPI_WRDI */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP */ \
    0xEB,                   /* QSPI_READ_FAST */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector sizes */ \
    0x05,                   /* QSPI_RDSR */ \
    0x01,                   /* QSPI_WRSR */ \
    0x01,                   /* QSPI_WIP_BIT_MASK */ \
}
#define FL_QUADDEVICE_ISSI_IS25LQ080B \
{ \
    ISSI_IS25LQ080B,        /* IS25LQ080B */ \
    256,                    /* page size */ \
    4096,                   /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider */                             \
    0x9F,                   /* QSPI_RDID */ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x9D4014,               /* device id */ \
    0x20,                   /* QSPI_SE */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN */ \
    0x04,                   /* QSPI_WRDI */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP */ \
    0xEB,                   /* QSPI_READ_FAST */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector sizes */ \
    0x05,                   /* QSPI_RDSR */ \
    0x01,                   /* QSPI_WRSR */ \
    0x01,                   /* QSPI_WIP_BIT_MASK */ \
}
#define FL_QUADDEVICE_SPANSION_S25FL116K \
{ \
    SPANSION_S25FL116K,     /* S25FL116K */ \
    256,                    /* page size */ \
    8192,                   /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider */                             \
    0x9F,                   /* QSPI_RDID */ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x014015,               /* device id */ \
    0x20,                   /* QSPI_SE */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN */ \
    0x04,                   /* QSPI_WRDI */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP */ \
    0xEB,                   /* QSPI_READ_FAST */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector sizes */ \
    0x05,                   /* QSPI_RDSR */ \
    0x01,                   /* QSPI_WRSR */ \
    0x01,                   /* QSPI_WIP_BIT_MASK */ \
}
#define FL_QUADDEVICE_SPANSION_S25FL132K \
{ \
    SPANSION_S25FL132K,     /* S25FL132K */ \
    256,                    /* page size */ \
    16384,                  /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider */                             \
    0x9F,                   /* QSPI_RDID */ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x014016,               /* device id */ \
    0x20,                   /* QSPI_SE */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN */ \
    0x04,                   /* QSPI_WRDI */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP */ \
    0xEB,                   /* QSPI_READ_FAST */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector sizes */ \
    0x05,                   /* QSPI_RDSR */ \
    0x01,                   /* QSPI_WRSR */ \
    0x01,                   /* QSPI_WIP_BIT_MASK */ \
}
#define FL_QUADDEVICE_SPANSION_S25FL164K \
{ \
    SPANSION_S25FL164K,     /* S25FL164K */ \
    256,                    /* page size */ \
    32768,                  /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider */                             \
    0x9F,                   /* QSPI_RDID */ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x014017,               /* device id */ \
    0x20,                   /* QSPI_SE */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN */ \
    0x04,                   /* QSPI_WRDI */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP */ \
    0xEB,                   /* QSPI_READ_FAST */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector sizes */ \
    0x05,                   /* QSPI_RDSR */ \
    0x01,                   /* QSPI_WRSR */ \
    0x01,                   /* QSPI_WIP_BIT_MASK */ \
}
#define FL_QUADDEVICE_ADESTO_AT25SD041 \
{ \
    ADESTO_AT25SD041,       /* AT25SD041 */ \
    256,                    /* page size */ \
    2048,                   /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider, 16.6MHz from a 100MHz reference clock, i.e. 100 / (2*3) */                             \
    0x9F,                   /* QSPI_RDID */ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x0F8401,               /* device id */ \
    0x20,                   /* QSPI_SE (Block erase command) */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN (Write Enable command) */ \
    0x04,                   /* QSPI_WRDI (Write Disable command) */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP (Page Program command) */ \
    0xEB,                   /* QSPI_READ_FAST (Quad I/O Read command) */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector/block sizes */ \
    0x05,                   /* QSPI_RDSR (Read Status Register Byte 1 command) */ \
    0x01,                   /* QSPI_WRSR (Write Status Register command)*/ \
    0x01,                   /* QSPI_WIP_BIT_MASK */ \
}
#define FL_QUADDEVICE_ADESTO_AT25SF081 \
{ \
    ADESTO_AT25SF081,       /* AT25SF081-SSHDT */ \
    256,                    /* page size */ \
    4096,                   /* num pages */ \
    3,                      /* address size */                                   \
    3,                      /* log2 clock divider, 16.6MHz from a 100MHz reference clock, i.e. 100 / (2*3) */                             \
    0x9F,                   /* QSPI_RDID, Section 11.1*/ \
    0,                      /* id dummy bytes */ \
    3,                      /* id size in bytes */ \
    0x1F8501,               /* device id, Table 11-2*/ \
    0x20,                   /* QSPI_SE (Block erase command), Table 5-1 */ \
    4096,                   /* Sector erase is always 4KB */ \
    0x06,                   /* QSPI_WREN (Write Enable command), Table 5-1 */ \
    0x04,                   /* QSPI_WRDI (Write Disable command), Table 5-1 */ \
    PROT_TYPE_NONE,         /* no protection */ \
    {{0,0},{0x00,0x00}},    /* QSPI_SP, QSPI_SU */ \
    0x02,                   /* QSPI_PP (Page Program command), Table 5-1 */ \
    0xEB,                   /* QSPI_READ_FAST (Quad I/O Read command), Table 5-1 */ \
    1,                      /* 1 read dummy byte */ \
    SECTOR_LAYOUT_REGULAR,  /* mad sectors */ \
    {4096,{0,{0}}},        /* regular sector/block sizes */ \
    0x05,                   /* QSPI_RDSR (Read Status Register Byte 1 command), Table 5-1 */ \
    0x01,                   /* QSPI_WRSR (Write Status Register command), Table 5-1 */ \
    0x01,                   /* QSPI_WIP_BIT_MASK, Table 5-1 */ \
}
