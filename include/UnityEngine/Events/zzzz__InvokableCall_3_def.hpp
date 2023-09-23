#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T1,typename T2,typename T3>
class InvokableCall_3;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
class InvokableCall_3<T1,bool,T3>;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T1>
class InvokableCall_3<T1,int32_t,int32_t>;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class InvokableCall_3<T1,T2,T3>;
}
// Type: UnityEngine.Events::InvokableCall`3
// Type: UnityEngine.Events::InvokableCall`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386)), TypeDefinitionIndex(TypeDefinitionIndex(10390))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10390), inst: 5153 })
// CS Name: UnityEngine.Events.InvokableCall`3
class CORDL_TYPE InvokableCall_3<T1,int32_t,int32_t> : public UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: " const&", def_value: None }]
constexpr InvokableCall_3(InvokableCall_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "&&", def_value: None }]
constexpr InvokableCall_3(InvokableCall_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_3(void* ptr) noexcept : UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_3& operator=(InvokableCall_3&& o) noexcept = default;
  constexpr InvokableCall_3& operator=(InvokableCall_3 const& o) noexcept = default;
                


// Fields

 UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t> value) ;

constexpr UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_3(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>", modifiers: "", def_value: None }]
explicit InvokableCall_3(UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T1 args0, int32_t args1, int32_t args2) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10390)), TypeDefinitionIndex(TypeDefinitionIndex(10386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10390), inst: 5155 })
// CS Name: UnityEngine.Events.InvokableCall`3
class CORDL_TYPE InvokableCall_3<T1,T2,T3> : public UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: " const&", def_value: None }]
constexpr InvokableCall_3(InvokableCall_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "&&", def_value: None }]
constexpr InvokableCall_3(InvokableCall_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_3(void* ptr) noexcept : UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_3& operator=(InvokableCall_3&& o) noexcept = default;
  constexpr InvokableCall_3& operator=(InvokableCall_3 const& o) noexcept = default;
                


// Fields

 UnityEngine::Events::UnityAction_3<T1,T2,T3> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value) ;

constexpr UnityEngine::Events::UnityAction_3<T1,T2,T3> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(UnityEngine::Events::UnityAction_3<T1,T2,T3> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_3(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "UnityEngine::Events::UnityAction_3<T1,T2,T3>", modifiers: "", def_value: None }]
explicit InvokableCall_3(UnityEngine::Events::UnityAction_3<T1,T2,T3> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Events::UnityAction_3<T1,T2,T3> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T1 args0, T2 args1, T3 args2) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10390)), TypeDefinitionIndex(TypeDefinitionIndex(10386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10390), inst: 7476 })
// CS Name: UnityEngine.Events.InvokableCall`3
class CORDL_TYPE InvokableCall_3<T1,bool,T3> : public UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: " const&", def_value: None }]
constexpr InvokableCall_3(InvokableCall_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "&&", def_value: None }]
constexpr InvokableCall_3(InvokableCall_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_3(void* ptr) noexcept : UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_3& operator=(InvokableCall_3&& o) noexcept = default;
  constexpr InvokableCall_3& operator=(InvokableCall_3 const& o) noexcept = default;
                


// Fields

 UnityEngine::Events::UnityAction_3<T1,bool,T3> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(UnityEngine::Events::UnityAction_3<T1,bool,T3> value) ;

constexpr UnityEngine::Events::UnityAction_3<T1,bool,T3> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(UnityEngine::Events::UnityAction_3<T1,bool,T3> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(UnityEngine::Events::UnityAction_3<T1,bool,T3> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_3(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "UnityEngine::Events::UnityAction_3<T1,bool,T3>", modifiers: "", def_value: None }]
explicit InvokableCall_3(UnityEngine::Events::UnityAction_3<T1,bool,T3> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Events::UnityAction_3<T1,bool,T3> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T1 args0, bool args1, T3 args2) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_3, "UnityEngine.Events", "InvokableCall`3");
