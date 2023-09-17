#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TooltipEvent;
}
// Type: UnityEngine.UIElements::TooltipEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1642 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7273))
// CS Name: UnityEngine.UIElements.TooltipEvent
class CORDL_TYPE TooltipEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::TooltipEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~TooltipEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TooltipEvent", modifiers: " const&", def_value: None }]
constexpr TooltipEvent(TooltipEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TooltipEvent", modifiers: "&&", def_value: None }]
constexpr TooltipEvent(TooltipEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TooltipEvent(void* ptr) noexcept : ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::TooltipEvent>(ptr) {
}


  constexpr TooltipEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TooltipEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TooltipEvent& operator=(TooltipEvent&& o) noexcept = default;
  constexpr TooltipEvent& operator=(TooltipEvent const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__tooltip_k__BackingField, put=__set__tooltip_k__BackingField))  _tooltip_k__BackingField;

constexpr void __set__tooltip_k__BackingField(::StringW value) ;

constexpr ::StringW __get__tooltip_k__BackingField() const;

 ::UnityEngine::Rect __declspec(property(get=__get__rect_k__BackingField, put=__set__rect_k__BackingField))  _rect_k__BackingField;

constexpr void __set__rect_k__BackingField(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get__rect_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_tooltip))  tooltip;

 ::UnityEngine::Rect __declspec(property(put=set_rect))  rect;


// Methods

/// @brief Method set_tooltip addr 0x2cd5c60 size 0x8 virtual false final false
 void set_tooltip(::StringW value) ;

/// @brief Method set_rect addr 0x2cd5c68 size 0xc virtual false final false
 void set_rect(::UnityEngine::Rect value) ;

/// @brief Method Init addr 0x2cd5c74 size 0x90 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd5d04 size 0x5c virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit TooltipEvent() ;

/// @brief Method .ctor addr 0x2cd5d7c size 0xb4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::TooltipEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TooltipEvent, "UnityEngine.UIElements", "TooltipEvent");
