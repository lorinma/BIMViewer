/****************************************************************
**
**  File: oce_install_config.h.cmake, oce-config.h
**
**  This configuration header is installed with OCE headers.
**  It should NOT be used while building OCE.  It defines
**  a subset of the macros configured by CMake. This subset is
**  used by the installed OCE headers.
**
****************************************************************/



#define OCE_HAVE_IOMANIP 1
/* #undef OCE_HAVE_IOMANIP_H */

#define OCE_HAVE_FSTREAM 1
/* #undef OCE_HAVE_FSTREAM_H */

#define OCE_HAVE_IOSTREAM 1
/* #undef OCE_HAVE_IOSTREAM_H */

#define OCE_HAVE_LIMITS 1
#define OCE_HAVE_CLIMITS 1
#define OCE_HAVE_LIMITS_H 1

/* #undef MACOSX_USE_GLX */

/* #undef OCE_IS_DUPLICATE_UINT32_T */
