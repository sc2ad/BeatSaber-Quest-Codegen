#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
// Type: UnityEngine.InputSystem.LowLevel::InputDeviceExecuteCommandDelegate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6553))
// CS Name: UnityEngine.InputSystem.LowLevel.InputDeviceExecuteCommandDelegate
class CORDL_TYPE InputDeviceExecuteCommandDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~InputDeviceExecuteCommandDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceExecuteCommandDelegate", modifiers: " const&", def_value: None }]
constexpr InputDeviceExecuteCommandDelegate(InputDeviceExecuteCommandDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceExecuteCommandDelegate", modifiers: "&&", def_value: None }]
constexpr InputDeviceExecuteCommandDelegate(InputDeviceExecuteCommandDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputDeviceExecuteCommandDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr InputDeviceExecuteCommandDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputDeviceExecuteCommandDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputDeviceExecuteCommandDelegate& operator=(InputDeviceExecuteCommandDelegate&& o) noexcept = default;
  constexpr InputDeviceExecuteCommandDelegate& operator=(InputDeviceExecuteCommandDelegate const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2954eec size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2954fc0 size 0x14 virtual true final false
 int64_t Invoke(ByRef<UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command) ;

/// @brief Method BeginInvoke addr 0x2954fd4 size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2955060 size 0x2c virtual true final false
 int64_t EndInvoke(ByRef<UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate, "UnityEngine.InputSystem.LowLevel", "InputDeviceExecuteCommandDelegate");
