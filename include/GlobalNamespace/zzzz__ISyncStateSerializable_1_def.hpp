#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace GlobalNamespace {
struct SyncStateId;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ISyncStateSerializable_1;
}
// Type: ::ISyncStateSerializable`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12910))
// CS Name: ISyncStateSerializable`1
class CORDL_TYPE ISyncStateSerializable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISyncStateSerializable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISyncStateSerializable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::SyncStateId __declspec(property(get=get_id, put=set_id))  id;

 float_t __declspec(property(get=get_time, put=set_time))  time;

 T __declspec(property(get=get_state, put=set_state))  state;


// Methods

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::SyncStateId get_id() ;

/// @brief Method set_id addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_id(GlobalNamespace::SyncStateId value) ;

/// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_time() ;

/// @brief Method set_time addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_time(float_t value) ;

/// @brief Method get_state addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_state() ;

/// @brief Method set_state addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_state(T value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ISyncStateSerializable_1, "", "ISyncStateSerializable`1");
