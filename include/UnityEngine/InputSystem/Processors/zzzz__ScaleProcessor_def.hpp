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
class ScaleProcessor;
}
// Type: UnityEngine.InputSystem.Processors::ScaleProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6319)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6673))
// CS Name: UnityEngine.InputSystem.Processors.ScaleProcessor
class CORDL_TYPE ScaleProcessor : public UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScaleProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleProcessor", modifiers: " const&", def_value: None }]
constexpr ScaleProcessor(ScaleProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleProcessor", modifiers: "&&", def_value: None }]
constexpr ScaleProcessor(ScaleProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScaleProcessor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<float_t>(ptr) {
}


  constexpr ScaleProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScaleProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScaleProcessor& operator=(ScaleProcessor&& o) noexcept = default;
  constexpr ScaleProcessor& operator=(ScaleProcessor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_factor, put=__set_factor))  factor;

constexpr void __set_factor(float_t value) ;

constexpr float_t __get_factor() const;


// Methods

/// @brief Method Process addr 0x2967190 size 0xc virtual true final false
 float_t Process(float_t value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x296719c size 0x84 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit ScaleProcessor() ;

/// @brief Method .ctor addr 0x2967220 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::ScaleProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::ScaleProcessor, "UnityEngine.InputSystem.Processors", "ScaleProcessor");
