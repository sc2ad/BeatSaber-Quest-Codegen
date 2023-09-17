#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
class IReorderable;
}
namespace UnityEngine::UIElements {
template<typename TArgs>
class IDragAndDropController_1;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
// Type: UnityEngine.UIElements::ICollectionDragAndDropController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7049))
// CS Name: UnityEngine.UIElements.ICollectionDragAndDropController
class CORDL_TYPE ICollectionDragAndDropController : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs>
constexpr operator  ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs>() const noexcept;

/// @brief Convert operator to ::UnityEngine::UIElements::IReorderable
constexpr operator  ::UnityEngine::UIElements::IReorderable() const noexcept;

~ICollectionDragAndDropController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICollectionDragAndDropController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ICollectionDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICollectionDragAndDropController, "UnityEngine.UIElements", "ICollectionDragAndDropController");
