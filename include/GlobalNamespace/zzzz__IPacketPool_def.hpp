#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class IPoolablePacket;
}
// Forward declare root types
namespace GlobalNamespace {
class IPacketPool;
}
// Type: ::IPacketPool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12749))
// CS Name: IPacketPool
class CORDL_TYPE IPacketPool : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPacketPool() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPacketPool(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release(GlobalNamespace::IPoolablePacket t) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual true final false
 void Fill() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IPacketPool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IPacketPool, "", "IPacketPool");
