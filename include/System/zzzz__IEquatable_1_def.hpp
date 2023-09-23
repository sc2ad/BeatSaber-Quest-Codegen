#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System {
template<typename T>
class IEquatable_1;
}
// Type: System::IEquatable`1
namespace System {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2415))
// CS Name: System.IEquatable`1
class CORDL_TYPE IEquatable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEquatable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEquatable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(T other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IEquatable_1, "System", "IEquatable`1");
