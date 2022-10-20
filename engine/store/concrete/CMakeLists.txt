add_library(fibonacci.engine.store.concrete OBJECT
			SimpleHistoryStore.cpp
			SimpleStatisticsStore.cpp)

target_link_libraries(fibonacci.engine.store.concrete fibonacci.engine)
target_link_libraries(fibonacci.engine.store.concrete fibonacci.engine.store)