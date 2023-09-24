#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityEvent_3;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
class UnityEvent_3<T0,T1,T2>;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class UnityEvent_3<T0,T1,T2>;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T2>
class UnityEvent_3<T0,bool,T2>;
}
// Type: UnityEngine.Events::UnityEvent`3
// Type: UnityEngine.Events::UnityEvent`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10403)), TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10403), inst: 7476 })
// CS Name: UnityEngine.Events.UnityEvent`3
class CORDL_TYPE UnityEvent_3<T0,bool,T2> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: " const&", def_value: None }]
constexpr UnityEvent_3(UnityEvent_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "&&", def_value: None }]
constexpr UnityEvent_3(UnityEvent_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_3(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_3& operator=(UnityEvent_3&& o) noexcept = default;
  constexpr UnityEvent_3& operator=(UnityEvent_3 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_3<T0,bool,T2> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_3<T0,bool,T2> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_3<T0,bool,T2> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_3<T0,bool,T2> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T0 arg0, bool arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10397)), TypeDefinitionIndex(TypeDefinitionIndex(10403))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10403), inst: 5155 })
// CS Name: UnityEngine.Events.UnityEvent`3
class CORDL_TYPE UnityEvent_3<T0,T1,T2> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: " const&", def_value: None }]
constexpr UnityEvent_3(UnityEvent_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "&&", def_value: None }]
constexpr UnityEvent_3(UnityEvent_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_3(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_3& operator=(UnityEvent_3&& o) noexcept = default;
  constexpr UnityEvent_3& operator=(UnityEvent_3 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_3<T0,T1,T2> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_3<T0,T1,T2> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T0 arg0, T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10397)), TypeDefinitionIndex(TypeDefinitionIndex(10403))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10403), inst: 5153 })
// CS Name: UnityEngine.Events.UnityEvent`3
class CORDL_TYPE UnityEvent_3<T0,T1,T2> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: " const&", def_value: None }]
constexpr UnityEvent_3(UnityEvent_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "&&", def_value: None }]
constexpr UnityEvent_3(UnityEvent_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_3(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_3& operator=(UnityEvent_3&& o) noexcept = default;
  constexpr UnityEvent_3& operator=(UnityEvent_3 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_3<T0,T1,T2> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_3<T0,T1,T2> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_3<T0,T1,T2> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T0 arg0, T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityEvent_3, "UnityEngine.Events", "UnityEvent`3");
