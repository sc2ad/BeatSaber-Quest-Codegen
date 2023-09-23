#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerObservable;
}
// Type: ::IMultiplayerObservable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5243))
// CS Name: IMultiplayerObservable
class CORDL_TYPE IMultiplayerObservable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMultiplayerObservable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMultiplayerObservable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 bool __declspec(property(get=get_isFailed))  isFailed;


// Methods

/// @brief Method get_offsetSyncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_offsetSyncTime() ;

/// @brief Method get_isFailed addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isFailed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IMultiplayerObservable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerObservable, "", "IMultiplayerObservable");
