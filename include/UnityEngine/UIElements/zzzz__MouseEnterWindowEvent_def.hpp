#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterWindowEvent;
}
// Type: UnityEngine.UIElements::MouseEnterWindowEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4507 }), TypeDefinitionIndex(TypeDefinitionIndex(7314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7322))
// CS Name: UnityEngine.UIElements.MouseEnterWindowEvent
class CORDL_TYPE MouseEnterWindowEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseEnterWindowEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseEnterWindowEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: " const&", def_value: None }]
constexpr MouseEnterWindowEvent(MouseEnterWindowEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: "&&", def_value: None }]
constexpr MouseEnterWindowEvent(MouseEnterWindowEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseEnterWindowEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseEnterWindowEvent>(ptr) {
}


  constexpr MouseEnterWindowEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseEnterWindowEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseEnterWindowEvent& operator=(MouseEnterWindowEvent&& o) noexcept = default;
  constexpr MouseEnterWindowEvent& operator=(MouseEnterWindowEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cda39c size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cda3f0 size 0xc virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::MouseEnterWindowEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cda3fc size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method PostDispatch addr 0x2cda450 size 0x15c virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseEnterWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseEnterWindowEvent, "UnityEngine.UIElements", "MouseEnterWindowEvent");
