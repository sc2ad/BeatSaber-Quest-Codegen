#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TArgs>
class IDragAndDropController_1;
}
// Type: UnityEngine.UIElements::IDragAndDropController`1
namespace UnityEngine::UIElements {
// cpp template
template<typename TArgs>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7042))
// CS Name: UnityEngine.UIElements.IDragAndDropController`1
class CORDL_TYPE IDragAndDropController_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDragAndDropController_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDragAndDropController_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CanStartDrag addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t> itemIndices) ;

/// @brief Method SetupDragAndDrop addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::StartDragArgs SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t> itemIndices, bool skipText) ;

/// @brief Method HandleDragAndDrop addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(TArgs args) ;

/// @brief Method OnDrop addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDrop(TArgs args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IDragAndDropController_1, "UnityEngine.UIElements", "IDragAndDropController`1");
