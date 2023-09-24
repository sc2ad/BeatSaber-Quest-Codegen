#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class FocusController;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class FocusEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class FocusEventBase_1<T>;
}
// Type: UnityEngine.UIElements::FocusEventBase`1
// Type: UnityEngine.UIElements::FocusEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1629 }), TypeDefinitionIndex(TypeDefinitionIndex(7279)), TypeDefinitionIndex(TypeDefinitionIndex(7331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7331), inst: 2 })
// CS Name: UnityEngine.UIElements.FocusEventBase`1
class CORDL_TYPE FocusEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FocusEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusEventBase_1", modifiers: " const&", def_value: None }]
constexpr FocusEventBase_1(FocusEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusEventBase_1", modifiers: "&&", def_value: None }]
constexpr FocusEventBase_1(FocusEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FocusEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr FocusEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FocusEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FocusEventBase_1& operator=(FocusEventBase_1&& o) noexcept = default;
  constexpr FocusEventBase_1& operator=(FocusEventBase_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::Focusable __declspec(property(get=__get__relatedTarget_k__BackingField, put=__set__relatedTarget_k__BackingField))  _relatedTarget_k__BackingField;

constexpr void __set__relatedTarget_k__BackingField(UnityEngine::UIElements::Focusable value) ;

constexpr UnityEngine::UIElements::Focusable __get__relatedTarget_k__BackingField() const;

 UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=__get__direction_k__BackingField, put=__set__direction_k__BackingField))  _direction_k__BackingField;

constexpr void __set__direction_k__BackingField(UnityEngine::UIElements::FocusChangeDirection value) ;

constexpr UnityEngine::UIElements::FocusChangeDirection __get__direction_k__BackingField() const;

 UnityEngine::UIElements::FocusController __declspec(property(get=__get__focusController_k__BackingField, put=__set__focusController_k__BackingField))  _focusController_k__BackingField;

constexpr void __set__focusController_k__BackingField(UnityEngine::UIElements::FocusController value) ;

constexpr UnityEngine::UIElements::FocusController __get__focusController_k__BackingField() const;

 bool __declspec(property(get=__get__IsFocusDelegated_k__BackingField, put=__set__IsFocusDelegated_k__BackingField))  _IsFocusDelegated_k__BackingField;

constexpr void __set__IsFocusDelegated_k__BackingField(bool value) ;

constexpr bool __get__IsFocusDelegated_k__BackingField() const;


// Properties

 UnityEngine::UIElements::Focusable __declspec(property(get=get_relatedTarget, put=set_relatedTarget))  relatedTarget;

 UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=get_direction, put=set_direction))  direction;

 UnityEngine::UIElements::FocusController __declspec(property(get=get_focusController, put=set_focusController))  focusController;

 bool __declspec(property(get=get_IsFocusDelegated, put=set_IsFocusDelegated))  IsFocusDelegated;


// Methods

/// @brief Method get_relatedTarget addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::Focusable get_relatedTarget() ;

/// @brief Method set_relatedTarget addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_relatedTarget(UnityEngine::UIElements::Focusable value) ;

/// @brief Method get_direction addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::FocusChangeDirection get_direction() ;

/// @brief Method set_direction addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_direction(UnityEngine::UIElements::FocusChangeDirection value) ;

/// @brief Method get_focusController addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::FocusController get_focusController() ;

/// @brief Method set_focusController addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_focusController(UnityEngine::UIElements::FocusController value) ;

/// @brief Method get_IsFocusDelegated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsFocusDelegated() ;

/// @brief Method set_IsFocusDelegated addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_IsFocusDelegated(bool value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::IEventHandler target, UnityEngine::UIElements::Focusable relatedTarget, UnityEngine::UIElements::FocusChangeDirection direction, UnityEngine::UIElements::FocusController focusController, bool bIsFocusDelegated) ;

static UnityEngine::UIElements::FocusEventBase_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::FocusEventBase_1, "UnityEngine.UIElements", "FocusEventBase`1");
