/******************************************************************************
* \file      CpuArch.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Cpu constant definitions
* \details
*
* \see       https://github.com/ignackodotcom
*			 https://github.com/cpredef/predef
*            https://copilot.microsoft.com/
*            https://chatgpt.com/
*            https://deepai.org/chat
*            and other resources
*
* \note      It is completely impossible to fully test all cpu architecture combinations,
*            so this library is not fully tested. If you have any improvements,
*            please feel free to contact me at ignacko.com@outlook.com
******************************************************************************/

#ifndef CPUARCH_H
#define CPUARCH_H      20260101L



/******************************************************************************
** When compiling or setting up a build for a specific environment,
** you can explicitly add a macro if this predefined macro does not exist.
**
** (e.g., -D__6502__).
*/



/******************************************************************************
*******************************************************************************
** 0-9
*******************************************************************************
******************************************************************************/

/******************************************************************************
** 6502
*/
#define CPU_ARCH_6502                   1
#define CPU_ARCH_6502_NAME              "6502"

#if defined(__CC65__) || defined(__6502__) || \
    defined(__C64__) || defined(__C128__) || \
    defined(__CBM510__) || defined(__PET__) || \
    defined(__APPLE2__) || defined(__ATARI__) || \
    defined(__NES__) || defined(__VIC20__) || \
    defined(__GEOS__) || defined(__LYNX__) || \
    defined(__CX16__) || defined(__SDCC_mos6502)
 #define CPU_ARCH                       CPU_ARCH_6502
 #define CPU_ARCH_NAME                  CPU_ARCH_6502_NAME
#endif



/******************************************************************************
*******************************************************************************
** A
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Alpha
*/
#define CPU_ARCH_ALPHA                  CPU_ARCH_6502 + 1
#define CPU_ARCH_ALPHA_NAME             "Alpha"

#if defined(__alpha) || defined(__alpha__) || defined(_M_ALPHA) || \
    defined(__archalpha) || defined(__archalpha__)
 #define CPU_ARCH                       CPU_ARCH_ALPHA
 #define CPU_ARCH_NAME                  CPU_ARCH_ALPHA_NAME
#endif


/******************************************************************************
** Amd64
*/
#define CPU_ARCH_AMD64                  CPU_ARCH_ALPHA + 1
#define CPU_ARCH_AMD64_NAME             "Amd64"

#if defined(__amd64) || defined(__amd64__) || \
    defined(__x86_64) || defined(__x86_64__) || \
    defined(_M_X64) || defined(_M_AMD64)
 #define CPU_ARCH                       CPU_ARCH_AMD64
 #define CPU_ARCH_NAME                  CPU_ARCH_AMD64_NAME
#endif


/******************************************************************************
** Arm32 & Arm64
*/
#define CPU_ARCH_ARM32                  CPU_ARCH_AMD64 + 1
#define CPU_ARCH_ARM32_NAME             "Arm32"

#define CPU_ARCH_ARM64                  CPU_ARCH_ARM32 + 1
#define CPU_ARCH_ARM64_NAME             "Arm64"

#if defined(__aarch64__) || defined(_M_ARM64)
 #define CPU_ARCH                       CPU_ARCH_ARM64
 #define CPU_ARCH_NAME                  CPU_ARCH_ARM64_NAME
#elif defined(__arm) || defined(__arm__) || \
    defined(__thumb__) || defined(__TARGET_ARCH_ARM) || \
    defined(__TARGET_ARCH_THUMB) || defined(_ARM) || \
    defined(_M_ARM) || defined(_M_ARMT) || defined(__CA__) || \
    defined(__ARM_ARCH) || defined(__ARM_EABI_) || defined(__ARM_ARCH_ISA_ARM) || \
    defined(__ARM_ARCH_ISA_THUMB) || \
    defined(__ARMEL__) || defined(__ARMEB__)
 #define CPU_ARCH                       CPU_ARCH_ARM32
 #define CPU_ARCH_NAME                  CPU_ARCH_ARM32_NAME
#endif


/******************************************************************************
** Avr
*/
#define CPU_ARCH_AVR                    CPU_ARCH_ARM64 + 1
#define CPU_ARCH_AVR_NAME               "Avr"

#if defined(__AVR__) || defined(__AVR_ARCH__)
 #define CPU_ARCH                       CPU_ARCH_AVR
 #define CPU_ARCH_NAME                  CPU_ARCH_AVR_NAME
#endif



/******************************************************************************
*******************************************************************************
** B
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Blackfin
*/
#define CPU_ARCH_BLACKFIN               CPU_ARCH_AVR + 1
#define CPU_ARCH_BLACKFIN_NAME          "Blackfin"

#if defined(__bfin) || defined(__bfin__) || defined(__BFIN__) || \
    defined(__BFIN_ARCH__) || defined(__ADSPBLACKFIN__)
 #define CPU_ARCH                       CPU_ARCH_BLACKFIN
 #define CPU_ARCH_NAME                  CPU_ARCH_BLACKFIN_NAME
#endif



/******************************************************************************
*******************************************************************************
** C
*******************************************************************************
******************************************************************************/

/******************************************************************************
** C166
*/
#define CPU_ARCH_C166                   CPU_ARCH_BLACKFIN + 1
#define CPU_ARCH_C166_NAME              "C166"

#if defined(__C166__) || defined(__C166_) || defined(__XC16X__) || \
    defined(__C167__) || defined(__ST10__) || defined(__XC166__) || defined(__XE166__)
 #define CPU_ARCH                       CPU_ARCH_C166
 #define CPU_ARCH_NAME                  CPU_ARCH_C166_NAME
#endif


/******************************************************************************
** Convex
*/
#define CPU_ARCH_CONVEX                 CPU_ARCH_C166 + 1
#define CPU_ARCH_CONVEX_NAME            "Convex"

#if defined(__convex__) || defined(__CONVEX__)
 #define CPU_ARCH                       CPU_ARCH_CONVEX
 #define CPU_ARCH_NAME                  CPU_ARCH_CONVEX_NAME
#endif



/******************************************************************************
*******************************************************************************
** D
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** E
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Elbrus
*/
#define CPU_ARCH_ELBRUS                 CPU_ARCH_CONVEX + 1
#define CPU_ARCH_ELBRUS_NAME            "Elbrus"

#if defined(__E2K__) || defined(__e2k__) || defined(__ELBRUS__) || defined(__elbrus__)
 #define CPU_ARCH                       CPU_ARCH_ELBRUS
 #define CPU_ARCH_NAME                  CPU_ARCH_ELBRUS_NAME
#endif


/******************************************************************************
** Epiphany
*/
#define CPU_ARCH_EPIPHANY               CPU_ARCH_ELBRUS + 1
#define CPU_ARCH_EPIPHANY_NAME          "Epiphany"

#if defined(__epiphany__)
 #define CPU_ARCH                       CPU_ARCH_EPIPHANY
 #define CPU_ARCH_NAME                  CPU_ARCH_EPIPHANY_NAME
#endif



/******************************************************************************
*******************************************************************************
** F
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** G
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** H
*******************************************************************************
******************************************************************************/

/******************************************************************************
** HP/PA Risc
*/
#define CPU_ARCH_HPPARISC               CPU_ARCH_EPIPHANY + 1
#define CPU_ARCH_HPPARISC_NAME          "HP/PA Risc"

#if defined(__hppa) || defined(__hppa__) || defined(__HPPA__)
 #define CPU_ARCH                       CPU_ARCH_HPPARISC
 #define CPU_ARCH_NAME                  CPU_ARCH_HPPARISC_NAME
#endif



/******************************************************************************
*******************************************************************************
** I
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Intel Itanium IA-64
*/
#define CPU_ARCH_IA64                   CPU_ARCH_HPPARISC + 1
#define CPU_ARCH_IA64_NAME              "Intel Itanium IA-64"

#if defined(__ia64__) || defined(_IA64) || defined(__IA64__) || \
    defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
 #define CPU_ARCH                       CPU_ARCH_IA64
 #define CPU_ARCH_NAME                  CPU_ARCH_IA64_NAME
#endif


/******************************************************************************
** Intel x80
*/
#define CPU_ARCH_INTELX80               CPU_ARCH_IA64 + 1
#define CPU_ARCH_INTELX80_NAME          "Intel x80"

#if defined(__8080__)
 #define CPU_ARCH                       CPU_ARCH_INTELX80
 #define CPU_ARCH_NAME                  CPU_ARCH_INTELX80_NAME
#endif


/******************************************************************************
** Intel x85
*/
#define CPU_ARCH_INTELX85               CPU_ARCH_INTELX80 + 1
#define CPU_ARCH_INTELX85_NAME          "Intel x85"

#if defined(__8085__) || defined(__SDCC_8085)
 #define CPU_ARCH                       CPU_ARCH_INTELX85
 #define CPU_ARCH_NAME                  CPU_ARCH_INTELX85_NAME
#endif


/******************************************************************************
** Intel x86 16bit
*/
#define CPU_ARCH_INTELX86_16            CPU_ARCH_INTELX85 + 1
#define CPU_ARCH_INTELX86_16_NAME       "Intel x86 16bit"

#if defined(_M_I86) || defined(__8086__) || defined(__286__) || defined(__MSDOS__) || defined(__TURBOC__)
 /* standard 16 bit */
 #define CPU_ARCH                       CPU_ARCH_INTELX86_16
 #define CPU_ARCH_NAME                  CPU_ARCH_INTELX86_16_NAME
#endif

#if defined(_M_IX86) && !defined(__i386__) && !defined(__386__) && !defined(_M_I386) && defined(__WATCOMC__)
 /* watcomc 16 bit */
 #define CPU_ARCH                       CPU_ARCH_INTELX86_16
 #define CPU_ARCH_NAME                  CPU_ARCH_INTELX86_16_NAME
#endif


/******************************************************************************
** Intel x86 32bit
*/
#define CPU_ARCH_INTELX86_32            CPU_ARCH_INTELX86_16 + 1
#define CPU_ARCH_INTELX86_32_NAME       "Intel x86 32bit"

#if defined(i386) || defined(__i386) || defined(__i386__) || \
    defined(__i486__) || defined(__i586__) || defined(__i686__) || \
    defined(_M_IX86) || defined(__X86__)  || defined(_X86_) || \
    defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || \
    defined(__386) || defined(__IA32__)
 #if defined(_M_IX86)
  #if defined(__WATCOMC__)
   #if defined(__386__) || defined(_M_I386)
    /* watcomc 32bit */
    #define CPU_ARCH                    CPU_ARCH_INTELX86_32
    #define CPU_ARCH_NAME               CPU_ARCH_INTELX86_32_NAME
   #endif
  #else
   /* standard 32bit */
   #define CPU_ARCH                     CPU_ARCH_INTELX86_32
   #define CPU_ARCH_NAME                CPU_ARCH_INTELX86_32_NAME
  #endif
 #else
  /* standard 32bit */
  #define CPU_ARCH                      CPU_ARCH_INTELX86_32
  #define CPU_ARCH_NAME                 CPU_ARCH_INTELX86_32_NAME
 #endif
#endif



/******************************************************************************
*******************************************************************************
** J
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** K
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** L
*******************************************************************************
******************************************************************************/

/******************************************************************************
** LoongArch
*/
#define CPU_ARCH_LOONGARCH              CPU_ARCH_INTELX86_32 + 1
#define CPU_ARCH_LOONGARCH_NAME         "LoongArch"

#if defined(__loongarch__)
 #define CPU_ARCH                       CPU_ARCH_LOONGARCH
 #define CPU_ARCH_NAME                  CPU_ARCH_LOONGARCH_NAME
#endif



/******************************************************************************
*******************************************************************************
** M
*******************************************************************************
******************************************************************************/

/******************************************************************************
** MCS 251
*/
#define CPU_ARCH_MCS251                 CPU_ARCH_LOONGARCH + 1
#define CPU_ARCH_MCS251_NAME            "MCS 251"

#if defined(__C251__)
 #define CPU_ARCH                       CPU_ARCH_MCS251
 #define CPU_ARCH_NAME                  CPU_ARCH_MCS251_NAME
#endif


/******************************************************************************
** MCS 51
*/
#define CPU_ARCH_MCS51                  CPU_ARCH_MCS251 + 1
#define CPU_ARCH_MCS51_NAME             "MCS 51"

#if defined(__C51__) || defined(__CX51__) || defined(__SDCC_mcs51) || \
    defined(__ICC8051__) || defined(__8051__)
 #define CPU_ARCH                       CPU_ARCH_MCS51
 #define CPU_ARCH_NAME                  CPU_ARCH_MCS51_NAME
#endif


/******************************************************************************
** MIPS
*/
#define CPU_ARCH_MIPS                   CPU_ARCH_MCS51 + 1
#define CPU_ARCH_MIPS_NAME              "MIPS"

#if defined(__mips__) || defined(mips) || defined(__mips) || defined(__MIPS__) || defined(_M_MRX000)
 #define CPU_ARCH                       CPU_ARCH_MIPS
 #define CPU_ARCH_NAME                  CPU_ARCH_MIPS_NAME
#endif


/******************************************************************************
** Motorola 68k
*/
#define CPU_ARCH_MOTOROLA68K            CPU_ARCH_MIPS + 1
#define CPU_ARCH_MOTOROLA68K_NAME       "Motorola 68k"

#if defined(__m68k__) || defined(__m68k ) || defined(mc68000) || defined(M68000) || \
    defined(__MC68000__) || defined(__MC68K__) || defined(__mc68K__)
 #define CPU_ARCH                       CPU_ARCH_MOTOROLA68K
 #define CPU_ARCH_NAME                  CPU_ARCH_MOTOROLA68K_NAME
#endif



/******************************************************************************
*******************************************************************************
** N
*******************************************************************************
******************************************************************************/

/******************************************************************************
** NEC SX-Aurora TSUBASA
*/
#define CPU_ARCH_NECSXAURORA            CPU_ARCH_MOTOROLA68K + 1
#define CPU_ARCH_NECSXAURORA_NAME       "NEC SX-Aurora TSUBASA"

#if defined(__ve) || defined(__ve__) || defined(__NEC__)
 #define CPU_ARCH                       CPU_ARCH_NECSXAURORA
 #define CPU_ARCH_NAME                  CPU_ARCH_NECSXAURORA_NAME
#endif



/******************************************************************************
*******************************************************************************
** O
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** P
*******************************************************************************
******************************************************************************/

/******************************************************************************
** PNaCl
*/
#define CPU_ARCH_PNACL                  CPU_ARCH_NECSXAURORA + 1
#define CPU_ARCH_PNACL_NAME             "PNaCl"

#if defined(__pnacl__)
 #define CPU_ARCH                       CPU_ARCH_PNACL
 #define CPU_ARCH_NAME                  CPU_ARCH_PNACL_NAME
#endif


/******************************************************************************
** PowerPC
*/
#define CPU_ARCH_POWERPC                CPU_ARCH_PNACL + 1
#define CPU_ARCH_POWERPC_NAME           "PowerPC"

#if defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || \
    defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || \
    defined(__PPC__) || defined(__PPC64__) || defined(_ARCH_PPC) || \
    defined(_ARCH_PPC64) || defined(_M_PPC) || defined(__ppc)
 #define CPU_ARCH                       CPU_ARCH_POWERPC
 #define CPU_ARCH_NAME                  CPU_ARCH_POWERPC_NAME
#endif


/******************************************************************************
** Pyramid 9810
*/
#define CPU_ARCH_PYRAMID9810            CPU_ARCH_POWERPC + 1
#define CPU_ARCH_PYRAMID9810_NAME       "Pyramid 9810"

#if defined(pyr)
 #define CPU_ARCH                       CPU_ARCH_PYRAMID9810
 #define CPU_ARCH_NAME                  CPU_ARCH_PYRAMID9810_NAME
#endif



/******************************************************************************
*******************************************************************************
** Q
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** R
*******************************************************************************
******************************************************************************/

/******************************************************************************
** RISC-V
*/
#define CPU_ARCH_RISCV                  CPU_ARCH_PYRAMID9810 + 1
#define CPU_ARCH_RISCV_NAME             "RISC-V"

#if defined(__riscv) || defined(__riscv_xlen)
 #define CPU_ARCH                       CPU_ARCH_RISCV
 #define CPU_ARCH_NAME                  CPU_ARCH_RISCV_NAME
#endif


/******************************************************************************
** RS/6000
*/
#define CPU_ARCH_RS6000                 CPU_ARCH_RISCV + 1
#define CPU_ARCH_RS6000_NAME            "RS/6000"

#if defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || \
    defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || \
    defined(_ARCH_PWR4)
 #define CPU_ARCH                       CPU_ARCH_RS6000
 #define CPU_ARCH_NAME                  CPU_ARCH_RS6000_NAME
#endif



/******************************************************************************
*******************************************************************************
** S
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Sparc
*/
#define CPU_ARCH_SPARC                  CPU_ARCH_RS6000 + 1
#define CPU_ARCH_SPARC_NAME             "Sparc"

#if defined(__sparc__) || defined(__sparc)
 #define CPU_ARCH                       CPU_ARCH_SPARC
 #define CPU_ARCH_NAME                  CPU_ARCH_SPARC_NAME
#endif


/******************************************************************************
** SuperH
*/
#define CPU_ARCH_SUPERH                 CPU_ARCH_SPARC + 1
#define CPU_ARCH_SUPERH_NAME            "SuperH"

#if defined(__sh__) || defined(__SH__)
 #define CPU_ARCH                       CPU_ARCH_SUPERH
 #define CPU_ARCH_NAME                  CPU_ARCH_SUPERH_NAME
#endif


/******************************************************************************
** SystemZ
*/
#define CPU_ARCH_SYSTEMZ                CPU_ARCH_SUPERH + 1
#define CPU_ARCH_SYSTEMZ_NAME           "SystemZ"

#if defined(__370__) || defined(__THW_370__) || defined(__s390__) || \
    defined(__s390x__) || defined(__zarch__) || defined(__SYSC_ZARCH__)
 #define CPU_ARCH                       CPU_ARCH_SYSTEMZ
 #define CPU_ARCH_NAME                  CPU_ARCH_SYSTEMZ_NAME
#endif



/******************************************************************************
*******************************************************************************
** T
*******************************************************************************
******************************************************************************/

/******************************************************************************
** TMS320
*/
#define CPU_ARCH_TMS320                 CPU_ARCH_SYSTEMZ + 1
#define CPU_ARCH_TMS320_NAME            "TMS320"

#if defined(_TMS320C2XX) || defined(__TMS320C2000__) || \
    defined(__TMS320C28X__) || defined(__TMS320C28XX__) || defined(__TMS320C54X__) || \
    defined(_TMS320C5X) || defined(__TMS320C5XX__) || \
    defined(__TMS320C55X__) || defined(_TMS320C6X) || defined(__TMS320C6X__) || \
    defined(__TMS320C6200__) || defined(__TMS320C6400__) || defined(__TMS320C6400_PLUS__) || \
    defined(__TMS320C6700__) || defined(__TMS320C6740__)
 #define CPU_ARCH                       CPU_ARCH_TMS320
 #define CPU_ARCH_NAME                  CPU_ARCH_TMS320_NAME
#endif


/******************************************************************************
** TMS470
*/
#define CPU_ARCH_TMS470                 CPU_ARCH_TMS320 + 1
#define CPU_ARCH_TMS470_NAME            "TMS470"

#if defined(__TMS470__)
 #define CPU_ARCH                       CPU_ARCH_TMS470
 #define CPU_ARCH_NAME                  CPU_ARCH_TMS470_NAME
#endif



/******************************************************************************
*******************************************************************************
** U
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** V
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** W
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** X
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** Y
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** Z
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Zilog Z180
*/
#define CPU_ARCH_ZILOGZ180              CPU_ARCH_TMS470 + 1
#define CPU_ARCH_ZILOGZ180_NAME         "Zilog Z180"

#if defined(__Z180) || defined(__Z180__) || defined(__z180__) || defined(__SDCC_z180)
 #define CPU_ARCH                       CPU_ARCH_ZILOGZ180
 #define CPU_ARCH_NAME                  CPU_ARCH_ZILOGZ180_NAME
#endif


/******************************************************************************
** Zilog Z80
*/
#define CPU_ARCH_ZILOGZ80               CPU_ARCH_ZILOGZ180 + 1
#define CPU_ARCH_ZILOGZ80_NAME          "Zilog Z80"

#if defined(__Z80) || defined(__Z80__) || defined(__z80__) || defined(__SDCC_z80)
 #define CPU_ARCH                       CPU_ARCH_ZILOGZ80
 #define CPU_ARCH_NAME                  CPU_ARCH_ZILOGZ80_NAME
#endif



/******************************************************************************
*******************************************************************************
** CPU unknown
*******************************************************************************
******************************************************************************/

#ifndef CPU_ARCH
/* Unknown cpu architecture. */
#define CPU_ARCH                        0
#endif /* CPU_ARCH */

#ifndef CPU_ARCH_NAME
/* Unknown cpu architecture name. */
#define CPU_ARCH_NAME                   "unknown"
#endif /* CPU_ARCH_NAME */



/******************************************************************************
* Example of use
*
* #if CPU_ARCH == 0
*   #error "Unknown cpu architecture"
* #endif
*
* #if CPU_ARCH == CPU_ARCH_ZILOGZ80
*   ...
*   Zilog Z80 code
*   ...
* #elif CPU_ARCH == CPU_ARCH_ZILOGZ180
*   ...
*   Zilog Z180 code
*   ...
* #else
*   ...
*   other code
*   ...
* #endif
*
*/



#endif /* CPUARCH_H */
