#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine::UI {
class UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine::UI {
class ILayoutGroup;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutGroup;
}
namespace UnityEngine::UI {
class UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56;
}
// Type: ::<DelayedSetDirty>d__56
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13029))
// CS Name: UnityEngine.UI.LayoutGroup::<DelayedSetDirty>d__56
class CORDL_TYPE UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56(UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56(UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56& operator=(UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56&& o) noexcept = default;
  constexpr UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56& operator=(UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::RectTransform __declspec(property(get=__get_rectTransform, put=__set_rectTransform))  rectTransform;

constexpr void __set_rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_rectTransform() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static UnityEngine::UI::UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2bfec18 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2bfec40 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2bfec44 size 0x88 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2bfeccc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2bfecd4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2bfed14 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::LayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13030))
// CS Name: UnityEngine.UI.LayoutGroup
class CORDL_TYPE LayoutGroup : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using _DelayedSetDirty_d__56 = UnityEngine::UI::UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56;

/// @brief Convert operator to UnityEngine::UI::ILayoutElement
constexpr operator  UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ILayoutGroup
constexpr operator  UnityEngine::UI::ILayoutGroup() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ILayoutController
constexpr operator  UnityEngine::UI::ILayoutController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~LayoutGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutGroup", modifiers: " const&", def_value: None }]
constexpr LayoutGroup(LayoutGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutGroup", modifiers: "&&", def_value: None }]
constexpr LayoutGroup(LayoutGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LayoutGroup(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr LayoutGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LayoutGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LayoutGroup& operator=(LayoutGroup&& o) noexcept = default;
  constexpr LayoutGroup& operator=(LayoutGroup const& o) noexcept = default;
                


// Fields

 UnityEngine::RectOffset __declspec(property(get=__get_m_Padding, put=__set_m_Padding))  m_Padding;

constexpr void __set_m_Padding(UnityEngine::RectOffset value) ;

constexpr UnityEngine::RectOffset __get_m_Padding() const;

 UnityEngine::TextAnchor __declspec(property(get=__get_m_ChildAlignment, put=__set_m_ChildAlignment))  m_ChildAlignment;

constexpr void __set_m_ChildAlignment(UnityEngine::TextAnchor value) ;

constexpr UnityEngine::TextAnchor __get_m_ChildAlignment() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_Rect, put=__set_m_Rect))  m_Rect;

constexpr void __set_m_Rect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_Rect() const;

 UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker))  m_Tracker;

constexpr void __set_m_Tracker(UnityEngine::DrivenRectTransformTracker value) ;

constexpr UnityEngine::DrivenRectTransformTracker __get_m_Tracker() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_TotalMinSize, put=__set_m_TotalMinSize))  m_TotalMinSize;

constexpr void __set_m_TotalMinSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_TotalMinSize() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_TotalPreferredSize, put=__set_m_TotalPreferredSize))  m_TotalPreferredSize;

constexpr void __set_m_TotalPreferredSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_TotalPreferredSize() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_TotalFlexibleSize, put=__set_m_TotalFlexibleSize))  m_TotalFlexibleSize;

constexpr void __set_m_TotalFlexibleSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_TotalFlexibleSize() const;

 System::Collections::Generic::List_1<UnityEngine::RectTransform> __declspec(property(get=__get_m_RectChildren, put=__set_m_RectChildren))  m_RectChildren;

constexpr void __set_m_RectChildren(System::Collections::Generic::List_1<UnityEngine::RectTransform> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::RectTransform> __get_m_RectChildren() const;


// Properties

 UnityEngine::RectOffset __declspec(property(get=get_padding, put=set_padding))  padding;

 UnityEngine::TextAnchor __declspec(property(get=get_childAlignment, put=set_childAlignment))  childAlignment;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 System::Collections::Generic::List_1<UnityEngine::RectTransform> __declspec(property(get=get_rectChildren))  rectChildren;

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;

 bool __declspec(property(get=get_isRootLayoutGroup))  isRootLayoutGroup;


// Methods

/// @brief Method get_padding addr 0x2bfe724 size 0x8 virtual false final false
 UnityEngine::RectOffset get_padding() ;

/// @brief Method set_padding addr 0x2bfe72c size 0x5c virtual false final false
 void set_padding(UnityEngine::RectOffset value) ;

/// @brief Method get_childAlignment addr 0x2bfe788 size 0x8 virtual false final false
 UnityEngine::TextAnchor get_childAlignment() ;

/// @brief Method set_childAlignment addr 0x2bfe790 size 0x5c virtual false final false
 void set_childAlignment(UnityEngine::TextAnchor value) ;

/// @brief Method get_rectTransform addr 0x2bfc570 size 0x94 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method get_rectChildren addr 0x2bfe7ec size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::RectTransform> get_rectChildren() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2bfbf08 size 0x3bc virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x0 size 0xffffffffffffffff virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x2bfe7f4 size 0x8 virtual true final false
 float_t get_minWidth() ;

/// @brief Method get_preferredWidth addr 0x2bfe7fc size 0x8 virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_flexibleWidth addr 0x2bfe804 size 0x8 virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method get_minHeight addr 0x2bfe80c size 0x8 virtual true final false
 float_t get_minHeight() ;

/// @brief Method get_preferredHeight addr 0x2bfe814 size 0x8 virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_flexibleHeight addr 0x2bfe81c size 0x8 virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method get_layoutPriority addr 0x2bfe824 size 0x8 virtual true final false
 int32_t get_layoutPriority() ;

/// @brief Method SetLayoutHorizontal addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLayoutVertical() ;

static UnityEngine::UI::LayoutGroup New_ctor() ;

/// @brief Method .ctor addr 0x2bfbc10 size 0x12c virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2bfe82c size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2bfe91c size 0x7c virtual true final false
 void OnDisable() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2bfe998 size 0x4 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method GetTotalMinSize addr 0x2bfe19c size 0x74 virtual false final false
 float_t GetTotalMinSize(int32_t axis) ;

/// @brief Method GetTotalPreferredSize addr 0x2bfe0b4 size 0x74 virtual false final false
 float_t GetTotalPreferredSize(int32_t axis) ;

/// @brief Method GetTotalFlexibleSize addr 0x2bfe128 size 0x74 virtual false final false
 float_t GetTotalFlexibleSize(int32_t axis) ;

/// @brief Method GetStartOffset addr 0x2bfcbec size 0x164 virtual false final false
 float_t GetStartOffset(int32_t axis, float_t requiredSpaceWithoutPadding) ;

/// @brief Method GetAlignmentOnAxis addr 0x2bfdba4 size 0x4c virtual false final false
 float_t GetAlignmentOnAxis(int32_t axis) ;

/// @brief Method SetLayoutInputForAxis addr 0x2bfc2c4 size 0x84 virtual false final false
 void SetLayoutInputForAxis(float_t totalMin, float_t totalPreferred, float_t totalFlexible, int32_t axis) ;

/// @brief Method SetChildAlongAxis addr 0x2bfe99c size 0xa8 virtual false final false
 void SetChildAlongAxis(UnityEngine::RectTransform rect, int32_t axis, float_t pos) ;

/// @brief Method SetChildAlongAxisWithScale addr 0x2bfde74 size 0x240 virtual false final false
 void SetChildAlongAxisWithScale(UnityEngine::RectTransform rect, int32_t axis, float_t pos, float_t scaleFactor) ;

/// @brief Method SetChildAlongAxis addr 0x2bfcd50 size 0xb0 virtual false final false
 void SetChildAlongAxis(UnityEngine::RectTransform rect, int32_t axis, float_t pos, float_t size) ;

/// @brief Method SetChildAlongAxisWithScale addr 0x2bfdbf0 size 0x284 virtual false final false
 void SetChildAlongAxisWithScale(UnityEngine::RectTransform rect, int32_t axis, float_t pos, float_t size, float_t scaleFactor) ;

/// @brief Method get_isRootLayoutGroup addr 0x2bfea44 size 0x138 virtual false final false
 bool get_isRootLayoutGroup() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2bfeb7c size 0x30 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method OnTransformChildrenChanged addr 0x2bfebac size 0x4 virtual true final false
 void OnTransformChildrenChanged() ;

/// @brief Method SetProperty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetProperty(ByRef<T> currentValue, T newValue) ;

/// @brief Method SetDirty addr 0x2bfe848 size 0xd4 virtual false final false
 void SetDirty() ;

/// @brief Method DelayedSetDirty addr 0x2bfebb0 size 0x68 virtual false final false
 System::Collections::IEnumerator DelayedSetDirty(UnityEngine::RectTransform rectTransform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::LayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutGroup, "UnityEngine.UI", "LayoutGroup");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__LayoutGroup___DelayedSetDirty_d__56, "UnityEngine.UI", "LayoutGroup/<DelayedSetDirty>d__56");
