#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ClampProcessor;
}
// Type: UnityEngine.InputSystem.Processors::ClampProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(6319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6664))
// CS Name: UnityEngine.InputSystem.Processors.ClampProcessor
class CORDL_TYPE ClampProcessor : public UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ClampProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampProcessor", modifiers: " const&", def_value: None }]
constexpr ClampProcessor(ClampProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampProcessor", modifiers: "&&", def_value: None }]
constexpr ClampProcessor(ClampProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClampProcessor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<float_t>(ptr) {
}


  constexpr ClampProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClampProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClampProcessor& operator=(ClampProcessor&& o) noexcept = default;
  constexpr ClampProcessor& operator=(ClampProcessor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;

 float_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(float_t value) ;

constexpr float_t __get_max() const;


// Methods

/// @brief Method Process addr 0x29663c8 size 0x18 virtual true final false
 float_t Process(float_t value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x29663e0 size 0xa0 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit ClampProcessor() ;

/// @brief Method .ctor addr 0x2966480 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::ClampProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::ClampProcessor, "UnityEngine.InputSystem.Processors", "ClampProcessor");
