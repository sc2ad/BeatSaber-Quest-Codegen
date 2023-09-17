#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::Events {
class UnityAction;
}
// Forward declare root types
namespace UnityEngine::Events {
class InvokableCall;
}
// Type: UnityEngine.Events::InvokableCall
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10387))
// CS Name: UnityEngine.Events.InvokableCall
class CORDL_TYPE InvokableCall : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InvokableCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall", modifiers: " const&", def_value: None }]
constexpr InvokableCall(InvokableCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall", modifiers: "&&", def_value: None }]
constexpr InvokableCall(InvokableCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall& operator=(InvokableCall&& o) noexcept = default;
  constexpr InvokableCall& operator=(InvokableCall const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction value) ;

constexpr ::UnityEngine::Events::UnityAction __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x2b7f468 size 0x9c virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction value) ;

/// @brief Method remove_Delegate addr 0x2b7f504 size 0x9c virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x2b7f5a0 size 0xe8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction", modifiers: "", def_value: None }]
explicit InvokableCall(::UnityEngine::Events::UnityAction action) ;

/// @brief Method .ctor addr 0x2b7f688 size 0x2c virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction action) ;

/// @brief Method Invoke addr 0x2b7f6b4 size 0x3c virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x2b7f6f0 size 0x3c virtual false final false
 void Invoke() ;

/// @brief Method Find addr 0x2b7f72c size 0x4c virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Events::InvokableCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::InvokableCall, "UnityEngine.Events", "InvokableCall");
