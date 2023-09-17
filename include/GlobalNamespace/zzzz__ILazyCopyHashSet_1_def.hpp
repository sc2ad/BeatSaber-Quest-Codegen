#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
// Type: ::ILazyCopyHashSet`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10545))
// CS Name: ILazyCopyHashSet`1
class CORDL_TYPE ILazyCopyHashSet_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILazyCopyHashSet_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILazyCopyHashSet_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 void Add(T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ILazyCopyHashSet_1, "", "ILazyCopyHashSet`1");
