#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class Action_11;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6,::cordl_internals::il2cpp_reference_type T7,::cordl_internals::il2cpp_reference_type T8,::cordl_internals::il2cpp_reference_type T9,::cordl_internals::il2cpp_reference_type T10,::cordl_internals::il2cpp_reference_type T11>
class Action_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>;
}
// Type: System::Action`11
// Type: System::Action`11
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6,::cordl_internals::il2cpp_reference_type T7,::cordl_internals::il2cpp_reference_type T8,::cordl_internals::il2cpp_reference_type T9,::cordl_internals::il2cpp_reference_type T10,::cordl_internals::il2cpp_reference_type T11>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(14529))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14529), inst: 5955 })
// CS Name: System.Action`11
class CORDL_TYPE Action_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_11() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_11", modifiers: " const&", def_value: None }]
constexpr Action_11(Action_11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_11", modifiers: "&&", def_value: None }]
constexpr Action_11(Action_11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_11(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_11& operator=(Action_11&& o) noexcept = default;
  constexpr Action_11& operator=(Action_11 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_11(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_11, "System", "Action`11");
