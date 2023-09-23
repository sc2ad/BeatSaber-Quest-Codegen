#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class CompensateRotationProcessor;
}
// Type: UnityEngine.InputSystem.Processors::CompensateRotationProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 3222 }), TypeDefinitionIndex(TypeDefinitionIndex(6319)), TypeDefinitionIndex(TypeDefinitionIndex(10193))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6666))
// CS Name: UnityEngine.InputSystem.Processors.CompensateRotationProcessor
class CORDL_TYPE CompensateRotationProcessor : public UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CompensateRotationProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompensateRotationProcessor", modifiers: " const&", def_value: None }]
constexpr CompensateRotationProcessor(CompensateRotationProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompensateRotationProcessor", modifiers: "&&", def_value: None }]
constexpr CompensateRotationProcessor(CompensateRotationProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompensateRotationProcessor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>(ptr) {
}


  constexpr CompensateRotationProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompensateRotationProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompensateRotationProcessor& operator=(CompensateRotationProcessor&& o) noexcept = default;
  constexpr CompensateRotationProcessor& operator=(CompensateRotationProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x2966740 size 0x210 virtual true final false
 UnityEngine::Quaternion Process(UnityEngine::Quaternion value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x2966950 size 0x40 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit CompensateRotationProcessor() ;

/// @brief Method .ctor addr 0x2966990 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::CompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::CompensateRotationProcessor, "UnityEngine.InputSystem.Processors", "CompensateRotationProcessor");
