#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__GenericDropdownMenu__MenuItem;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine {
struct Rect;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GenericDropdownMenu;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__GenericDropdownMenu__MenuItem;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0;
}
// Type: ::MenuItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7170))
// CS Name: UnityEngine.UIElements.GenericDropdownMenu::MenuItem
class CORDL_TYPE UnityEngine__UIElements__GenericDropdownMenu__MenuItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__GenericDropdownMenu__MenuItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__GenericDropdownMenu__MenuItem", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__GenericDropdownMenu__MenuItem(UnityEngine__UIElements__GenericDropdownMenu__MenuItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__GenericDropdownMenu__MenuItem", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__GenericDropdownMenu__MenuItem(UnityEngine__UIElements__GenericDropdownMenu__MenuItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__GenericDropdownMenu__MenuItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__GenericDropdownMenu__MenuItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__GenericDropdownMenu__MenuItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__GenericDropdownMenu__MenuItem& operator=(UnityEngine__UIElements__GenericDropdownMenu__MenuItem&& o) noexcept = default;
  constexpr UnityEngine__UIElements__GenericDropdownMenu__MenuItem& operator=(UnityEngine__UIElements__GenericDropdownMenu__MenuItem const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_element, put=__set_element))  element;

constexpr void __set_element(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_element() const;

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;

 System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_actionUserData, put=__set_actionUserData))  actionUserData;

constexpr void __set_actionUserData(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_1<::bs_hook::Il2CppWrapperType> __get_actionUserData() const;


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem New_ctor() ;

/// @brief Method .ctor addr 0x2cb95e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass25_0
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7171))
// CS Name: UnityEngine.UIElements.GenericDropdownMenu::<>c__DisplayClass25_0
struct CORDL_TYPE UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "__4__this", ty: "UnityEngine::UIElements::GenericDropdownMenu", modifiers: "", def_value: None }, CppParam { name: "selectedIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0(UnityEngine::UIElements::GenericDropdownMenu __4__this, int32_t selectedIndex) noexcept;


                    constexpr UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0(UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0 const&) = default;
                    constexpr UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0(UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0&&) = default;
                    constexpr UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0& operator=(UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0& operator=(UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::GenericDropdownMenu __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::GenericDropdownMenu value) ;

constexpr UnityEngine::UIElements::GenericDropdownMenu __get___4__this() const;

 int32_t __declspec(property(get=__get_selectedIndex, put=__set_selectedIndex))  selectedIndex;

constexpr void __set_selectedIndex(int32_t value) ;

constexpr int32_t __get_selectedIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::GenericDropdownMenu
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7172))
// CS Name: UnityEngine.UIElements.GenericDropdownMenu
class CORDL_TYPE GenericDropdownMenu : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass25_0 = UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0;

using MenuItem = UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem;

/// @brief Convert operator to UnityEngine::UIElements::IGenericMenu
constexpr operator  UnityEngine::UIElements::IGenericMenu() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~GenericDropdownMenu() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: " const&", def_value: None }]
constexpr GenericDropdownMenu(GenericDropdownMenu const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: "&&", def_value: None }]
constexpr GenericDropdownMenu(GenericDropdownMenu&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericDropdownMenu(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericDropdownMenu& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericDropdownMenu& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericDropdownMenu& operator=(GenericDropdownMenu&& o) noexcept = default;
  constexpr GenericDropdownMenu& operator=(GenericDropdownMenu const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_itemUssClassName, put=__set_itemUssClassName))  itemUssClassName;

static void __set_itemUssClassName(::StringW value) ;

static ::StringW __get_itemUssClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_containerInnerUssClassName, put=__set_containerInnerUssClassName))  containerInnerUssClassName;

static void __set_containerInnerUssClassName(::StringW value) ;

static ::StringW __get_containerInnerUssClassName() ;

static ::StringW __declspec(property(get=__get_containerOuterUssClassName, put=__set_containerOuterUssClassName))  containerOuterUssClassName;

static void __set_containerOuterUssClassName(::StringW value) ;

static ::StringW __get_containerOuterUssClassName() ;

static ::StringW __declspec(property(get=__get_checkmarkUssClassName, put=__set_checkmarkUssClassName))  checkmarkUssClassName;

static void __set_checkmarkUssClassName(::StringW value) ;

static ::StringW __get_checkmarkUssClassName() ;

static ::StringW __declspec(property(get=__get_separatorUssClassName, put=__set_separatorUssClassName))  separatorUssClassName;

static void __set_separatorUssClassName(::StringW value) ;

static ::StringW __get_separatorUssClassName() ;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem> __declspec(property(get=__get_m_Items, put=__set_m_Items))  m_Items;

constexpr void __set_m_Items(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem> __get_m_Items() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_MenuContainer, put=__set_m_MenuContainer))  m_MenuContainer;

constexpr void __set_m_MenuContainer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_MenuContainer() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_OuterContainer, put=__set_m_OuterContainer))  m_OuterContainer;

constexpr void __set_m_OuterContainer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_OuterContainer() const;

 UnityEngine::UIElements::ScrollView __declspec(property(get=__get_m_ScrollView, put=__set_m_ScrollView))  m_ScrollView;

constexpr void __set_m_ScrollView(UnityEngine::UIElements::ScrollView value) ;

constexpr UnityEngine::UIElements::ScrollView __get_m_ScrollView() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_PanelRootVisualContainer, put=__set_m_PanelRootVisualContainer))  m_PanelRootVisualContainer;

constexpr void __set_m_PanelRootVisualContainer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_PanelRootVisualContainer() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_TargetElement, put=__set_m_TargetElement))  m_TargetElement;

constexpr void __set_m_TargetElement(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_TargetElement() const;

 UnityEngine::Rect __declspec(property(get=__get_m_DesiredRect, put=__set_m_DesiredRect))  m_DesiredRect;

constexpr void __set_m_DesiredRect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_DesiredRect() const;

 UnityEngine::UIElements::KeyboardNavigationManipulator __declspec(property(get=__get_m_NavigationManipulator, put=__set_m_NavigationManipulator))  m_NavigationManipulator;

constexpr void __set_m_NavigationManipulator(UnityEngine::UIElements::KeyboardNavigationManipulator value) ;

constexpr UnityEngine::UIElements::KeyboardNavigationManipulator __get_m_NavigationManipulator() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_MousePosition, put=__set_m_MousePosition))  m_MousePosition;

constexpr void __set_m_MousePosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_MousePosition() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentContainer))  contentContainer;


// Methods

/// @brief Method get_contentContainer addr 0x2cb7cf0 size 0x24 virtual false final false
 UnityEngine::UIElements::VisualElement get_contentContainer() ;

static UnityEngine::UIElements::GenericDropdownMenu New_ctor() ;

/// @brief Method .ctor addr 0x2cb18f0 size 0x2d4 virtual false final false
 void _ctor() ;

/// @brief Method OnAttachToPanel addr 0x2cb7d14 size 0x438 virtual false final false
 void OnAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt) ;

/// @brief Method OnDetachFromPanel addr 0x2cb814c size 0x494 virtual false final false
 void OnDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt) ;

/// @brief Method Hide addr 0x2cb85e0 size 0xe8 virtual false final false
 void Hide() ;

/// @brief Method Apply addr 0x2cb86c8 size 0x3c virtual false final false
 void Apply(UnityEngine::UIElements::KeyboardNavigationOperation op, UnityEngine::UIElements::EventBase sourceEvent) ;

/// @brief Method Apply addr 0x2cb8704 size 0x184 virtual false final false
 bool Apply(UnityEngine::UIElements::KeyboardNavigationOperation op) ;

/// @brief Method OnPointerDown addr 0x2cb8a8c size 0x12c virtual false final false
 void OnPointerDown(UnityEngine::UIElements::PointerDownEvent evt) ;

/// @brief Method OnPointerMove addr 0x2cb8ce0 size 0x12c virtual false final false
 void OnPointerMove(UnityEngine::UIElements::PointerMoveEvent evt) ;

/// @brief Method OnPointerUp addr 0x2cb8e0c size 0x13c virtual false final false
 void OnPointerUp(UnityEngine::UIElements::PointerUpEvent evt) ;

/// @brief Method OnFocusOut addr 0x2cb8f48 size 0x148 virtual false final false
 void OnFocusOut(UnityEngine::UIElements::FocusOutEvent evt) ;

/// @brief Method OnParentResized addr 0x2cb9090 size 0x4 virtual false final false
 void OnParentResized(UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method UpdateSelection addr 0x2cb8bb8 size 0x128 virtual false final false
 void UpdateSelection(UnityEngine::UIElements::VisualElement target) ;

/// @brief Method ChangeSelectedIndex addr 0x2cb9094 size 0x134 virtual false final false
 void ChangeSelectedIndex(int32_t newIndex, int32_t previousIndex) ;

/// @brief Method GetSelectedIndex addr 0x2cb8888 size 0xa0 virtual false final false
 int32_t GetSelectedIndex() ;

/// @brief Method AddItem addr 0x2cb91c8 size 0x28 virtual true final true
 void AddItem(::StringW itemName, bool isChecked, System::Action action) ;

/// @brief Method AddSeparator addr 0x2cb9530 size 0xb0 virtual true final true
 void AddSeparator(::StringW path) ;

/// @brief Method AddItem addr 0x2cb91f0 size 0x340 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem AddItem(::StringW itemName, bool isChecked, bool isEnabled, ::bs_hook::Il2CppWrapperType data) ;

/// @brief Method DropDown addr 0x2cb95e8 size 0x75c virtual true final true
 void DropDown(UnityEngine::Rect position, UnityEngine::UIElements::VisualElement targetElement, bool anchored) ;

/// @brief Method OnTargetElementDetachFromPanel addr 0x2cba428 size 0x4 virtual false final false
 void OnTargetElementDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt) ;

/// @brief Method OnContainerGeometryChanged addr 0x2cba42c size 0x4 virtual false final false
 void OnContainerGeometryChanged(UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method EnsureVisibilityInParent addr 0x2cb9d44 size 0x6e4 virtual false final false
 void EnsureVisibilityInParent() ;

/// @brief Method <Apply>g__UpdateSelectionDown|25_0 addr 0x2cb89d0 size 0xbc virtual false final false
 void _Apply_g__UpdateSelectionDown_25_0(int32_t newIndex, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0> ) ;

/// @brief Method <Apply>g__UpdateSelectionUp|25_1 addr 0x2cb8928 size 0xa8 virtual false final false
 void _Apply_g__UpdateSelectionUp_25_1(int32_t newIndex, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0> ) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::GenericDropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::GenericDropdownMenu, "UnityEngine.UIElements", "GenericDropdownMenu");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem, "UnityEngine.UIElements", "GenericDropdownMenu/MenuItem");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0, "UnityEngine.UIElements", "GenericDropdownMenu/<>c__DisplayClass25_0");
