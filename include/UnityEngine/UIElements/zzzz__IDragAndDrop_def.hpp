#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
// Type: UnityEngine.UIElements::IDragAndDrop
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7052))
// CS Name: UnityEngine.UIElements.IDragAndDrop
class CORDL_TYPE IDragAndDrop : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDragAndDrop() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDragAndDrop(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::UIElements::IDragAndDropData __declspec(property(get=get_data))  data;


// Methods

/// @brief Method StartDrag addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartDrag(::UnityEngine::UIElements::StartDragArgs args) ;

/// @brief Method get_data addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::IDragAndDropData get_data() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IDragAndDrop);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDragAndDrop, "UnityEngine.UIElements", "IDragAndDrop");
