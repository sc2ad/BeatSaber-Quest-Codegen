#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
template<typename TArgs>
class IDragAndDropController_1;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class IReorderable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseReorderableDragAndDropController;
}
// Type: UnityEngine.UIElements::BaseReorderableDragAndDropController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7038))
// CS Name: UnityEngine.UIElements.BaseReorderableDragAndDropController
class CORDL_TYPE BaseReorderableDragAndDropController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::ICollectionDragAndDropController
constexpr operator  ::UnityEngine::UIElements::ICollectionDragAndDropController() const noexcept;

/// @brief Convert operator to ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs>
constexpr operator  ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs>() const noexcept;

/// @brief Convert operator to ::UnityEngine::UIElements::IReorderable
constexpr operator  ::UnityEngine::UIElements::IReorderable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BaseReorderableDragAndDropController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseReorderableDragAndDropController", modifiers: " const&", def_value: None }]
constexpr BaseReorderableDragAndDropController(BaseReorderableDragAndDropController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseReorderableDragAndDropController", modifiers: "&&", def_value: None }]
constexpr BaseReorderableDragAndDropController(BaseReorderableDragAndDropController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseReorderableDragAndDropController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseReorderableDragAndDropController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseReorderableDragAndDropController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseReorderableDragAndDropController& operator=(BaseReorderableDragAndDropController&& o) noexcept = default;
  constexpr BaseReorderableDragAndDropController& operator=(BaseReorderableDragAndDropController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::BaseVerticalCollectionView __declspec(property(get=__get_m_View, put=__set_m_View))  m_View;

constexpr void __set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView value) ;

constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView __get_m_View() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_SelectedIndices, put=__set_m_SelectedIndices))  m_SelectedIndices;

constexpr void __set_m_SelectedIndices(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get_m_SelectedIndices() const;

 bool __declspec(property(get=__get__enableReordering_k__BackingField, put=__set__enableReordering_k__BackingField))  _enableReordering_k__BackingField;

constexpr void __set__enableReordering_k__BackingField(bool value) ;

constexpr bool __get__enableReordering_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_enableReordering, put=set_enableReordering))  enableReordering;


// Methods

// Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView", modifiers: "", def_value: None }]
explicit BaseReorderableDragAndDropController(::UnityEngine::UIElements::BaseVerticalCollectionView view) ;

/// @brief Method .ctor addr 0x2c9025c size 0x30 virtual false final false
 void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView view) ;

/// @brief Method get_enableReordering addr 0x2c906b0 size 0x8 virtual true final true
 bool get_enableReordering() ;

/// @brief Method set_enableReordering addr 0x2c906b8 size 0xc virtual true final true
 void set_enableReordering(bool value) ;

/// @brief Method CanStartDrag addr 0x2c906c4 size 0x8 virtual true final false
 bool CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t> itemIndices) ;

/// @brief Method SetupDragAndDrop addr 0x2c906cc size 0x5d4 virtual true final false
 ::UnityEngine::UIElements::StartDragArgs SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t> itemIndices, bool skipText) ;

/// @brief Method HandleDragAndDrop addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs args) ;

/// @brief Method OnDrop addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::BaseReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseReorderableDragAndDropController, "UnityEngine.UIElements", "BaseReorderableDragAndDropController");
