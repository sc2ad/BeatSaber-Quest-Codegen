#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
// Type: UnityEngine.UIElements::PointerDownEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4681 }), TypeDefinitionIndex(TypeDefinitionIndex(7297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7298))
// CS Name: UnityEngine.UIElements.PointerDownEvent
class CORDL_TYPE PointerDownEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerDownEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerDownEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: " const&", def_value: None }]
constexpr PointerDownEvent(PointerDownEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "&&", def_value: None }]
constexpr PointerDownEvent(PointerDownEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerDownEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerDownEvent>(ptr) {
}


  constexpr PointerDownEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerDownEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerDownEvent& operator=(PointerDownEvent&& o) noexcept = default;
  constexpr PointerDownEvent& operator=(PointerDownEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cd7ae0 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd7b30 size 0x104 virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::PointerDownEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd7c34 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method PostDispatch addr 0x2cd7c84 size 0x264 virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerDownEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerDownEvent, "UnityEngine.UIElements", "PointerDownEvent");
