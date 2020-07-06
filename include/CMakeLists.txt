set(libfoo_SRCS
	lru.h
	)

# Declare the library
add_library(lrulib STATIC
	${libfoo_SRCS}
	)

# Specify here the include directories exported
# by this library
target_include_directories(lrulib PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
	)
