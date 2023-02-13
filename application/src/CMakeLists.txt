add_executable(DVID_TestApp main.cpp)

target_link_directories(DVID_TestApp PUBLIC "/usr/local/lib/DVID")
target_link_libraries(DVID_TestApp DVID_Math)