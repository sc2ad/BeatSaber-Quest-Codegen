#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
// Type: UnityEngine.InputSystem.Layouts::InputDeviceFindControlLayoutDelegate
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6678))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceFindControlLayoutDelegate
class CORDL_TYPE InputDeviceFindControlLayoutDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~InputDeviceFindControlLayoutDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceFindControlLayoutDelegate", modifiers: " const&", def_value: None }]
constexpr InputDeviceFindControlLayoutDelegate(InputDeviceFindControlLayoutDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceFindControlLayoutDelegate", modifiers: "&&", def_value: None }]
constexpr InputDeviceFindControlLayoutDelegate(InputDeviceFindControlLayoutDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputDeviceFindControlLayoutDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr InputDeviceFindControlLayoutDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputDeviceFindControlLayoutDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputDeviceFindControlLayoutDelegate& operator=(InputDeviceFindControlLayoutDelegate&& o) noexcept = default;
  constexpr InputDeviceFindControlLayoutDelegate& operator=(InputDeviceFindControlLayoutDelegate const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2967938 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2967a10 size 0x14 virtual true final false
 ::StringW Invoke(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout, UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate executeDeviceCommand) ;

/// @brief Method BeginInvoke addr 0x2967a24 size 0xa0 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout, UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate executeDeviceCommand, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2967ac4 size 0x1c virtual true final false
 ::StringW EndInvoke(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate, "UnityEngine.InputSystem.Layouts", "InputDeviceFindControlLayoutDelegate");
