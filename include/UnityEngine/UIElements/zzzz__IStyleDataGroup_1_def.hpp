#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
// Type: UnityEngine.UIElements::IStyleDataGroup`1
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7455))
// CS Name: UnityEngine.UIElements.IStyleDataGroup`1
class CORDL_TYPE IStyleDataGroup_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStyleDataGroup_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStyleDataGroup_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
 T Copy() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyFrom(ByRef<T> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IStyleDataGroup_1, "UnityEngine.UIElements", "IStyleDataGroup`1");
