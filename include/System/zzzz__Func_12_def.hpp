#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename TResult>
class Func_12;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6,::cordl_internals::il2cpp_reference_type T7,::cordl_internals::il2cpp_reference_type T8,::cordl_internals::il2cpp_reference_type T9,::cordl_internals::il2cpp_reference_type T10,::cordl_internals::il2cpp_reference_type T11,::cordl_internals::il2cpp_reference_type TResult>
class Func_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,TResult>;
}
// Type: System::Func`12
// Type: System::Func`12
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6,::cordl_internals::il2cpp_reference_type T7,::cordl_internals::il2cpp_reference_type T8,::cordl_internals::il2cpp_reference_type T9,::cordl_internals::il2cpp_reference_type T10,::cordl_internals::il2cpp_reference_type T11,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14530)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14530), inst: 5942 })
// CS Name: System.Func`12
class CORDL_TYPE Func_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_12() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_12", modifiers: " const&", def_value: None }]
constexpr Func_12(Func_12 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_12", modifiers: "&&", def_value: None }]
constexpr Func_12(Func_12&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_12(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_12& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_12& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_12& operator=(Func_12&& o) noexcept = default;
  constexpr Func_12& operator=(Func_12 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_12(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Func_12, "System", "Func`12");
