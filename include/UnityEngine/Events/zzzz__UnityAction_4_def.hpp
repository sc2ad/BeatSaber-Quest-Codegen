#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2,typename T3>
class UnityAction_4;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class UnityAction_4<T0,T1,T2,T3>;
}
// Type: UnityEngine.Events::UnityAction`4
// Type: UnityEngine.Events::UnityAction`4
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(10404))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10404), inst: 5937 })
// CS Name: UnityEngine.Events.UnityAction`4
class CORDL_TYPE UnityAction_4<T0,T1,T2,T3> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_4", modifiers: " const&", def_value: None }]
constexpr UnityAction_4(UnityAction_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_4", modifiers: "&&", def_value: None }]
constexpr UnityAction_4(UnityAction_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_4& operator=(UnityAction_4&& o) noexcept = default;
  constexpr UnityAction_4& operator=(UnityAction_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityAction_4, "UnityEngine.Events", "UnityAction`4");
