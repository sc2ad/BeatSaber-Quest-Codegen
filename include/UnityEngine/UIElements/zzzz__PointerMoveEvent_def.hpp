#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Type: UnityEngine.UIElements::PointerMoveEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 1650 }), TypeDefinitionIndex(TypeDefinitionIndex(7297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7299))
// CS Name: UnityEngine.UIElements.PointerMoveEvent
class CORDL_TYPE PointerMoveEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerMoveEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerMoveEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: " const&", def_value: None }]
constexpr PointerMoveEvent(PointerMoveEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "&&", def_value: None }]
constexpr PointerMoveEvent(PointerMoveEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerMoveEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerMoveEvent>(ptr) {
}


  constexpr PointerMoveEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerMoveEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerMoveEvent& operator=(PointerMoveEvent&& o) noexcept = default;
  constexpr PointerMoveEvent& operator=(PointerMoveEvent const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isHandledByDraggable_k__BackingField, put=__set__isHandledByDraggable_k__BackingField))  _isHandledByDraggable_k__BackingField;

constexpr void __set__isHandledByDraggable_k__BackingField(bool value) ;

constexpr bool __get__isHandledByDraggable_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isHandledByDraggable, put=set_isHandledByDraggable))  isHandledByDraggable;


// Methods

/// @brief Method get_isHandledByDraggable addr 0x2cd7eec size 0x8 virtual false final false
 bool get_isHandledByDraggable() ;

/// @brief Method set_isHandledByDraggable addr 0x2cd7ef4 size 0xc virtual false final false
 void set_isHandledByDraggable(bool value) ;

/// @brief Method Init addr 0x2cd7f00 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd7f50 size 0x10c virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::PointerMoveEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd805c size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method PostDispatch addr 0x2cd80ac size 0x608 virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerMoveEvent, "UnityEngine.UIElements", "PointerMoveEvent");
