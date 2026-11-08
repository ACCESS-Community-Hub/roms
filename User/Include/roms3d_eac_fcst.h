/*
*******************************************************************************
** Copyright (c) 2002-2007 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for EAC outer runs
**
** Application flag:   EAC
** Input script:       ocean.in
**                     s4dvar.in
*/

#define SOLVE3D
#define PERFECT_RESTART

#define NLM_DRIVER              /* Nonlinear Basic State trajectory */
#define UV_ADV
#define UV_COR
#define UV_QDRAG
#define UV_VIS2
#define MIX_S_UV
#define TS_DIF2
#define MIX_GEO_TS
#define SALINITY
#define NONLIN_EOS
#define DJ_GRADPS
#define MASKING
#define CURVGRID
#define VISC_GRID
#define DIFF_GRID
#define AVERAGES
#define AVERAGES_QUADRATIC
#define AVERAGES_FLUXES
#define DIAGNOSTICS_UV
#define DIAGNOSTICS_TS   
#define MY25_MIXING
#define BULK_FLUXES
#define ANA_BSFLUX
#define ANA_BTFLUX
#define KANTHA_CLAYSON
#define N2S2_HORAVG

#define LONGWAVE_OUT
#define SOLAR_SOURCE
#define EMINUSP
#define RADIATION_2D
#define SPONGE

#define AVERAGES_AKV           /* save for offline 1D bio model testing */  
#define AVERAGES_AKT           /* save for offline 1D bio model testing */  
#define AVERAGES_AKS 

#undef QCORRECTION
#undef LONGWAVE
#undef CLOUD

#undef SSH_TIDES
#undef UV_TIDES
#undef ADD_FSOBC
#undef ADD_M2OBC

#undef VERIFICATION
#undef STATIONS
