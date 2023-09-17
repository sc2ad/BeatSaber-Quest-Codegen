#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeVector3Processor;
}
// Type: UnityEngine.InputSystem.Processors::NormalizeVector3Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 394 }), TypeDefinitionIndex(TypeDefinitionIndex(10190)), TypeDefinitionIndex(TypeDefinitionIndex(6319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6672))
// CS Name: UnityEngine.InputSystem.Processors.NormalizeVector3Processor
class CORDL_TYPE NormalizeVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NormalizeVector3Processor() = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeVector3Processor", modifiers: " const&", def_value: None }]
constexpr NormalizeVector3Processor(NormalizeVector3Processor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeVector3Processor", modifiers: "&&", def_value: None }]
constexpr NormalizeVector3Processor(NormalizeVector3Processor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NormalizeVector3Processor(void* ptr) noexcept : ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>(ptr) {
}


  constexpr NormalizeVector3Processor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NormalizeVector3Processor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NormalizeVector3Processor& operator=(NormalizeVector3Processor&& o) noexcept = default;
  constexpr NormalizeVector3Processor& operator=(NormalizeVector3Processor const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x2967038 size 0xd0 virtual true final false
 ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x2967108 size 0x40 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit NormalizeVector3Processor() ;

/// @brief Method .ctor addr 0x2967148 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeVector3Processor, "UnityEngine.InputSystem.Processors", "NormalizeVector3Processor");
