#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class IPacketPool;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
// Type: ::IPacketPool`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12750))
// CS Name: IPacketPool`1
class CORDL_TYPE IPacketPool_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IPacketPool
constexpr operator  ::GlobalNamespace::IPacketPool() const noexcept;

~IPacketPool_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPacketPool_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Obtain addr 0x0 size 0xffffffffffffffff virtual true final false
 T Obtain() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release(T t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IPacketPool_1, "", "IPacketPool`1");
