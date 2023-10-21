cmake_minimum_required(VERSION 3.25)

project(golxzn::os::aliases
	VERSION 1.0.3
	DESCRIPTION "Aliases for golxzn's projects."
	LANGUAGES C CXX
	HOMEPAGE_URL https://github.com/golxzn/aliases.git
)

file(GLOB_RECURSE headers CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/code/include/*.hpp)
set_source_files_properties(${headers} PROPERTIES HEADER_FILE_ONLY TRUE)

add_library(golxzn_os_aliases INTERFACE ${headers})
add_library(golxzn::os::aliases ALIAS golxzn_os_aliases)

set_target_properties(golxzn_os_aliases PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
	FOLDER "golxzn/os"
)
target_include_directories(golxzn_os_aliases INTERFACE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/code/include>
	$<INSTALL_INTERFACE:code/include>
)
target_compile_definitions(golxzn_os_aliases INTERFACE GOLXZN_OS_ALIASES)

if(DEFINED GOLXZN_CONFIG_DEFINITIONS)
	target_compile_definitions(golxzn_os_aliases INTERFACE ${GOLXZN_CONFIG_DEFINITIONS})
endif()

