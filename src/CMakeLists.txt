FILE( GLOB SRCS al/[^.]*.cxx dll/[^.]*.cxx )
SET (eml_SRCS ${SRCS})

IF (BUILD_FOR_ECOS)
  # Copied some stuff from ECOS_ADD_EXECUTABLE macro, since there is no
  # ECOS_ADD_LIBRARY call
  ADD_DEFINITIONS(-D__ECOS__=1 -D__ECOS=1)
  SET(ECOS_DEFINITIONS -Wall -Wno-long-long -pipe -fno-builtin)

  SET (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wstrict-prototypes")
  SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Woverloaded-virtual -fno-rtti -Wctor-dtor-privacy -fno-strict-aliasing -fno-exceptions")
  
  # eCos only supports static libraries
  add_library(eml ${eml_SRCS})
  
  # arch specific headers
  FILE( GLOB ARCH_INCLS ${EML_SOURCE_DIR}/include/ethercat/arch-eCos/ethercat/[^.]*.h )
  INSTALL_FILES( /include/ethercat/arch-eCos/ FILES ${ETHERCAT_INCLS})
ENDIF (BUILD_FOR_ECOS)

IF (BUILD_FOR_RTNET)
  SET (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${XNPOSIX_USER_CFLAGS}")
  SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

  FILE( GLOB RTnet_SRCS arch/RTnet/[^.]*.c)
  SET (eml_SRCS "${eml_SRCS};${RTnet_SRCS}")
  
  # Settings for building a static library (.a)
  OPTION(BUILD_STATIC "Build EML as a static library." OFF)
  IF ( BUILD_STATIC )
    ADD_LIBRARY(eml-static STATIC ${eml_SRCS})
    SET_TARGET_PROPERTIES(eml-static
      PROPERTIES OUTPUT_NAME eml LINK_FLAGS "${XNPOSIX_USER_LDFLAGS}"
      CLEAN_DIRECT_OUTPUT 1)
    INSTALL_TARGETS(/lib eml-static)
  ENDIF ( BUILD_STATIC )

  # Settings for building a dynamic library (.so/.dll)
  OPTION(BUILD_DYNAMIC "Build EML as a dynamic library (Default)." ON)
  IF( BUILD_DYNAMIC)
    ADD_LIBRARY(eml-dynamic SHARED ${eml_SRCS})
    SET_TARGET_PROPERTIES(eml-dynamic
      PROPERTIES OUTPUT_NAME eml LINK_FLAGS "${XNPOSIX_USER_LDFLAGS}"
      CLEAN_DIRECT_OUTPUT 1)
    INSTALL_TARGETS(/lib eml-dynamic)
  ENDIF (BUILD_DYNAMIC)

  # arch specific headers
  FILE( GLOB ARCH_RTNET_INCLS ${EML_SOURCE_DIR}/include/ethercat/arch-RTnet/ethercat/[^.]*.h )
  INSTALL_FILES( /include/ethercat/ FILES ${ARCH_RTNET_INCLS})

ENDIF(BUILD_FOR_RTNET)

IF (BUILD_FOR_POSIX)
  include(GNUInstallDirs)
  FILE( GLOB posix_SRCS arch/posix/[^.]*.c)
  SET (eml_SRCS "${eml_SRCS};${posix_SRCS}")
  
  # Settings for building a static library (.a)
  OPTION(BUILD_STATIC "Build EML as a static library." OFF)
  IF ( BUILD_STATIC )
    ADD_LIBRARY(eml-static STATIC ${eml_SRCS})
    SET_TARGET_PROPERTIES(eml-static
      PROPERTIES OUTPUT_NAME eml LINK_FLAGS "${POSIX_USER_LDFLAGS}"
      CLEAN_DIRECT_OUTPUT 1)
    install(
      TARGETS eml-static
      EXPORT emlTargets
      DESTINATION ${CMAKE_INSTALL_LIBDIR})
  ENDIF ( BUILD_STATIC )

  # Settings for building a dynamic library (.so/.dll)
  OPTION(BUILD_DYNAMIC "Build EML as a dynamic library (Default)." ON)
  IF( BUILD_DYNAMIC)
    ADD_LIBRARY(eml-dynamic SHARED ${eml_SRCS})
    SET_TARGET_PROPERTIES(eml-dynamic
      PROPERTIES OUTPUT_NAME eml LINK_FLAGS "${POSIX_USER_LDFLAGS}"
      CLEAN_DIRECT_OUTPUT 1)
    install(
      TARGETS eml-dynamic
      EXPORT emlTargets
      DESTINATION ${CMAKE_INSTALL_LIBDIR})
    target_include_directories(eml-dynamic INTERFACE
      $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/eml>
    )
  ENDIF (BUILD_DYNAMIC)

  # arch specific headers
  FILE( GLOB ARCH_POSIX_INCLS ${EML_SOURCE_DIR}/include/ethercat/arch-RTnet/ethercat/[^.]*.h )
  install(FILES ${ARCH_POSIX_INCLS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/eml/ethercat/)

ENDIF(BUILD_FOR_POSIX)


# Also install header files
FILE( GLOB AL_INCLS ${EML_SOURCE_DIR}/include/al/[^.]*.h)
install(FILES ${AL_INCLS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/eml/al/)
FILE( GLOB DLL_INCLS ${EML_SOURCE_DIR}/include/dll/[^.]*.h)
install(FILES ${DLL_INCLS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/eml/dll/)
#FILE( GLOB ETHERCAT_INCLS ${EML_SOURCE_DIR}/include/ethercat/[^.]*.h )
#INSTALL_FILES( /include/ethercat/ FILES ${ETHERCAT_INCLS})

install(EXPORT emlTargets
    FILE EMLTargets.cmake
    NAMESPACE eml::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/eml)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "EMLConfigVersion.cmake"
    VERSION 1.8.15
    COMPATIBILITY AnyNewerVersion)

install(FILES "EMLConfig.cmake" "${CMAKE_CURRENT_BINARY_DIR}/EMLConfigVersion.cmake"
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/eml)
