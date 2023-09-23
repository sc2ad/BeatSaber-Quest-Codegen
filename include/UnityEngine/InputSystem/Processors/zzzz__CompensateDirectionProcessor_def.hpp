#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class CompensateDirectionProcessor;
}
// Type: UnityEngine.InputSystem.Processors::CompensateDirectionProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10190)), TypeDefinitionIndex(TypeDefinitionIndex(6319)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 394 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6665))
// CS Name: UnityEngine.InputSystem.Processors.CompensateDirectionProcessor
class CORDL_TYPE CompensateDirectionProcessor : public UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CompensateDirectionProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompensateDirectionProcessor", modifiers: " const&", def_value: None }]
constexpr CompensateDirectionProcessor(CompensateDirectionProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompensateDirectionProcessor", modifiers: "&&", def_value: None }]
constexpr CompensateDirectionProcessor(CompensateDirectionProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompensateDirectionProcessor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>(ptr) {
}


  constexpr CompensateDirectionProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompensateDirectionProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompensateDirectionProcessor& operator=(CompensateDirectionProcessor&& o) noexcept = default;
  constexpr CompensateDirectionProcessor& operator=(CompensateDirectionProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x29664c8 size 0x1f0 virtual true final false
 UnityEngine::Vector3 Process(UnityEngine::Vector3 value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x29666b8 size 0x40 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit CompensateDirectionProcessor() ;

/// @brief Method .ctor addr 0x29666f8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::CompensateDirectionProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::CompensateDirectionProcessor, "UnityEngine.InputSystem.Processors", "CompensateDirectionProcessor");
