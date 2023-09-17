#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackEventHandler_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Focusable;
}
// Type: UnityEngine.UIElements::Focusable
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7310))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6966))
// CS Name: UnityEngine.UIElements.Focusable
class CORDL_TYPE Focusable : public ::UnityEngine::UIElements::CallbackEventHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Focusable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Focusable", modifiers: " const&", def_value: None }]
constexpr Focusable(Focusable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Focusable", modifiers: "&&", def_value: None }]
constexpr Focusable(Focusable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Focusable(void* ptr) noexcept : ::UnityEngine::UIElements::CallbackEventHandler(ptr) {
}


  constexpr Focusable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Focusable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Focusable& operator=(Focusable&& o) noexcept = default;
  constexpr Focusable& operator=(Focusable const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__focusable_k__BackingField, put=__set__focusable_k__BackingField))  _focusable_k__BackingField;

constexpr void __set__focusable_k__BackingField(bool value) ;

constexpr bool __get__focusable_k__BackingField() const;

 int32_t __declspec(property(get=__get__tabIndex_k__BackingField, put=__set__tabIndex_k__BackingField))  _tabIndex_k__BackingField;

constexpr void __set__tabIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__tabIndex_k__BackingField() const;

 bool __declspec(property(get=__get_m_DelegatesFocus, put=__set_m_DelegatesFocus))  m_DelegatesFocus;

constexpr void __set_m_DelegatesFocus(bool value) ;

constexpr bool __get_m_DelegatesFocus() const;

 bool __declspec(property(get=__get_m_ExcludeFromFocusRing, put=__set_m_ExcludeFromFocusRing))  m_ExcludeFromFocusRing;

constexpr void __set_m_ExcludeFromFocusRing(bool value) ;

constexpr bool __get_m_ExcludeFromFocusRing() const;

 bool __declspec(property(get=__get_isIMGUIContainer, put=__set_isIMGUIContainer))  isIMGUIContainer;

constexpr void __set_isIMGUIContainer(bool value) ;

constexpr bool __get_isIMGUIContainer() const;


// Properties

 ::UnityEngine::UIElements::FocusController __declspec(property(get=get_focusController))  focusController;

 bool __declspec(property(get=get_focusable, put=set_focusable))  focusable;

 int32_t __declspec(property(get=get_tabIndex, put=set_tabIndex))  tabIndex;

 bool __declspec(property(get=get_delegatesFocus, put=set_delegatesFocus))  delegatesFocus;

 bool __declspec(property(get=get_excludeFromFocusRing, put=set_excludeFromFocusRing))  excludeFromFocusRing;

 bool __declspec(property(get=get_canGrabFocus))  canGrabFocus;


// Methods

// Ctor Parameters []
explicit Focusable() ;

/// @brief Method .ctor addr 0x2c80f04 size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method get_focusController addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::FocusController get_focusController() ;

/// @brief Method get_focusable addr 0x2c80f2c size 0x8 virtual false final false
 bool get_focusable() ;

/// @brief Method set_focusable addr 0x2c80f34 size 0xc virtual false final false
 void set_focusable(bool value) ;

/// @brief Method get_tabIndex addr 0x2c80f40 size 0x8 virtual false final false
 int32_t get_tabIndex() ;

/// @brief Method set_tabIndex addr 0x2c80f48 size 0x8 virtual false final false
 void set_tabIndex(int32_t value) ;

/// @brief Method get_delegatesFocus addr 0x2c80f50 size 0x8 virtual false final false
 bool get_delegatesFocus() ;

/// @brief Method set_delegatesFocus addr 0x2c80f58 size 0xe4 virtual false final false
 void set_delegatesFocus(bool value) ;

/// @brief Method get_excludeFromFocusRing addr 0x2c8103c size 0x8 virtual false final false
 bool get_excludeFromFocusRing() ;

/// @brief Method set_excludeFromFocusRing addr 0x2c81044 size 0xe4 virtual false final false
 void set_excludeFromFocusRing(bool value) ;

/// @brief Method get_canGrabFocus addr 0x2c81128 size 0x8 virtual true final false
 bool get_canGrabFocus() ;

/// @brief Method Focus addr 0x2c81130 size 0xb0 virtual true final false
 void Focus() ;

/// @brief Method Blur addr 0x2c81328 size 0x38 virtual true final false
 void Blur() ;

/// @brief Method BlurImmediately addr 0x2c813b8 size 0x38 virtual false final false
 void BlurImmediately() ;

/// @brief Method GetFocusDelegate addr 0x2c811e0 size 0x90 virtual false final false
 ::UnityEngine::UIElements::Focusable GetFocusDelegate() ;

/// @brief Method GetFirstFocusableChild addr 0x2c813f0 size 0x120 virtual false final false
static ::UnityEngine::UIElements::Focusable GetFirstFocusableChild(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method ExecuteDefaultAction addr 0x2c81510 size 0x2c virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultActionDisabled addr 0x2c8159c size 0x2c virtual true final false
 void ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ProcessEvent addr 0x2c8153c size 0x60 virtual false final false
 void ProcessEvent(::UnityEngine::UIElements::EventBase evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::Focusable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Focusable, "UnityEngine.UIElements", "Focusable");
