#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class InputEvent;
}
// Type: UnityEngine.UIElements::InputEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1641 }), TypeDefinitionIndex(TypeDefinitionIndex(7279))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7345))
// CS Name: UnityEngine.UIElements.InputEvent
class CORDL_TYPE InputEvent : public UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::InputEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InputEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: " const&", def_value: None }]
constexpr InputEvent(InputEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "&&", def_value: None }]
constexpr InputEvent(InputEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputEvent(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::InputEvent>(ptr) {
}


  constexpr InputEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputEvent& operator=(InputEvent&& o) noexcept = default;
  constexpr InputEvent& operator=(InputEvent const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__previousData_k__BackingField, put=__set__previousData_k__BackingField))  _previousData_k__BackingField;

constexpr void __set__previousData_k__BackingField(::StringW value) ;

constexpr ::StringW __get__previousData_k__BackingField() const;

 ::StringW __declspec(property(get=__get__newData_k__BackingField, put=__set__newData_k__BackingField))  _newData_k__BackingField;

constexpr void __set__newData_k__BackingField(::StringW value) ;

constexpr ::StringW __get__newData_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_previousData))  previousData;

 ::StringW __declspec(property(put=set_newData))  newData;


// Methods

/// @brief Method set_previousData addr 0x2cdb9b4 size 0x8 virtual false final false
 void set_previousData(::StringW value) ;

/// @brief Method set_newData addr 0x2cdb9bc size 0x8 virtual false final false
 void set_newData(::StringW value) ;

/// @brief Method Init addr 0x2cdb9c4 size 0x58 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cdba1c size 0x10 virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x2cdba2c size 0x84 virtual false final false
static UnityEngine::UIElements::InputEvent GetPooled(::StringW previousData, ::StringW newData) ;

static UnityEngine::UIElements::InputEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cdbab0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::InputEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::InputEvent, "UnityEngine.UIElements", "InputEvent");
