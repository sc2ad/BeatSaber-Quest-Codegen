#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::IO {
struct System__IO__Stream__ReadWriteParameters;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type TResult>
class Func_5<T1,int32_t,T3,T4,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type TResult>
class Func_5<T1,T2,T3,T4,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type TResult>
class Func_5<T1,System::IO::System__IO__Stream__ReadWriteParameters,T3,T4,TResult>;
}
// Type: System::Func`5
// Type: System::Func`5
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2335))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2335), inst: 5938 })
// CS Name: System.Func`5
class CORDL_TYPE Func_5<T1,T2,T3,T4,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_5", modifiers: " const&", def_value: None }]
constexpr Func_5(Func_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_5", modifiers: "&&", def_value: None }]
constexpr Func_5(Func_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_5(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_5& operator=(Func_5&& o) noexcept = default;
  constexpr Func_5& operator=(Func_5 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_5(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`5
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2335)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2335), inst: 7451 })
// CS Name: System.Func`5
class CORDL_TYPE Func_5<T1,int32_t,T3,T4,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_5", modifiers: " const&", def_value: None }]
constexpr Func_5(Func_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_5", modifiers: "&&", def_value: None }]
constexpr Func_5(Func_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_5(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_5& operator=(Func_5&& o) noexcept = default;
  constexpr Func_5& operator=(Func_5 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_5(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, int32_t arg2, T3 arg3, T4 arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`5
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2335)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2335), inst: 7452 })
// CS Name: System.Func`5
class CORDL_TYPE Func_5<T1,System::IO::System__IO__Stream__ReadWriteParameters,T3,T4,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_5", modifiers: " const&", def_value: None }]
constexpr Func_5(Func_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_5", modifiers: "&&", def_value: None }]
constexpr Func_5(Func_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_5(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_5& operator=(Func_5&& o) noexcept = default;
  constexpr Func_5& operator=(Func_5 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_5(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, System::IO::System__IO__Stream__ReadWriteParameters arg2, T3 arg3, T4 arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Func_5, "System", "Func`5");
