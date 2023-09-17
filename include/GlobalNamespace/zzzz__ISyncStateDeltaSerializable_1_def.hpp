#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct SyncStateId;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ISyncStateDeltaSerializable_1;
}
// Type: ::ISyncStateDeltaSerializable`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12909))
// CS Name: ISyncStateDeltaSerializable`1
class CORDL_TYPE ISyncStateDeltaSerializable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISyncStateDeltaSerializable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISyncStateDeltaSerializable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::SyncStateId __declspec(property(get=get_baseId, put=set_baseId))  baseId;

 int32_t __declspec(property(get=get_timeOffsetMs, put=set_timeOffsetMs))  timeOffsetMs;

 T __declspec(property(get=get_delta, put=set_delta))  delta;


// Methods

/// @brief Method get_baseId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::SyncStateId get_baseId() ;

/// @brief Method set_baseId addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_baseId(::GlobalNamespace::SyncStateId value) ;

/// @brief Method get_timeOffsetMs addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_timeOffsetMs() ;

/// @brief Method set_timeOffsetMs addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_timeOffsetMs(int32_t value) ;

/// @brief Method get_delta addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_delta() ;

/// @brief Method set_delta addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_delta(T value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISyncStateDeltaSerializable_1, "", "ISyncStateDeltaSerializable`1");
