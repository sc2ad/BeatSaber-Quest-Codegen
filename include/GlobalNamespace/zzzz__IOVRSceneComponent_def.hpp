#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IOVRSceneComponent;
}
// Type: ::IOVRSceneComponent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8814))
// CS Name: IOVRSceneComponent
class CORDL_TYPE IOVRSceneComponent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IOVRSceneComponent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOVRSceneComponent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IOVRSceneComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IOVRSceneComponent, "", "IOVRSceneComponent");
