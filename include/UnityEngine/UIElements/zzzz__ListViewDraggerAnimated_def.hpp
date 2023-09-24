#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__ListViewDragger__DragPosition;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDraggerAnimated;
}
// Type: UnityEngine.UIElements::ListViewDraggerAnimated
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7046))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7048))
// CS Name: UnityEngine.UIElements.ListViewDraggerAnimated
class CORDL_TYPE ListViewDraggerAnimated : public UnityEngine::UIElements::ListViewDragger {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ListViewDraggerAnimated() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: " const&", def_value: None }]
constexpr ListViewDraggerAnimated(ListViewDraggerAnimated const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: "&&", def_value: None }]
constexpr ListViewDraggerAnimated(ListViewDraggerAnimated&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListViewDraggerAnimated(void* ptr) noexcept : UnityEngine::UIElements::ListViewDragger(ptr) {
}


  constexpr ListViewDraggerAnimated& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListViewDraggerAnimated& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListViewDraggerAnimated& operator=(ListViewDraggerAnimated&& o) noexcept = default;
  constexpr ListViewDraggerAnimated& operator=(ListViewDraggerAnimated const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_DragStartIndex, put=__set_m_DragStartIndex))  m_DragStartIndex;

constexpr void __set_m_DragStartIndex(int32_t value) ;

constexpr int32_t __get_m_DragStartIndex() const;

 int32_t __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex))  m_CurrentIndex;

constexpr void __set_m_CurrentIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentIndex() const;

 float_t __declspec(property(get=__get_m_SelectionHeight, put=__set_m_SelectionHeight))  m_SelectionHeight;

constexpr void __set_m_SelectionHeight(float_t value) ;

constexpr float_t __get_m_SelectionHeight() const;

 float_t __declspec(property(get=__get_m_LocalOffsetOnStart, put=__set_m_LocalOffsetOnStart))  m_LocalOffsetOnStart;

constexpr void __set_m_LocalOffsetOnStart(float_t value) ;

constexpr float_t __get_m_LocalOffsetOnStart() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_CurrentPointerPosition, put=__set_m_CurrentPointerPosition))  m_CurrentPointerPosition;

constexpr void __set_m_CurrentPointerPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_CurrentPointerPosition() const;

 UnityEngine::UIElements::ReusableCollectionItem __declspec(property(get=__get_m_Item, put=__set_m_Item))  m_Item;

constexpr void __set_m_Item(UnityEngine::UIElements::ReusableCollectionItem value) ;

constexpr UnityEngine::UIElements::ReusableCollectionItem __get_m_Item() const;

 UnityEngine::UIElements::ReusableCollectionItem __declspec(property(get=__get_m_OffsetItem, put=__set_m_OffsetItem))  m_OffsetItem;

constexpr void __set_m_OffsetItem(UnityEngine::UIElements::ReusableCollectionItem value) ;

constexpr UnityEngine::UIElements::ReusableCollectionItem __get_m_OffsetItem() const;


// Properties

 bool __declspec(property(get=get_isDragging))  isDragging;

 UnityEngine::UIElements::ReusableCollectionItem __declspec(property(get=get_draggedItem))  draggedItem;

 bool __declspec(property(get=get_supportsDragEvents))  supportsDragEvents;


// Methods

/// @brief Method get_isDragging addr 0x2c933f0 size 0x10 virtual false final false
 bool get_isDragging() ;

/// @brief Method get_draggedItem addr 0x2c93400 size 0x8 virtual false final false
 UnityEngine::UIElements::ReusableCollectionItem get_draggedItem() ;

/// @brief Method get_supportsDragEvents addr 0x2c93408 size 0x8 virtual true final false
 bool get_supportsDragEvents() ;

static UnityEngine::UIElements::ListViewDraggerAnimated New_ctor(UnityEngine::UIElements::BaseVerticalCollectionView listView) ;

/// @brief Method .ctor addr 0x2c93410 size 0x4 virtual false final false
 void _ctor(UnityEngine::UIElements::BaseVerticalCollectionView listView) ;

/// @brief Method StartDrag addr 0x2c93414 size 0x6e0 virtual true final false
 UnityEngine::UIElements::StartDragArgs StartDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method UpdateDrag addr 0x2c93e34 size 0x894 virtual true final false
 UnityEngine::UIElements::DragVisualMode UpdateDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method Animate addr 0x2c93af4 size 0x340 virtual false final false
 void Animate(UnityEngine::UIElements::ReusableCollectionItem element, float_t paddingTop) ;

/// @brief Method OnDrop addr 0x2c946c8 size 0x300 virtual true final false
 void OnDrop(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method ClearDragAndDropUI addr 0x2c949c8 size 0x4 virtual true final false
 void ClearDragAndDropUI() ;

/// @brief Method TryGetDragPosition addr 0x2c949cc size 0x20 virtual true final false
 bool TryGetDragPosition(UnityEngine::Vector2 pointerPosition, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__ListViewDragger__DragPosition> dragPosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ListViewDraggerAnimated);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ListViewDraggerAnimated, "UnityEngine.UIElements", "ListViewDraggerAnimated");
