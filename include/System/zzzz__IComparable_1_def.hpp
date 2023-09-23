#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
template<typename T>
class IComparable_1;
}
// Type: System::IComparable`1
namespace System {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2411))
// CS Name: System.IComparable`1
class CORDL_TYPE IComparable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IComparable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComparable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareTo(T other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IComparable_1, "System", "IComparable`1");
