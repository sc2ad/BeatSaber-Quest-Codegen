#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__ListViewDragger__DragPosition;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
struct ListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__ListViewDragger__DragPosition;
}
// Type: ::DragPosition
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7045))
// CS Name: UnityEngine.UIElements.ListViewDragger::DragPosition
struct CORDL_TYPE UnityEngine__UIElements__ListViewDragger__DragPosition : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition>() const;

// Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "recycledItem", ty: "UnityEngine::UIElements::ReusableCollectionItem", modifiers: "", def_value: None }, CppParam { name: "dragAndDropPosition", ty: "UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__ListViewDragger__DragPosition(int32_t insertAtIndex, UnityEngine::UIElements::ReusableCollectionItem recycledItem, UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition) noexcept;


                    constexpr UnityEngine__UIElements__ListViewDragger__DragPosition(UnityEngine__UIElements__ListViewDragger__DragPosition const&) = default;
                    constexpr UnityEngine__UIElements__ListViewDragger__DragPosition(UnityEngine__UIElements__ListViewDragger__DragPosition&&) = default;
                    constexpr UnityEngine__UIElements__ListViewDragger__DragPosition& operator=(UnityEngine__UIElements__ListViewDragger__DragPosition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__ListViewDragger__DragPosition& operator=(UnityEngine__UIElements__ListViewDragger__DragPosition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__ListViewDragger__DragPosition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_insertAtIndex, put=__set_insertAtIndex))  insertAtIndex;

constexpr void __set_insertAtIndex(int32_t value) ;

constexpr int32_t __get_insertAtIndex() const;

 UnityEngine::UIElements::ReusableCollectionItem __declspec(property(get=__get_recycledItem, put=__set_recycledItem))  recycledItem;

constexpr void __set_recycledItem(UnityEngine::UIElements::ReusableCollectionItem value) ;

constexpr UnityEngine::UIElements::ReusableCollectionItem __get_recycledItem() const;

 UnityEngine::UIElements::DragAndDropPosition __declspec(property(get=__get_dragAndDropPosition, put=__set_dragAndDropPosition))  dragAndDropPosition;

constexpr void __set_dragAndDropPosition(UnityEngine::UIElements::DragAndDropPosition value) ;

constexpr UnityEngine::UIElements::DragAndDropPosition __get_dragAndDropPosition() const;


// Methods

/// @brief Method Equals addr 0x2c9273c size 0x58 virtual true final true
 bool Equals(UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition other) ;

/// @brief Method Equals addr 0x2c9330c size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2c933a8 size 0x48 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListViewDragger
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7056))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7046))
// CS Name: UnityEngine.UIElements.ListViewDragger
class CORDL_TYPE ListViewDragger : public UnityEngine::UIElements::DragEventsProcessor {
public:
// Declarations
using DragPosition = UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ListViewDragger() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: " const&", def_value: None }]
constexpr ListViewDragger(ListViewDragger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: "&&", def_value: None }]
constexpr ListViewDragger(ListViewDragger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListViewDragger(void* ptr) noexcept : UnityEngine::UIElements::DragEventsProcessor(ptr) {
}


  constexpr ListViewDragger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListViewDragger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListViewDragger& operator=(ListViewDragger&& o) noexcept = default;
  constexpr ListViewDragger& operator=(ListViewDragger const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition __declspec(property(get=__get_m_LastDragPosition, put=__set_m_LastDragPosition))  m_LastDragPosition;

constexpr void __set_m_LastDragPosition(UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition __get_m_LastDragPosition() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_DragHoverBar, put=__set_m_DragHoverBar))  m_DragHoverBar;

constexpr void __set_m_DragHoverBar(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_DragHoverBar() const;

 UnityEngine::UIElements::ICollectionDragAndDropController __declspec(property(get=__get__dragAndDropController_k__BackingField, put=__set__dragAndDropController_k__BackingField))  _dragAndDropController_k__BackingField;

constexpr void __set__dragAndDropController_k__BackingField(UnityEngine::UIElements::ICollectionDragAndDropController value) ;

constexpr UnityEngine::UIElements::ICollectionDragAndDropController __get__dragAndDropController_k__BackingField() const;


// Properties

 UnityEngine::UIElements::BaseVerticalCollectionView __declspec(property(get=get_targetListView))  targetListView;

 UnityEngine::UIElements::ScrollView __declspec(property(get=get_targetScrollView))  targetScrollView;

 UnityEngine::UIElements::ICollectionDragAndDropController __declspec(property(get=get_dragAndDropController, put=set_dragAndDropController))  dragAndDropController;


// Methods

/// @brief Method get_targetListView addr 0x2c910a8 size 0x7c virtual false final false
 UnityEngine::UIElements::BaseVerticalCollectionView get_targetListView() ;

/// @brief Method get_targetScrollView addr 0x2c91124 size 0x1c virtual false final false
 UnityEngine::UIElements::ScrollView get_targetScrollView() ;

/// @brief Method get_dragAndDropController addr 0x2c91140 size 0x8 virtual false final false
 UnityEngine::UIElements::ICollectionDragAndDropController get_dragAndDropController() ;

/// @brief Method set_dragAndDropController addr 0x2c91148 size 0x8 virtual false final false
 void set_dragAndDropController(UnityEngine::UIElements::ICollectionDragAndDropController value) ;

static UnityEngine::UIElements::ListViewDragger New_ctor(UnityEngine::UIElements::BaseVerticalCollectionView listView) ;

/// @brief Method .ctor addr 0x2c91150 size 0x4 virtual false final false
 void _ctor(UnityEngine::UIElements::BaseVerticalCollectionView listView) ;

/// @brief Method CanStartDrag addr 0x2c91290 size 0x23c virtual true final false
 bool CanStartDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method StartDrag addr 0x2c91864 size 0x1bc virtual true final false
 UnityEngine::UIElements::StartDragArgs StartDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method UpdateDrag addr 0x2c91a20 size 0x6c virtual true final false
 UnityEngine::UIElements::DragVisualMode UpdateDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method GetVisualMode addr 0x2c91a8c size 0x164 virtual false final false
 UnityEngine::UIElements::DragVisualMode GetVisualMode(UnityEngine::Vector3 pointerPosition, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition> dragPosition) ;

/// @brief Method OnDrop addr 0x2c9255c size 0x1e0 virtual true final false
 void OnDrop(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method HandleDragAndScroll addr 0x2c921d0 size 0x23c virtual false final false
 void HandleDragAndScroll(UnityEngine::Vector2 pointerPosition) ;

/// @brief Method ApplyDragAndDropUI addr 0x2c91bf0 size 0x5e0 virtual false final false
 void ApplyDragAndDropUI(UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition dragPosition) ;

/// @brief Method TryGetDragPosition addr 0x2c929d4 size 0x340 virtual true final false
 bool TryGetDragPosition(UnityEngine::Vector2 pointerPosition, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition> dragPosition) ;

/// @brief Method MakeDragAndDropArgs addr 0x2c9240c size 0x150 virtual false final false
 UnityEngine::UIElements::ListDragAndDropArgs MakeDragAndDropArgs(UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition dragPosition) ;

/// @brief Method PlaceHoverBarAtElement addr 0x2c92918 size 0xbc virtual false final false
 void PlaceHoverBarAtElement(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method PlaceHoverBarAt addr 0x2c92794 size 0x184 virtual false final false
 void PlaceHoverBarAt(float_t top) ;

/// @brief Method ClearDragAndDropUI addr 0x2c92df4 size 0x410 virtual true final false
 void ClearDragAndDropUI() ;

/// @brief Method GetRecycledItem addr 0x2c914cc size 0x398 virtual false final false
 UnityEngine::UIElements::ReusableCollectionItem GetRecycledItem(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method <ApplyDragAndDropUI>b__22_0 addr 0x2c93204 size 0x108 virtual false final false
 void _ApplyDragAndDropUI_b__22_0(UnityEngine::UIElements::GeometryChangedEvent e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ListViewDragger);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ListViewDragger, "UnityEngine.UIElements", "ListViewDragger");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition, "UnityEngine.UIElements", "ListViewDragger/DragPosition");
