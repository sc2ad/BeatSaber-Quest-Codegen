#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0>
class UnityAction_3<T0,int32_t,int32_t>;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T2>
class UnityAction_3<T0,bool,T2>;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class UnityAction_3<T0,T1,T2>;
}
// Type: UnityEngine.Events::UnityAction`3
// Type: UnityEngine.Events::UnityAction`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10402)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10402), inst: 5153 })
// CS Name: UnityEngine.Events.UnityAction`3
class CORDL_TYPE UnityAction_3<T0,int32_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: " const&", def_value: None }]
constexpr UnityAction_3(UnityAction_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "&&", def_value: None }]
constexpr UnityAction_3(UnityAction_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_3& operator=(UnityAction_3&& o) noexcept = default;
  constexpr UnityAction_3& operator=(UnityAction_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T0 arg0, int32_t arg1, int32_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10402)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10402), inst: 5155 })
// CS Name: UnityEngine.Events.UnityAction`3
class CORDL_TYPE UnityAction_3<T0,T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: " const&", def_value: None }]
constexpr UnityAction_3(UnityAction_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "&&", def_value: None }]
constexpr UnityAction_3(UnityAction_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_3& operator=(UnityAction_3&& o) noexcept = default;
  constexpr UnityAction_3& operator=(UnityAction_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T0 arg0, T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`3
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(10402))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10402), inst: 7476 })
// CS Name: UnityEngine.Events.UnityAction`3
class CORDL_TYPE UnityAction_3<T0,bool,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: " const&", def_value: None }]
constexpr UnityAction_3(UnityAction_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "&&", def_value: None }]
constexpr UnityAction_3(UnityAction_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_3& operator=(UnityAction_3&& o) noexcept = default;
  constexpr UnityAction_3& operator=(UnityAction_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T0 arg0, bool arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityAction_3, "UnityEngine.Events", "UnityAction`3");
