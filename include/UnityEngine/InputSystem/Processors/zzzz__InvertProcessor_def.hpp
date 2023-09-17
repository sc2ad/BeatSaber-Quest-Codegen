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
class InvertProcessor;
}
// Type: UnityEngine.InputSystem.Processors::InvertProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(6319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6667))
// CS Name: UnityEngine.InputSystem.Processors.InvertProcessor
class CORDL_TYPE InvertProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InvertProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvertProcessor", modifiers: " const&", def_value: None }]
constexpr InvertProcessor(InvertProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvertProcessor", modifiers: "&&", def_value: None }]
constexpr InvertProcessor(InvertProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvertProcessor(void* ptr) noexcept : ::UnityEngine::InputSystem::InputProcessor_1<float_t>(ptr) {
}


  constexpr InvertProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvertProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvertProcessor& operator=(InvertProcessor&& o) noexcept = default;
  constexpr InvertProcessor& operator=(InvertProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x29669d8 size 0x8 virtual true final false
 float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x29669e0 size 0x40 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit InvertProcessor() ;

/// @brief Method .ctor addr 0x2966a20 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::InvertProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::InvertProcessor, "UnityEngine.InputSystem.Processors", "InvertProcessor");
