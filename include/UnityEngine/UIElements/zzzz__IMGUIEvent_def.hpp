#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMGUIEvent;
}
// Type: UnityEngine.UIElements::IMGUIEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1640 }), TypeDefinitionIndex(TypeDefinitionIndex(7279))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7256))
// CS Name: UnityEngine.UIElements.IMGUIEvent
class CORDL_TYPE IMGUIEvent : public UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::IMGUIEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~IMGUIEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: " const&", def_value: None }]
constexpr IMGUIEvent(IMGUIEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: "&&", def_value: None }]
constexpr IMGUIEvent(IMGUIEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMGUIEvent(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::IMGUIEvent>(ptr) {
}


  constexpr IMGUIEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IMGUIEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IMGUIEvent& operator=(IMGUIEvent&& o) noexcept = default;
  constexpr IMGUIEvent& operator=(IMGUIEvent const& o) noexcept = default;
                


// Methods

/// @brief Method GetPooled addr 0x2cd26f0 size 0x84 virtual false final false
static UnityEngine::UIElements::IMGUIEvent GetPooled(UnityEngine::Event systemEvent) ;

/// @brief Method Init addr 0x2cd2828 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd287c size 0xc virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::IMGUIEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd2888 size 0x78 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IMGUIEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IMGUIEvent, "UnityEngine.UIElements", "IMGUIEvent");
