#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IPoolablePacket;
}
// Type: ::IPoolablePacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12748))
// CS Name: IPoolablePacket
class CORDL_TYPE IPoolablePacket : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPoolablePacket() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPoolablePacket(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IPoolablePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPoolablePacket, "", "IPoolablePacket");
