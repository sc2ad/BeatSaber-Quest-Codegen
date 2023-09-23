#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__FocusController__FocusedElement;
}
// Type: ::FocusedElement
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6969))
// CS Name: UnityEngine.UIElements.FocusController::FocusedElement
struct CORDL_TYPE UnityEngine__UIElements__FocusController__FocusedElement : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "m_FocusedElement", ty: "UnityEngine::UIElements::Focusable", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__FocusController__FocusedElement(UnityEngine::UIElements::VisualElement m_SubTreeRoot, UnityEngine::UIElements::Focusable m_FocusedElement) noexcept;


                    constexpr UnityEngine__UIElements__FocusController__FocusedElement(UnityEngine__UIElements__FocusController__FocusedElement const&) = default;
                    constexpr UnityEngine__UIElements__FocusController__FocusedElement(UnityEngine__UIElements__FocusController__FocusedElement&&) = default;
                    constexpr UnityEngine__UIElements__FocusController__FocusedElement& operator=(UnityEngine__UIElements__FocusController__FocusedElement const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__FocusController__FocusedElement& operator=(UnityEngine__UIElements__FocusController__FocusedElement&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__FocusController__FocusedElement(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_SubTreeRoot, put=__set_m_SubTreeRoot))  m_SubTreeRoot;

constexpr void __set_m_SubTreeRoot(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_SubTreeRoot() const;

 UnityEngine::UIElements::Focusable __declspec(property(get=__get_m_FocusedElement, put=__set_m_FocusedElement))  m_FocusedElement;

constexpr void __set_m_FocusedElement(UnityEngine::UIElements::Focusable value) ;

constexpr UnityEngine::UIElements::Focusable __get_m_FocusedElement() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::FocusController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6970))
// CS Name: UnityEngine.UIElements.FocusController
class CORDL_TYPE FocusController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FocusedElement = UnityEngine::UIElements::UnityEngine__UIElements__FocusController__FocusedElement;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FocusController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: " const&", def_value: None }]
constexpr FocusController(FocusController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "&&", def_value: None }]
constexpr FocusController(FocusController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FocusController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FocusController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FocusController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FocusController& operator=(FocusController&& o) noexcept = default;
  constexpr FocusController& operator=(FocusController const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::IFocusRing __declspec(property(get=__get__focusRing_k__BackingField, put=__set__focusRing_k__BackingField))  _focusRing_k__BackingField;

constexpr void __set__focusRing_k__BackingField(UnityEngine::UIElements::IFocusRing value) ;

constexpr UnityEngine::UIElements::IFocusRing __get__focusRing_k__BackingField() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__FocusController__FocusedElement> __declspec(property(get=__get_m_FocusedElements, put=__set_m_FocusedElements))  m_FocusedElements;

constexpr void __set_m_FocusedElements(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__FocusController__FocusedElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__FocusController__FocusedElement> __get_m_FocusedElements() const;

 UnityEngine::UIElements::Focusable __declspec(property(get=__get_m_LastFocusedElement, put=__set_m_LastFocusedElement))  m_LastFocusedElement;

constexpr void __set_m_LastFocusedElement(UnityEngine::UIElements::Focusable value) ;

constexpr UnityEngine::UIElements::Focusable __get_m_LastFocusedElement() const;

 UnityEngine::UIElements::Focusable __declspec(property(get=__get_m_LastPendingFocusedElement, put=__set_m_LastPendingFocusedElement))  m_LastPendingFocusedElement;

constexpr void __set_m_LastPendingFocusedElement(UnityEngine::UIElements::Focusable value) ;

constexpr UnityEngine::UIElements::Focusable __get_m_LastPendingFocusedElement() const;

 int32_t __declspec(property(get=__get_m_PendingFocusCount, put=__set_m_PendingFocusCount))  m_PendingFocusCount;

constexpr void __set_m_PendingFocusCount(int32_t value) ;

constexpr int32_t __get_m_PendingFocusCount() const;

 int32_t __declspec(property(get=__get__imguiKeyboardControl_k__BackingField, put=__set__imguiKeyboardControl_k__BackingField))  _imguiKeyboardControl_k__BackingField;

constexpr void __set__imguiKeyboardControl_k__BackingField(int32_t value) ;

constexpr int32_t __get__imguiKeyboardControl_k__BackingField() const;


// Properties

 UnityEngine::UIElements::IFocusRing __declspec(property(get=get_focusRing))  focusRing;

 UnityEngine::UIElements::Focusable __declspec(property(get=get_focusedElement))  focusedElement;

 int32_t __declspec(property(get=get_imguiKeyboardControl, put=set_imguiKeyboardControl))  imguiKeyboardControl;


// Methods

// Ctor Parameters [CppParam { name: "focusRing", ty: "UnityEngine::UIElements::IFocusRing", modifiers: "", def_value: None }]
explicit FocusController(UnityEngine::UIElements::IFocusRing focusRing) ;

/// @brief Method .ctor addr 0x2c81d8c size 0x98 virtual false final false
 void _ctor(UnityEngine::UIElements::IFocusRing focusRing) ;

/// @brief Method get_focusRing addr 0x2c81e24 size 0x8 virtual false final false
 UnityEngine::UIElements::IFocusRing get_focusRing() ;

/// @brief Method get_focusedElement addr 0x2c81e2c size 0x44 virtual false final false
 UnityEngine::UIElements::Focusable get_focusedElement() ;

/// @brief Method IsFocused addr 0x2c820b0 size 0x174 virtual false final false
 bool IsFocused(UnityEngine::UIElements::Focusable f) ;

/// @brief Method GetRetargetedFocusedElement addr 0x2c81e70 size 0x204 virtual false final false
 UnityEngine::UIElements::Focusable GetRetargetedFocusedElement(UnityEngine::UIElements::VisualElement retargetAgainst) ;

/// @brief Method GetLeafFocusedElement addr 0x2c82224 size 0xa4 virtual false final false
 UnityEngine::UIElements::Focusable GetLeafFocusedElement() ;

/// @brief Method IsLocalElement addr 0x2c82074 size 0x3c virtual false final false
 bool IsLocalElement(UnityEngine::UIElements::Focusable f) ;

/// @brief Method IsPendingFocus addr 0x2c822c8 size 0xb0 virtual false final false
 bool IsPendingFocus(UnityEngine::UIElements::Focusable f) ;

/// @brief Method SetFocusToLastFocusedElement addr 0x2c82378 size 0x88 virtual false final false
 void SetFocusToLastFocusedElement() ;

/// @brief Method BlurLastFocusedElement addr 0x2c82400 size 0x88 virtual false final false
 void BlurLastFocusedElement() ;

/// @brief Method DoFocusChange addr 0x2c82488 size 0x190 virtual false final false
 void DoFocusChange(UnityEngine::UIElements::Focusable f) ;

/// @brief Method FocusNextInDirection addr 0x2c82618 size 0xec virtual false final false
 UnityEngine::UIElements::Focusable FocusNextInDirection(UnityEngine::UIElements::FocusChangeDirection direction) ;

/// @brief Method AboutToReleaseFocus addr 0x2c82704 size 0x1c4 virtual false final false
 void AboutToReleaseFocus(UnityEngine::UIElements::Focusable focusable, UnityEngine::UIElements::Focusable willGiveFocusTo, UnityEngine::UIElements::FocusChangeDirection direction, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method ReleaseFocus addr 0x2c828c8 size 0x1c4 virtual false final false
 void ReleaseFocus(UnityEngine::UIElements::Focusable focusable, UnityEngine::UIElements::Focusable willGiveFocusTo, UnityEngine::UIElements::FocusChangeDirection direction, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method AboutToGrabFocus addr 0x2c82a8c size 0x1c4 virtual false final false
 void AboutToGrabFocus(UnityEngine::UIElements::Focusable focusable, UnityEngine::UIElements::Focusable willTakeFocusFrom, UnityEngine::UIElements::FocusChangeDirection direction, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method GrabFocus addr 0x2c82c50 size 0x1d0 virtual false final false
 void GrabFocus(UnityEngine::UIElements::Focusable focusable, UnityEngine::UIElements::Focusable willTakeFocusFrom, UnityEngine::UIElements::FocusChangeDirection direction, bool bIsFocusDelegated, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method Blur addr 0x2c81360 size 0x58 virtual false final false
 void Blur(UnityEngine::UIElements::Focusable focusable, bool bIsFocusDelegated, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method SwitchFocus addr 0x2c81270 size 0xb8 virtual false final false
 void SwitchFocus(UnityEngine::UIElements::Focusable newFocusedElement, bool bIsFocusDelegated, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method SwitchFocus addr 0x2c81a28 size 0x294 virtual false final false
 void SwitchFocus(UnityEngine::UIElements::Focusable newFocusedElement, UnityEngine::UIElements::FocusChangeDirection direction, bool bIsFocusDelegated, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method SwitchFocusOnEvent addr 0x2c815c8 size 0x2ec virtual false final false
 UnityEngine::UIElements::Focusable SwitchFocusOnEvent(UnityEngine::UIElements::EventBase e) ;

/// @brief Method ReevaluateFocus addr 0x2c82e20 size 0xc0 virtual false final false
 void ReevaluateFocus() ;

/// @brief Method GetFocusableParentForPointerEvent addr 0x2c82ee0 size 0x104 virtual false final false
 bool GetFocusableParentForPointerEvent(UnityEngine::UIElements::Focusable target, ByRef<UnityEngine::UIElements::Focusable> effectiveTarget) ;

/// @brief Method get_imguiKeyboardControl addr 0x2c82fe4 size 0x8 virtual false final false
 int32_t get_imguiKeyboardControl() ;

/// @brief Method set_imguiKeyboardControl addr 0x2c82fec size 0x8 virtual false final false
 void set_imguiKeyboardControl(int32_t value) ;

/// @brief Method SyncIMGUIFocus addr 0x2c82ff4 size 0xcc virtual false final false
 void SyncIMGUIFocus(int32_t imguiKeyboardControlID, UnityEngine::UIElements::Focusable imguiContainerHavingKeyboardControl, bool forceSwitch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::FocusController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::FocusController, "UnityEngine.UIElements", "FocusController");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__FocusController__FocusedElement, "UnityEngine.UIElements", "FocusController/FocusedElement");
