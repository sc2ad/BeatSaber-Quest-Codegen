#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusInEvent;
}
// Type: UnityEngine.UIElements::FocusInEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7331), inst: 1903 }), TypeDefinitionIndex(TypeDefinitionIndex(7331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7334))
// CS Name: UnityEngine.UIElements.FocusInEvent
class CORDL_TYPE FocusInEvent : public UnityEngine::UIElements::FocusEventBase_1<UnityEngine::UIElements::FocusInEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FocusInEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusInEvent", modifiers: " const&", def_value: None }]
constexpr FocusInEvent(FocusInEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusInEvent", modifiers: "&&", def_value: None }]
constexpr FocusInEvent(FocusInEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FocusInEvent(void* ptr) noexcept : UnityEngine::UIElements::FocusEventBase_1<UnityEngine::UIElements::FocusInEvent>(ptr) {
}


  constexpr FocusInEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FocusInEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FocusInEvent& operator=(FocusInEvent&& o) noexcept = default;
  constexpr FocusInEvent& operator=(FocusInEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cdad5c size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cdadb0 size 0xc virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::FocusInEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cdadbc size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::FocusInEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::FocusInEvent, "UnityEngine.UIElements", "FocusInEvent");
