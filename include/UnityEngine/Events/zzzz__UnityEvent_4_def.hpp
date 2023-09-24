#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2,typename T3>
class UnityEvent_4;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class UnityEvent_4<T0,T1,T2,T3>;
}
// Type: UnityEngine.Events::UnityEvent`4
// Type: UnityEngine.Events::UnityEvent`4
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10405)), TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10405), inst: 5937 })
// CS Name: UnityEngine.Events.UnityEvent`4
class CORDL_TYPE UnityEvent_4<T0,T1,T2,T3> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_4", modifiers: " const&", def_value: None }]
constexpr UnityEvent_4(UnityEvent_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_4", modifiers: "&&", def_value: None }]
constexpr UnityEvent_4(UnityEvent_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_4(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_4& operator=(UnityEvent_4&& o) noexcept = default;
  constexpr UnityEvent_4& operator=(UnityEvent_4 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityEvent_4, "UnityEngine.Events", "UnityEvent`4");
