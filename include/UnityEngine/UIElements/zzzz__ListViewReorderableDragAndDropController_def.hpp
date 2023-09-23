#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_def.hpp"
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewReorderableDragAndDropController;
}
// Type: UnityEngine.UIElements::ListViewReorderableDragAndDropController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7037))
// CS Name: UnityEngine.UIElements.ListViewReorderableDragAndDropController
class CORDL_TYPE ListViewReorderableDragAndDropController : public UnityEngine::UIElements::BaseReorderableDragAndDropController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ListViewReorderableDragAndDropController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewReorderableDragAndDropController", modifiers: " const&", def_value: None }]
constexpr ListViewReorderableDragAndDropController(ListViewReorderableDragAndDropController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewReorderableDragAndDropController", modifiers: "&&", def_value: None }]
constexpr ListViewReorderableDragAndDropController(ListViewReorderableDragAndDropController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListViewReorderableDragAndDropController(void* ptr) noexcept : UnityEngine::UIElements::BaseReorderableDragAndDropController(ptr) {
}


  constexpr ListViewReorderableDragAndDropController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListViewReorderableDragAndDropController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListViewReorderableDragAndDropController& operator=(ListViewReorderableDragAndDropController&& o) noexcept = default;
  constexpr ListViewReorderableDragAndDropController& operator=(ListViewReorderableDragAndDropController const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::ListView __declspec(property(get=__get_m_ListView, put=__set_m_ListView))  m_ListView;

constexpr void __set_m_ListView(UnityEngine::UIElements::ListView value) ;

constexpr UnityEngine::UIElements::ListView __get_m_ListView() const;


// Methods

// Ctor Parameters [CppParam { name: "view", ty: "UnityEngine::UIElements::ListView", modifiers: "", def_value: None }]
explicit ListViewReorderableDragAndDropController(UnityEngine::UIElements::ListView view) ;

/// @brief Method .ctor addr 0x2c90228 size 0x34 virtual false final false
 void _ctor(UnityEngine::UIElements::ListView view) ;

/// @brief Method HandleDragAndDrop addr 0x2c9028c size 0x19c virtual true final false
 UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(UnityEngine::UIElements::IListDragAndDropArgs args) ;

/// @brief Method OnDrop addr 0x2c90428 size 0x288 virtual true final false
 void OnDrop(UnityEngine::UIElements::IListDragAndDropArgs args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ListViewReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ListViewReorderableDragAndDropController, "UnityEngine.UIElements", "ListViewReorderableDragAndDropController");
