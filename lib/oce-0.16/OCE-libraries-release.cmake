#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "TKernel" for configuration "Release"
set_property(TARGET TKernel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKernel PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "-lpthread;dl;-lm"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKernel.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKernel.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKernel )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKernel "${_IMPORT_PREFIX}/lib/libTKernel.so.9.0.0" )

# Import target "TKMath" for configuration "Release"
set_property(TARGET TKMath APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKMath PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKMath.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKMath.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKMath )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKMath "${_IMPORT_PREFIX}/lib/libTKMath.so.9.0.0" )

# Import target "TKAdvTools" for configuration "Release"
set_property(TARGET TKAdvTools APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKAdvTools PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKAdvTools.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKAdvTools.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKAdvTools )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKAdvTools "${_IMPORT_PREFIX}/lib/libTKAdvTools.so.9.0.0" )

# Import target "TKG2d" for configuration "Release"
set_property(TARGET TKG2d APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKG2d PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKMath"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKG2d.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKG2d.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKG2d )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKG2d "${_IMPORT_PREFIX}/lib/libTKG2d.so.9.0.0" )

# Import target "TKG3d" for configuration "Release"
set_property(TARGET TKG3d APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKG3d PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKMath;TKernel;TKG2d"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKG3d.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKG3d.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKG3d )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKG3d "${_IMPORT_PREFIX}/lib/libTKG3d.so.9.0.0" )

# Import target "TKGeomBase" for configuration "Release"
set_property(TARGET TKGeomBase APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKGeomBase PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKMath;TKG2d;TKG3d"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKGeomBase.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKGeomBase.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKGeomBase )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKGeomBase "${_IMPORT_PREFIX}/lib/libTKGeomBase.so.9.0.0" )

# Import target "TKBRep" for configuration "Release"
set_property(TARGET TKBRep APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKBRep PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKMath;TKernel;TKG2d;TKG3d;TKGeomBase"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKBRep.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKBRep.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKBRep )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKBRep "${_IMPORT_PREFIX}/lib/libTKBRep.so.9.0.0" )

# Import target "TKGeomAlgo" for configuration "Release"
set_property(TARGET TKGeomAlgo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKGeomAlgo PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKMath;TKG3d;TKG2d;TKGeomBase;TKBRep"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKGeomAlgo.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKGeomAlgo.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKGeomAlgo )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKGeomAlgo "${_IMPORT_PREFIX}/lib/libTKGeomAlgo.so.9.0.0" )

# Import target "TKTopAlgo" for configuration "Release"
set_property(TARGET TKTopAlgo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKTopAlgo PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKMath;TKernel;TKG2d;TKG3d;TKGeomBase;TKBRep;TKGeomAlgo"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKTopAlgo.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKTopAlgo.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKTopAlgo )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKTopAlgo "${_IMPORT_PREFIX}/lib/libTKTopAlgo.so.9.0.0" )

# Import target "TKPrim" for configuration "Release"
set_property(TARGET TKPrim APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKPrim PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKG2d;TKGeomBase;TKG3d;TKTopAlgo"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKPrim.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKPrim.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKPrim )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKPrim "${_IMPORT_PREFIX}/lib/libTKPrim.so.9.0.0" )

# Import target "TKBO" for configuration "Release"
set_property(TARGET TKBO APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKBO PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKTopAlgo;TKMath;TKernel;TKG2d;TKG3d;TKGeomAlgo;TKGeomBase"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKBO.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKBO.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKBO )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKBO "${_IMPORT_PREFIX}/lib/libTKBO.so.9.0.0" )

# Import target "TKHLR" for configuration "Release"
set_property(TARGET TKHLR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKHLR PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKGeomBase;TKG2d;TKG3d;TKGeomAlgo;TKTopAlgo"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKHLR.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKHLR.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKHLR )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKHLR "${_IMPORT_PREFIX}/lib/libTKHLR.so.9.0.0" )

# Import target "TKMesh" for configuration "Release"
set_property(TARGET TKMesh APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKMesh PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKMath;TKernel;TKG2d;TKG3d;TKGeomBase;TKTopAlgo;TKGeomAlgo"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKMesh.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKMesh.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKMesh )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKMesh "${_IMPORT_PREFIX}/lib/libTKMesh.so.9.0.0" )

# Import target "TKShHealing" for configuration "Release"
set_property(TARGET TKShHealing APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKShHealing PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKG2d;TKTopAlgo;TKG3d;TKGeomBase;TKGeomAlgo"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKShHealing.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKShHealing.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKShHealing )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKShHealing "${_IMPORT_PREFIX}/lib/libTKShHealing.so.9.0.0" )

# Import target "TKXMesh" for configuration "Release"
set_property(TARGET TKXMesh APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXMesh PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKMath;TKernel;TKG2d;TKMesh"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXMesh.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXMesh.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXMesh )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXMesh "${_IMPORT_PREFIX}/lib/libTKXMesh.so.9.0.0" )

# Import target "TKBool" for configuration "Release"
set_property(TARGET TKBool APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKBool PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKTopAlgo;TKMath;TKernel;TKPrim;TKG2d;TKG3d;TKShHealing;TKGeomBase;TKGeomAlgo;TKBO"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKBool.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKBool.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKBool )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKBool "${_IMPORT_PREFIX}/lib/libTKBool.so.9.0.0" )

# Import target "TKFillet" for configuration "Release"
set_property(TARGET TKFillet APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKFillet PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKGeomBase;TKGeomAlgo;TKG2d;TKTopAlgo;TKG3d;TKBool;TKShHealing"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKFillet.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKFillet.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKFillet )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKFillet "${_IMPORT_PREFIX}/lib/libTKFillet.so.9.0.0" )

# Import target "TKFeat" for configuration "Release"
set_property(TARGET TKFeat APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKFeat PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKTopAlgo;TKGeomAlgo;TKMath;TKernel;TKGeomBase;TKPrim;TKG2d;TKBO;TKG3d;TKBool"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKFeat.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKFeat.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKFeat )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKFeat "${_IMPORT_PREFIX}/lib/libTKFeat.so.9.0.0" )

# Import target "TKOffset" for configuration "Release"
set_property(TARGET TKOffset APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKOffset PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKFillet;TKBRep;TKTopAlgo;TKMath;TKernel;TKGeomBase;TKG2d;TKG3d;TKGeomAlgo;TKShHealing;TKBO;TKPrim;TKBool"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKOffset.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKOffset.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKOffset )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKOffset "${_IMPORT_PREFIX}/lib/libTKOffset.so.9.0.0" )

# Import target "TKService" for configuration "Release"
set_property(TARGET TKService APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKService PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKMath;TKernel;TKBRep;TKShHealing;TKGeomBase;TKGeomAlgo;TKG2d;TKG3d;TKTopAlgo;/usr/lib/x86_64-linux-gnu/libSM.so;/usr/lib/x86_64-linux-gnu/libICE.so;/usr/lib/x86_64-linux-gnu/libX11.so;/usr/lib/x86_64-linux-gnu/libXext.so;/usr/lib/x86_64-linux-gnu/libGLU.so;/usr/lib/x86_64-linux-gnu/libGL.so;/usr/lib/x86_64-linux-gnu/libSM.so;/usr/lib/x86_64-linux-gnu/libICE.so;/usr/lib/x86_64-linux-gnu/libX11.so;/usr/lib/x86_64-linux-gnu/libXext.so;/usr/lib/x86_64-linux-gnu/libfreetype.so"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKService.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKService.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKService )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKService "${_IMPORT_PREFIX}/lib/libTKService.so.9.0.0" )

# Import target "TKV3d" for configuration "Release"
set_property(TARGET TKV3d APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKV3d PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKMath;TKernel;TKService;TKShHealing;TKTopAlgo;TKG2d;TKG3d;TKGeomBase;TKMesh;TKGeomAlgo;TKHLR;/usr/lib/x86_64-linux-gnu/libfreetype.so"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKV3d.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKV3d.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKV3d )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKV3d "${_IMPORT_PREFIX}/lib/libTKV3d.so.9.0.0" )

# Import target "TKOpenGl" for configuration "Release"
set_property(TARGET TKOpenGl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKOpenGl PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKService;TKV3d;/usr/lib/x86_64-linux-gnu/libGLU.so;/usr/lib/x86_64-linux-gnu/libGL.so;/usr/lib/x86_64-linux-gnu/libSM.so;/usr/lib/x86_64-linux-gnu/libICE.so;/usr/lib/x86_64-linux-gnu/libX11.so;/usr/lib/x86_64-linux-gnu/libXext.so;/usr/lib/x86_64-linux-gnu/libfreetype.so"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKOpenGl.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKOpenGl.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKOpenGl )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKOpenGl "${_IMPORT_PREFIX}/lib/libTKOpenGl.so.9.0.0" )

# Import target "TKMeshVS" for configuration "Release"
set_property(TARGET TKMeshVS APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKMeshVS PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKV3d;TKMath;TKService;TKernel;TKG3d;TKG2d"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKMeshVS.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKMeshVS.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKMeshVS )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKMeshVS "${_IMPORT_PREFIX}/lib/libTKMeshVS.so.9.0.0" )

# Import target "TKNIS" for configuration "Release"
set_property(TARGET TKNIS APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKNIS PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKV3d;TKMath;TKernel;TKService;TKG2d;TKG3d;TKMesh;TKOpenGl;/usr/lib/x86_64-linux-gnu/libGLU.so;/usr/lib/x86_64-linux-gnu/libGL.so;/usr/lib/x86_64-linux-gnu/libSM.so;/usr/lib/x86_64-linux-gnu/libICE.so;/usr/lib/x86_64-linux-gnu/libX11.so;/usr/lib/x86_64-linux-gnu/libXext.so"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKNIS.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKNIS.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKNIS )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKNIS "${_IMPORT_PREFIX}/lib/libTKNIS.so.9.0.0" )

# Import target "TKVoxel" for configuration "Release"
set_property(TARGET TKVoxel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKVoxel PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKV3d;TKMath;TKService;TKGeomBase;TKG2d;TKTopAlgo;TKG3d;TKMesh;/usr/lib/x86_64-linux-gnu/libGLU.so;/usr/lib/x86_64-linux-gnu/libGL.so;/usr/lib/x86_64-linux-gnu/libSM.so;/usr/lib/x86_64-linux-gnu/libICE.so;/usr/lib/x86_64-linux-gnu/libX11.so;/usr/lib/x86_64-linux-gnu/libXext.so"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKVoxel.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKVoxel.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKVoxel )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKVoxel "${_IMPORT_PREFIX}/lib/libTKVoxel.so.9.0.0" )

# Import target "TKCDF" for configuration "Release"
set_property(TARGET TKCDF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKCDF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKCDF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKCDF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKCDF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKCDF "${_IMPORT_PREFIX}/lib/libTKCDF.so.9.0.0" )

# Import target "PTKernel" for configuration "Release"
set_property(TARGET PTKernel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(PTKernel PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libPTKernel.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libPTKernel.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS PTKernel )
list(APPEND _IMPORT_CHECK_FILES_FOR_PTKernel "${_IMPORT_PREFIX}/lib/libPTKernel.so.9.0.0" )

# Import target "TKLCAF" for configuration "Release"
set_property(TARGET TKLCAF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKLCAF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;TKernel"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKLCAF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKLCAF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKLCAF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKLCAF "${_IMPORT_PREFIX}/lib/libTKLCAF.so.9.0.0" )

# Import target "FWOSPlugin" for configuration "Release"
set_property(TARGET FWOSPlugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(FWOSPlugin PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKCDF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libFWOSPlugin.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libFWOSPlugin.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS FWOSPlugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_FWOSPlugin "${_IMPORT_PREFIX}/lib/libFWOSPlugin.so.9.0.0" )

# Import target "TKPShape" for configuration "Release"
set_property(TARGET TKPShape APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKPShape PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKMath;TKernel;TKG2d;TKG3d;PTKernel;TKBRep"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKPShape.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKPShape.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKPShape )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKPShape "${_IMPORT_PREFIX}/lib/libTKPShape.so.9.0.0" )

# Import target "TKBinL" for configuration "Release"
set_property(TARGET TKBinL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKBinL PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;TKernel;TKLCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKBinL.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKBinL.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKBinL )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKBinL "${_IMPORT_PREFIX}/lib/libTKBinL.so.9.0.0" )

# Import target "TKXmlL" for configuration "Release"
set_property(TARGET TKXmlL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXmlL PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;TKernel;TKMath;TKLCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXmlL.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXmlL.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXmlL )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXmlL "${_IMPORT_PREFIX}/lib/libTKXmlL.so.9.0.0" )

# Import target "TKPLCAF" for configuration "Release"
set_property(TARGET TKPLCAF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKPLCAF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;PTKernel;TKernel;TKLCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKPLCAF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKPLCAF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKPLCAF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKPLCAF "${_IMPORT_PREFIX}/lib/libTKPLCAF.so.9.0.0" )

# Import target "TKTObj" for configuration "Release"
set_property(TARGET TKTObj APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKTObj PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;TKernel;TKMath;TKLCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKTObj.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKTObj.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKTObj )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKTObj "${_IMPORT_PREFIX}/lib/libTKTObj.so.9.0.0" )

# Import target "TKShapeSchema" for configuration "Release"
set_property(TARGET TKShapeSchema APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKShapeSchema PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKG2d;PTKernel;TKMath;TKCDF;TKPShape"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKShapeSchema.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKShapeSchema.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKShapeSchema )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKShapeSchema "${_IMPORT_PREFIX}/lib/libTKShapeSchema.so.9.0.0" )

# Import target "TKStdLSchema" for configuration "Release"
set_property(TARGET TKStdLSchema APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKStdLSchema PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;PTKernel;TKernel;TKShapeSchema;TKLCAF;TKPLCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKStdLSchema.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKStdLSchema.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKStdLSchema )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKStdLSchema "${_IMPORT_PREFIX}/lib/libTKStdLSchema.so.9.0.0" )

# Import target "TKCAF" for configuration "Release"
set_property(TARGET TKCAF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKCAF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKGeomBase;TKBRep;TKTopAlgo;TKMath;TKService;TKG2d;TKG3d;TKCDF;TKLCAF;TKV3d;TKBO"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKCAF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKCAF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKCAF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKCAF "${_IMPORT_PREFIX}/lib/libTKCAF.so.9.0.0" )

# Import target "TKBin" for configuration "Release"
set_property(TARGET TKBin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKBin PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKMath;TKernel;TKG2d;TKG3d;TKCAF;TKCDF;TKLCAF;TKV3d;TKBinL"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKBin.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKBin.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKBin )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKBin "${_IMPORT_PREFIX}/lib/libTKBin.so.9.0.0" )

# Import target "TKXml" for configuration "Release"
set_property(TARGET TKXml APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXml PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;TKernel;TKV3d;TKMath;TKBRep;TKG2d;TKGeomBase;TKG3d;TKLCAF;TKCAF;TKXmlL"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXml.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXml.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXml )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXml "${_IMPORT_PREFIX}/lib/libTKXml.so.9.0.0" )

# Import target "TKPCAF" for configuration "Release"
set_property(TARGET TKPCAF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKPCAF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "PTKernel;TKBRep;TKMath;TKernel;TKCDF;TKG2d;TKV3d;TKService;TKG3d;TKPShape;TKCAF;TKLCAF;TKPLCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKPCAF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKPCAF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKPCAF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKPCAF "${_IMPORT_PREFIX}/lib/libTKPCAF.so.9.0.0" )

# Import target "TKBinTObj" for configuration "Release"
set_property(TARGET TKBinTObj APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKBinTObj PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;TKernel;TKTObj;TKMath;TKLCAF;TKBinL"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKBinTObj.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKBinTObj.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKBinTObj )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKBinTObj "${_IMPORT_PREFIX}/lib/libTKBinTObj.so.9.0.0" )

# Import target "TKXmlTObj" for configuration "Release"
set_property(TARGET TKXmlTObj APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXmlTObj PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;TKernel;TKTObj;TKMath;TKLCAF;TKXmlL"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXmlTObj.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXmlTObj.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXmlTObj )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXmlTObj "${_IMPORT_PREFIX}/lib/libTKXmlTObj.so.9.0.0" )

# Import target "TKStdSchema" for configuration "Release"
set_property(TARGET TKStdSchema APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKStdSchema PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKCDF;PTKernel;TKPLCAF;TKernel;TKCAF;TKShapeSchema;TKLCAF;TKStdLSchema;TKG3d;TKPShape;TKMath;TKG2d;TKPCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKStdSchema.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKStdSchema.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKStdSchema )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKStdSchema "${_IMPORT_PREFIX}/lib/libTKStdSchema.so.9.0.0" )

# Import target "TKSTL" for configuration "Release"
set_property(TARGET TKSTL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKSTL PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKMath;TKBRep;TKG2d;TKG3d;TKMesh;TKTopAlgo"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKSTL.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKSTL.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKSTL )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKSTL "${_IMPORT_PREFIX}/lib/libTKSTL.so.9.0.0" )

# Import target "TKXSBase" for configuration "Release"
set_property(TARGET TKXSBase APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXSBase PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKG2d;TKG3d;TKTopAlgo;TKGeomBase;TKShHealing"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXSBase.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXSBase.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXSBase )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXSBase "${_IMPORT_PREFIX}/lib/libTKXSBase.so.9.0.0" )

# Import target "TKSTEPBase" for configuration "Release"
set_property(TARGET TKSTEPBase APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKSTEPBase PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKXSBase;TKMath"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKSTEPBase.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKSTEPBase.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKSTEPBase )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKSTEPBase "${_IMPORT_PREFIX}/lib/libTKSTEPBase.so.9.0.0" )

# Import target "TKIGES" for configuration "Release"
set_property(TARGET TKIGES APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKIGES PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKTopAlgo;TKShHealing;TKG2d;TKG3d;TKGeomBase;TKGeomAlgo;TKPrim;TKBool;TKOffset;TKXSBase"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKIGES.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKIGES.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKIGES )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKIGES "${_IMPORT_PREFIX}/lib/libTKIGES.so.9.0.0" )

# Import target "TKSTEPAttr" for configuration "Release"
set_property(TARGET TKSTEPAttr APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKSTEPAttr PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKXSBase;TKSTEPBase"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKSTEPAttr.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKSTEPAttr.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKSTEPAttr )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKSTEPAttr "${_IMPORT_PREFIX}/lib/libTKSTEPAttr.so.9.0.0" )

# Import target "TKSTEP209" for configuration "Release"
set_property(TARGET TKSTEP209 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKSTEP209 PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKXSBase;TKSTEPBase"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKSTEP209.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKSTEP209.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKSTEP209 )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKSTEP209 "${_IMPORT_PREFIX}/lib/libTKSTEP209.so.9.0.0" )

# Import target "TKSTEP" for configuration "Release"
set_property(TARGET TKSTEP APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKSTEP PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKernel;TKSTEPAttr;TKSTEP209;TKSTEPBase;TKBRep;TKMath;TKG2d;TKShHealing;TKTopAlgo;TKG3d;TKGeomBase;TKGeomAlgo;TKXSBase"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKSTEP.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKSTEP.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKSTEP )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKSTEP "${_IMPORT_PREFIX}/lib/libTKSTEP.so.9.0.0" )

# Import target "TKVRML" for configuration "Release"
set_property(TARGET TKVRML APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKVRML PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKTopAlgo;TKMath;TKGeomBase;TKernel;TKPrim;TKG2d;TKG3d;TKMesh;TKHLR;TKService;TKGeomAlgo;TKV3d"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKVRML.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKVRML.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKVRML )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKVRML "${_IMPORT_PREFIX}/lib/libTKVRML.so.9.0.0" )

# Import target "TKXCAF" for configuration "Release"
set_property(TARGET TKXCAF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXCAF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKService;TKG2d;TKTopAlgo;TKV3d;TKCDF;TKLCAF;TKG3d;TKCAF"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXCAF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXCAF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXCAF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXCAF "${_IMPORT_PREFIX}/lib/libTKXCAF.so.9.0.0" )

# Import target "TKXCAFSchema" for configuration "Release"
set_property(TARGET TKXCAFSchema APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXCAFSchema PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKPLCAF;TKernel;PTKernel;TKMath;TKPShape;TKCDF;TKShapeSchema;TKLCAF;TKPCAF;TKXCAF;TKStdLSchema;TKStdSchema"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXCAFSchema.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXCAFSchema.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXCAFSchema )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXCAFSchema "${_IMPORT_PREFIX}/lib/libTKXCAFSchema.so.9.0.0" )

# Import target "TKXmlXCAF" for configuration "Release"
set_property(TARGET TKXmlXCAF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXmlXCAF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKXmlL;TKBRep;TKCDF;TKMath;TKernel;TKG2d;TKGeomBase;TKCAF;TKG3d;TKLCAF;TKXCAF;TKXml"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXmlXCAF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXmlXCAF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXmlXCAF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXmlXCAF "${_IMPORT_PREFIX}/lib/libTKXmlXCAF.so.9.0.0" )

# Import target "TKBinXCAF" for configuration "Release"
set_property(TARGET TKBinXCAF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKBinXCAF PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKXCAF;TKMath;TKernel;TKBinL;TKG2d;TKCAF;TKCDF;TKG3d;TKLCAF;TKBin"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKBinXCAF.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKBinXCAF.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKBinXCAF )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKBinXCAF "${_IMPORT_PREFIX}/lib/libTKBinXCAF.so.9.0.0" )

# Import target "TKXDEIGES" for configuration "Release"
set_property(TARGET TKXDEIGES APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXDEIGES PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKernel;TKMath;TKXSBase;TKCDF;TKLCAF;TKG2d;TKXCAF;TKIGES"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXDEIGES.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXDEIGES.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXDEIGES )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXDEIGES "${_IMPORT_PREFIX}/lib/libTKXDEIGES.so.9.0.0" )

# Import target "TKXDESTEP" for configuration "Release"
set_property(TARGET TKXDESTEP APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(TKXDESTEP PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TKBRep;TKSTEPAttr;TKernel;TKMath;TKXSBase;TKG2d;TKCAF;TKSTEPBase;TKCDF;TKLCAF;TKG3d;TKXCAF;TKSTEP"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTKXDESTEP.so.9.0.0"
  IMPORTED_SONAME_RELEASE "libTKXDESTEP.so.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS TKXDESTEP )
list(APPEND _IMPORT_CHECK_FILES_FOR_TKXDESTEP "${_IMPORT_PREFIX}/lib/libTKXDESTEP.so.9.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
