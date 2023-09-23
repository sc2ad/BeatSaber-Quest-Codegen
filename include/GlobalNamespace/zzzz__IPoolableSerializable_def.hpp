#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class IPoolableSerializable;
}
// Type: ::IPoolableSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15102))
// CS Name: IPoolableSerializable
class CORDL_TYPE IPoolableSerializable : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

~IPoolableSerializable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPoolableSerializable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Retain addr 0x0 size 0xffffffffffffffff virtual true final false
 void Retain() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IPoolableSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IPoolableSerializable, "", "IPoolableSerializable");
