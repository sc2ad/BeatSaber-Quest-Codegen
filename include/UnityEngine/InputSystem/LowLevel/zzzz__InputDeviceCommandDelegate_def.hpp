#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
// Type: UnityEngine.InputSystem.LowLevel::InputDeviceCommandDelegate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6552))
// CS Name: UnityEngine.InputSystem.LowLevel.InputDeviceCommandDelegate
class CORDL_TYPE InputDeviceCommandDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~InputDeviceCommandDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceCommandDelegate", modifiers: " const&", def_value: None }]
constexpr InputDeviceCommandDelegate(InputDeviceCommandDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceCommandDelegate", modifiers: "&&", def_value: None }]
constexpr InputDeviceCommandDelegate(InputDeviceCommandDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputDeviceCommandDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr InputDeviceCommandDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputDeviceCommandDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputDeviceCommandDelegate& operator=(InputDeviceCommandDelegate&& o) noexcept = default;
  constexpr InputDeviceCommandDelegate& operator=(InputDeviceCommandDelegate const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2954d54 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2954e84 size 0x14 virtual true final false
 System::Nullable_1<int64_t> Invoke(UnityEngine::InputSystem::InputDevice device, void* command) ;

/// @brief Method BeginInvoke addr 0x2954e98 size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::InputSystem::InputDevice device, void* command, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2954ec0 size 0x2c virtual true final false
 System::Nullable_1<int64_t> EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate, "UnityEngine.InputSystem.LowLevel", "InputDeviceCommandDelegate");
