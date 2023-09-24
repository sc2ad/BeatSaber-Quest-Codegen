#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class StepCounter;
}
// Type: UnityEngine.InputSystem::StepCounter
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6369))
// CS Name: UnityEngine.InputSystem.StepCounter
class CORDL_TYPE StepCounter : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~StepCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "StepCounter", modifiers: " const&", def_value: None }]
constexpr StepCounter(StepCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StepCounter", modifiers: "&&", def_value: None }]
constexpr StepCounter(StepCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StepCounter(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr StepCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StepCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StepCounter& operator=(StepCounter&& o) noexcept = default;
  constexpr StepCounter& operator=(StepCounter const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__stepCounter_k__BackingField, put=__set__stepCounter_k__BackingField))  _stepCounter_k__BackingField;

constexpr void __set__stepCounter_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__stepCounter_k__BackingField() const;

static UnityEngine::InputSystem::StepCounter __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::StepCounter value) ;

static UnityEngine::InputSystem::StepCounter __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_stepCounter, put=set_stepCounter))  stepCounter;

static UnityEngine::InputSystem::StepCounter __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_stepCounter addr 0x2916838 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_stepCounter() ;

/// @brief Method set_stepCounter addr 0x2916840 size 0x8 virtual false final false
 void set_stepCounter(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_current addr 0x2916848 size 0x48 virtual false final false
static UnityEngine::InputSystem::StepCounter get_current() ;

/// @brief Method set_current addr 0x2916890 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::StepCounter value) ;

/// @brief Method MakeCurrent addr 0x29168dc size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2916930 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29169b4 size 0x78 virtual true final false
 void FinishSetup() ;

static UnityEngine::InputSystem::StepCounter New_ctor() ;

/// @brief Method .ctor addr 0x2916a2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::StepCounter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::StepCounter, "UnityEngine.InputSystem", "StepCounter");
