#
# Build emscripten/WASM Bindings
#

FIND_PACKAGE(Python3)
SET(PYTHON ${Python3_EXECUTABLE} CACHE STRING "Python path")
SET(EMSCRIPTEN_ROOT $ENV{EMSDK}/upstream/emscripten CACHE STRING "Emscripten path")
SET(CMAKE_TOOLCHAIN_FILE ${EMSCRIPTEN_ROOT}/cmake/Modules/Platform/Emscripten.cmake)

SET(PHYSX_SOURCE_DIR ${PHYSX_ROOT_DIR}/source)

SET(PHYSXWASM_INCLUDE_DIR ${PHYSX_ROOT_DIR}/include)
SET(EMCC_WASM_ARGS ${PHYSX_WASM_PTHREAD})

SET(PHYSX_TARGETS PhysX PhysXCharacterKinematic PhysXCommon PhysXCooking PhysXExtensions PhysXFoundation PhysXVehicle2 PhysXPvdSDK)
FOREACH(_TARGET ${PHYSX_TARGETS})
	LIST(APPEND PHYSX_LIBS $<TARGET_FILE:${_TARGET}>)
ENDFOREACH()

ADD_CUSTOM_COMMAND(
		OUTPUT physx5.wasm
		COMMAND emcc ${PHYSX_LIBS} ${EMCC_WASM_ARGS} -o physx5.wasm
		DEPENDS ${PHYSX_TARGETS}
		COMMENT "Building physx5 webassembly"
		VERBATIM
)