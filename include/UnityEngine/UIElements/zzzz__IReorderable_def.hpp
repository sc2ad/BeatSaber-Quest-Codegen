#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class IReorderable;
}
// Type: UnityEngine.UIElements::IReorderable
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7054))
// CS Name: UnityEngine.UIElements.IReorderable
class CORDL_TYPE IReorderable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IReorderable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReorderable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_enableReordering, put=set_enableReordering))  enableReordering;


// Methods

/// @brief Method get_enableReordering addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_enableReordering() ;

/// @brief Method set_enableReordering addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_enableReordering(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IReorderable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IReorderable, "UnityEngine.UIElements", "IReorderable");
