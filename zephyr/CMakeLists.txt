if(CONFIG_QCBOR)
  zephyr_include_directories(../inc)

  zephyr_library()
  zephyr_library_compile_definitions(QCBOR_DISABLE_FLOAT_HW_USE)
  zephyr_library_sources(
    ../src/ieee754.c
    ../src/qcbor_decode.c
    ../src/qcbor_encode.c
    ../src/qcbor_err_to_str.c
    ../src/UsefulBuf.c
  )
endif()
