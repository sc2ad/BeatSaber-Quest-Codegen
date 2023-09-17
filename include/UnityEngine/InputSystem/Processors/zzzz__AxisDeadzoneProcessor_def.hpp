#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class AxisDeadzoneProcessor;
}
// Type: UnityEngine.InputSystem.Processors::AxisDeadzoneProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(6319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6663))
// CS Name: UnityEngine.InputSystem.Processors.AxisDeadzoneProcessor
class CORDL_TYPE AxisDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AxisDeadzoneProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisDeadzoneProcessor", modifiers: " const&", def_value: None }]
constexpr AxisDeadzoneProcessor(AxisDeadzoneProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisDeadzoneProcessor", modifiers: "&&", def_value: None }]
constexpr AxisDeadzoneProcessor(AxisDeadzoneProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AxisDeadzoneProcessor(void* ptr) noexcept : ::UnityEngine::InputSystem::InputProcessor_1<float_t>(ptr) {
}


  constexpr AxisDeadzoneProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AxisDeadzoneProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AxisDeadzoneProcessor& operator=(AxisDeadzoneProcessor&& o) noexcept = default;
  constexpr AxisDeadzoneProcessor& operator=(AxisDeadzoneProcessor const& o) noexcept = default;
                


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

/// @brief Method get_minOrDefault addr 0x2966190 size 0x70 virtual false final false
 float_t get_minOrDefault() ;

/// @brief Method get_maxOrDefault addr 0x2966200 size 0x70 virtual false final false
 float_t get_maxOrDefault() ;

/// @brief Method Process addr 0x2966270 size 0x68 virtual true final false
 float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x29662d8 size 0xa8 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit AxisDeadzoneProcessor() ;

/// @brief Method .ctor addr 0x2966380 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor, "UnityEngine.InputSystem.Processors", "AxisDeadzoneProcessor");
