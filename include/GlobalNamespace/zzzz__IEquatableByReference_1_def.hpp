#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class IEquatableByReference_1;
}
// Type: ::IEquatableByReference`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12727))
// CS Name: IEquatableByReference`1
class CORDL_TYPE IEquatableByReference_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEquatableByReference_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEquatableByReference_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(ByRef<T> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IEquatableByReference_1, "", "IEquatableByReference`1");
