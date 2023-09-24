#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class UnityEvent_2<T0,T1>;
}
// Type: UnityEngine.Events::UnityEvent`2
// Type: UnityEngine.Events::UnityEvent`2
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10399)), TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10399), inst: 80 })
// CS Name: UnityEngine.Events.UnityEvent`2
class CORDL_TYPE UnityEvent_2<T0,T1> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_2", modifiers: " const&", def_value: None }]
constexpr UnityEvent_2(UnityEvent_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_2", modifiers: "&&", def_value: None }]
constexpr UnityEvent_2(UnityEvent_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_2(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_2& operator=(UnityEvent_2&& o) noexcept = default;
  constexpr UnityEvent_2& operator=(UnityEvent_2 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_2<T0,T1> New_ctor() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityEvent_2, "UnityEngine.Events", "UnityEvent`2");
