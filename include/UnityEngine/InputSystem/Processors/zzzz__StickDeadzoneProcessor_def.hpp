#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class StickDeadzoneProcessor;
}
// Type: UnityEngine.InputSystem.Processors::StickDeadzoneProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(10184)), TypeDefinitionIndex(TypeDefinitionIndex(6319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6676))
// CS Name: UnityEngine.InputSystem.Processors.StickDeadzoneProcessor
class CORDL_TYPE StickDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StickDeadzoneProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "StickDeadzoneProcessor", modifiers: " const&", def_value: None }]
constexpr StickDeadzoneProcessor(StickDeadzoneProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StickDeadzoneProcessor", modifiers: "&&", def_value: None }]
constexpr StickDeadzoneProcessor(StickDeadzoneProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StickDeadzoneProcessor(void* ptr) noexcept : ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>(ptr) {
}


  constexpr StickDeadzoneProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StickDeadzoneProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StickDeadzoneProcessor& operator=(StickDeadzoneProcessor&& o) noexcept = default;
  constexpr StickDeadzoneProcessor& operator=(StickDeadzoneProcessor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;

 float_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(float_t value) ;

constexpr float_t __get_max() const;


// Properties

 float_t __declspec(property(get=get_minOrDefault))  minOrDefault;

 float_t __declspec(property(get=get_maxOrDefault))  maxOrDefault;


// Methods

/// @brief Method get_minOrDefault addr 0x29674a4 size 0x70 virtual false final false
 float_t get_minOrDefault() ;

/// @brief Method get_maxOrDefault addr 0x2967514 size 0x70 virtual false final false
 float_t get_maxOrDefault() ;

/// @brief Method Process addr 0x2967584 size 0xd0 virtual true final false
 ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method GetDeadZoneAdjustedValue addr 0x2967654 size 0x68 virtual false final false
 float_t GetDeadZoneAdjustedValue(float_t value) ;

/// @brief Method ToString addr 0x29676bc size 0xa8 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit StickDeadzoneProcessor() ;

/// @brief Method .ctor addr 0x2967764 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor, "UnityEngine.InputSystem.Processors", "StickDeadzoneProcessor");
