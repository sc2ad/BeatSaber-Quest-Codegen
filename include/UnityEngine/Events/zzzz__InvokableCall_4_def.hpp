#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2,typename T3>
class UnityAction_4;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T1,typename T2,typename T3,typename T4>
class InvokableCall_4;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
class InvokableCall_4<T1,T2,T3,T4>;
}
// Type: UnityEngine.Events::InvokableCall`4
// Type: UnityEngine.Events::InvokableCall`4
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10391)), TypeDefinitionIndex(TypeDefinitionIndex(10386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10391), inst: 5937 })
// CS Name: UnityEngine.Events.InvokableCall`4
class CORDL_TYPE InvokableCall_4<T1,T2,T3,T4> : public UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_4", modifiers: " const&", def_value: None }]
constexpr InvokableCall_4(InvokableCall_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_4", modifiers: "&&", def_value: None }]
constexpr InvokableCall_4(InvokableCall_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_4(void* ptr) noexcept : UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_4& operator=(InvokableCall_4&& o) noexcept = default;
  constexpr InvokableCall_4& operator=(InvokableCall_4 const& o) noexcept = default;
                


// Fields

 UnityEngine::Events::UnityAction_4<T1,T2,T3,T4> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(UnityEngine::Events::UnityAction_4<T1,T2,T3,T4> value) ;

constexpr UnityEngine::Events::UnityAction_4<T1,T2,T3,T4> __get_Delegate() const;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_4(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_4, "UnityEngine.Events", "InvokableCall`4");
