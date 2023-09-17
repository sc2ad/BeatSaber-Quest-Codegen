#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Type: System.Collections.Generic::IComparer`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3812))
// CS Name: System.Collections.Generic.IComparer`1
class CORDL_TYPE IComparer_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IComparer_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComparer_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IComparer_1, "System.Collections.Generic", "IComparer`1");
