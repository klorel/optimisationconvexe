
INCLUDE_DIRECTORIES( ../prof .)

FILE(GLOB exe_src *.h *.cc)

ADD_EXECUTABLE( exe ${exe_src} )
TARGET_LINK_LIBRARIES(exe optimisationconvexe armadillo lapack blas)
