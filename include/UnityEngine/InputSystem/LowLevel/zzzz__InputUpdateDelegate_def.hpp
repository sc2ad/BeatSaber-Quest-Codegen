#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdateDelegate;
}
// Type: UnityEngine.InputSystem.LowLevel::InputUpdateDelegate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6631))
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdateDelegate
class CORDL_TYPE InputUpdateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~InputUpdateDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputUpdateDelegate", modifiers: " const&", def_value: None }]
constexpr InputUpdateDelegate(InputUpdateDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputUpdateDelegate", modifiers: "&&", def_value: None }]
constexpr InputUpdateDelegate(InputUpdateDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputUpdateDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr InputUpdateDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputUpdateDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputUpdateDelegate& operator=(InputUpdateDelegate&& o) noexcept = default;
  constexpr InputUpdateDelegate& operator=(InputUpdateDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit InputUpdateDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x295e0ac size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x295e170 size 0x14 virtual true final false
 void Invoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer) ;

/// @brief Method BeginInvoke addr 0x295e184 size 0xb8 virtual true final false
 ::System::IAsyncResult BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x295e23c size 0x1c virtual true final false
 void EndInvoke(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate, "UnityEngine.InputSystem.LowLevel", "InputUpdateDelegate");
