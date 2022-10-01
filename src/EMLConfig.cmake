include(CMakeFindDependencyMacro)
include(${CMAKE_CURRENT_LIST_DIR}/EMLTargets.cmake)

get_target_property(EML_INCLUDE_DIRS eml::eml-dynamic INTERFACE_INCLUDE_DIRECTORIES)
set(EML_LIBRARIES eml::eml-dynamic)
