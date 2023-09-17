#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Type: UnityEngine.Events::BaseInvokableCall
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10386))
// CS Name: UnityEngine.Events.BaseInvokableCall
class CORDL_TYPE BaseInvokableCall : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BaseInvokableCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInvokableCall", modifiers: " const&", def_value: None }]
constexpr BaseInvokableCall(BaseInvokableCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInvokableCall", modifiers: "&&", def_value: None }]
constexpr BaseInvokableCall(BaseInvokableCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseInvokableCall(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseInvokableCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseInvokableCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseInvokableCall& operator=(BaseInvokableCall&& o) noexcept = default;
  constexpr BaseInvokableCall& operator=(BaseInvokableCall const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit BaseInvokableCall() ;

/// @brief Method .ctor addr 0x2b7f2d0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "function", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit BaseInvokableCall(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo function) ;

/// @brief Method .ctor addr 0x2b7f2d8 size 0xe8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo function) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method ThrowOnInvalidArg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void ThrowOnInvalidArg(::bs_hook::Il2CppWrapperType arg) ;

/// @brief Method AllowInvoke addr 0x2b7f3c0 size 0xa8 virtual false final false
static bool AllowInvoke(::System::Delegate delegate) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Events::BaseInvokableCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::BaseInvokableCall, "UnityEngine.Events", "BaseInvokableCall");
