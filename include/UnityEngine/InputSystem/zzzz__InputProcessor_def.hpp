#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputProcessor;
}
// Type: UnityEngine.InputSystem::InputProcessor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6318))
// CS Name: UnityEngine.InputSystem.InputProcessor
class CORDL_TYPE InputProcessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: " const&", def_value: None }]
constexpr InputProcessor(InputProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: "&&", def_value: None }]
constexpr InputProcessor(InputProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor& operator=(InputProcessor&& o) noexcept = default;
  constexpr InputProcessor& operator=(InputProcessor const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=__get_s_Processors, put=__set_s_Processors))  s_Processors;

static void __set_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value) ;

static ::UnityEngine::InputSystem::Utilities::TypeTable __get_s_Processors() ;


// Methods

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method GetValueTypeFromType addr 0x28d6c78 size 0xf4 virtual false final false
static ::System::Type GetValueTypeFromType(::System::Type processorType) ;

// Ctor Parameters []
explicit InputProcessor() ;

/// @brief Method .ctor addr 0x28d6d6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputProcessor, "UnityEngine.InputSystem", "InputProcessor");
