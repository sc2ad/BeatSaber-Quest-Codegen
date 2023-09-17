#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Type: UnityEngine.UIElements::IListDragAndDropArgs
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7039))
// CS Name: UnityEngine.UIElements.IListDragAndDropArgs
class CORDL_TYPE IListDragAndDropArgs : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IListDragAndDropArgs() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IListDragAndDropArgs(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_insertAtIndex))  insertAtIndex;

 ::UnityEngine::UIElements::IDragAndDropData __declspec(property(get=get_dragAndDropData))  dragAndDropData;

 ::UnityEngine::UIElements::DragAndDropPosition __declspec(property(get=get_dragAndDropPosition))  dragAndDropPosition;


// Methods

/// @brief Method get_insertAtIndex addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_insertAtIndex() ;

/// @brief Method get_dragAndDropData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::IDragAndDropData get_dragAndDropData() ;

/// @brief Method get_dragAndDropPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::DragAndDropPosition get_dragAndDropPosition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IListDragAndDropArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IListDragAndDropArgs, "UnityEngine.UIElements", "IListDragAndDropArgs");
