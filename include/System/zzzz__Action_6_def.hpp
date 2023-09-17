#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
struct Int32Enum;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6>
class Action_6<T1,T2,T3,T4,T5,T6>;
}
namespace System {
template<>
class Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::System::Int32Enum,bool>;
}
// Type: System::Action`6
// Type: System::Action`6
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2328))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2328), inst: 5939 })
// CS Name: System.Action`6
class CORDL_TYPE Action_6<T1,T2,T3,T4,T5,T6> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: " const&", def_value: None }]
constexpr Action_6(Action_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "&&", def_value: None }]
constexpr Action_6(Action_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_6(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_6& operator=(Action_6&& o) noexcept = default;
  constexpr Action_6& operator=(Action_6 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_6(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`6
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2328))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2328), inst: 6289 })
// CS Name: System.Action`6
class CORDL_TYPE Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::System::Int32Enum,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: " const&", def_value: None }]
constexpr Action_6(Action_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "&&", def_value: None }]
constexpr Action_6(Action_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_6(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_6& operator=(Action_6&& o) noexcept = default;
  constexpr Action_6& operator=(Action_6 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_6(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(uint64_t arg1, bool arg2, ::GlobalNamespace::OVRSpace arg3, ::System::Guid arg4, ::System::Int32Enum arg5, bool arg6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_6, "System", "Action`6");
