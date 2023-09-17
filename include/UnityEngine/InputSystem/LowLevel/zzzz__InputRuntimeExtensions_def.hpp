#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputRuntimeExtensions;
}
// Type: UnityEngine.InputSystem.LowLevel::InputRuntimeExtensions
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6634))
// CS Name: UnityEngine.InputSystem.LowLevel.InputRuntimeExtensions
class CORDL_TYPE InputRuntimeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputRuntimeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputRuntimeExtensions", modifiers: " const&", def_value: None }]
constexpr InputRuntimeExtensions(InputRuntimeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputRuntimeExtensions", modifiers: "&&", def_value: None }]
constexpr InputRuntimeExtensions(InputRuntimeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputRuntimeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputRuntimeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputRuntimeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputRuntimeExtensions& operator=(InputRuntimeExtensions&& o) noexcept = default;
  constexpr InputRuntimeExtensions& operator=(InputRuntimeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method DeviceCommand addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TCommand>
static int64_t DeviceCommand(::UnityEngine::InputSystem::LowLevel::IInputRuntime runtime, int32_t deviceId, ByRef<TCommand> command) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions, "UnityEngine.InputSystem.LowLevel", "InputRuntimeExtensions");
