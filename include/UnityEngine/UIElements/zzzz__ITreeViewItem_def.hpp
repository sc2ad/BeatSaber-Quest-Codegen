#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITreeViewItem;
}
// Type: UnityEngine.UIElements::ITreeViewItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7444))
// CS Name: UnityEngine.UIElements.ITreeViewItem
class CORDL_TYPE ITreeViewItem : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITreeViewItem() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITreeViewItem(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_id))  id;

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=get_children))  children;

 bool __declspec(property(get=get_hasChildren))  hasChildren;


// Methods

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_id() ;

/// @brief Method get_children addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem> get_children() ;

/// @brief Method get_hasChildren addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasChildren() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ITreeViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITreeViewItem, "UnityEngine.UIElements", "ITreeViewItem");
