#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WheelEvent;
}
// Type: UnityEngine.UIElements::WheelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4514 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7319))
// CS Name: UnityEngine.UIElements.WheelEvent
class CORDL_TYPE WheelEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::WheelEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~WheelEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: " const&", def_value: None }]
constexpr WheelEvent(WheelEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: "&&", def_value: None }]
constexpr WheelEvent(WheelEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WheelEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::WheelEvent>(ptr) {
}


  constexpr WheelEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WheelEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WheelEvent& operator=(WheelEvent&& o) noexcept = default;
  constexpr WheelEvent& operator=(WheelEvent const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__delta_k__BackingField, put=__set__delta_k__BackingField))  _delta_k__BackingField;

constexpr void __set__delta_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__delta_k__BackingField() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_delta, put=set_delta))  delta;


// Methods

/// @brief Method get_delta addr 0x2cda028 size 0xc virtual false final false
 UnityEngine::Vector3 get_delta() ;

/// @brief Method set_delta addr 0x2cda034 size 0xc virtual false final false
 void set_delta(UnityEngine::Vector3 value) ;

/// @brief Method GetPooled addr 0x2cda040 size 0x7c virtual false final false
static UnityEngine::UIElements::WheelEvent GetPooled(UnityEngine::Event systemEvent) ;

/// @brief Method GetPooled addr 0x2cda0bc size 0x78 virtual false final false
static UnityEngine::UIElements::WheelEvent GetPooled(UnityEngine::Vector3 delta, UnityEngine::UIElements::IPointerEvent pointerEvent) ;

/// @brief Method Init addr 0x2cda134 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cda184 size 0x60 virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::WheelEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cda1e4 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::WheelEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::WheelEvent, "UnityEngine.UIElements", "WheelEvent");
