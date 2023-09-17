#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class DelegateHelpers;
}
// Type: UnityEngine.InputSystem.Utilities::DelegateHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6747))
// CS Name: UnityEngine.InputSystem.Utilities.DelegateHelpers
class CORDL_TYPE DelegateHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DelegateHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: " const&", def_value: None }]
constexpr DelegateHelpers(DelegateHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: "&&", def_value: None }]
constexpr DelegateHelpers(DelegateHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateHelpers& operator=(DelegateHelpers&& o) noexcept = default;
  constexpr DelegateHelpers& operator=(DelegateHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method InvokeCallbacksSafe addr 0x297cd94 size 0x2bc virtual false final false
static void InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action>> callbacks, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method InvokeCallbacksSafe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<TValue>>> callbacks, TValue argument, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method InvokeCallbacksSafe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue1,typename TValue2>
static void InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<TValue1,TValue2>>> callbacks, TValue1 argument1, TValue2 argument2, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method InvokeCallbacksSafe_AnyCallbackReturnsTrue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue1,typename TValue2>
static bool InvokeCallbacksSafe_AnyCallbackReturnsTrue(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<TValue1,TValue2,bool>>> callbacks, TValue1 argument1, TValue2 argument2, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::DelegateHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::DelegateHelpers, "UnityEngine.InputSystem.Utilities", "DelegateHelpers");
