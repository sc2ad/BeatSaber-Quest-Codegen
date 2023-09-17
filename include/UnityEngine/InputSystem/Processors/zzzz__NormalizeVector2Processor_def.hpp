#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeVector2Processor;
}
// Type: UnityEngine.InputSystem.Processors::NormalizeVector2Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6319)), TypeDefinitionIndex(TypeDefinitionIndex(10184)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 393 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6671))
// CS Name: UnityEngine.InputSystem.Processors.NormalizeVector2Processor
class CORDL_TYPE NormalizeVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NormalizeVector2Processor() = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeVector2Processor", modifiers: " const&", def_value: None }]
constexpr NormalizeVector2Processor(NormalizeVector2Processor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeVector2Processor", modifiers: "&&", def_value: None }]
constexpr NormalizeVector2Processor(NormalizeVector2Processor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NormalizeVector2Processor(void* ptr) noexcept : ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>(ptr) {
}


  constexpr NormalizeVector2Processor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NormalizeVector2Processor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NormalizeVector2Processor& operator=(NormalizeVector2Processor&& o) noexcept = default;
  constexpr NormalizeVector2Processor& operator=(NormalizeVector2Processor const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x2966efc size 0xb4 virtual true final false
 ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x2966fb0 size 0x40 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit NormalizeVector2Processor() ;

/// @brief Method .ctor addr 0x2966ff0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor, "UnityEngine.InputSystem.Processors", "NormalizeVector2Processor");
