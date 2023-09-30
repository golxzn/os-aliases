cmake_minimum_required(VERSION 3.25)

project(golxzn::aliases
	VERSION 1.0.0
	DESCRIPTION "Aliases for golxzn's projects."
	LANGUAGES C CXX
	HOMEPAGE_URL https://github.com/golxzn/aliases.git
)

file(GLOB_RECURSE headers CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/code/include/*.hpp)
set_source_files_properties(${headers} PROPERTIES HEADER_FILE_ONLY TRUE)

add_library(golxzn_aliases INTERFACE ${headers})
add_library(golxzn::aliases ALIAS golxzn_aliases)

target_include_directories(golxzn_aliases INTERFACE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)
target_compile_definitions(golxzn_aliases INTERFACE GOLXZN_ALIASES)

