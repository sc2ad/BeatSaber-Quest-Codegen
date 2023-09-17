#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityAction_2;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class UnityAction_2<T0,T1>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_2<::UnityEngine::SceneManagement::Scene,::System::Int32Enum>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>;
}
// Type: UnityEngine.Events::UnityAction`2
// Type: UnityEngine.Events::UnityAction`2
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10398)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10398), inst: 80 })
// CS Name: UnityEngine.Events.UnityAction`2
class CORDL_TYPE UnityAction_2<T0,T1> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: " const&", def_value: None }]
constexpr UnityAction_2(UnityAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "&&", def_value: None }]
constexpr UnityAction_2(UnityAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_2& operator=(UnityAction_2&& o) noexcept = default;
  constexpr UnityAction_2& operator=(UnityAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T0 arg0, T1 arg1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`2
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10398)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10398), inst: 5056 })
// CS Name: UnityEngine.Events.UnityAction`2
class CORDL_TYPE UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: " const&", def_value: None }]
constexpr UnityAction_2(UnityAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "&&", def_value: None }]
constexpr UnityAction_2(UnityAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_2& operator=(UnityAction_2&& o) noexcept = default;
  constexpr UnityAction_2& operator=(UnityAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::SceneManagement::Scene arg0, ::UnityEngine::SceneManagement::Scene arg1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`2
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(10398))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10398), inst: 7509 })
// CS Name: UnityEngine.Events.UnityAction`2
class CORDL_TYPE UnityAction_2<::UnityEngine::SceneManagement::Scene,::System::Int32Enum> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: " const&", def_value: None }]
constexpr UnityAction_2(UnityAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "&&", def_value: None }]
constexpr UnityAction_2(UnityAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_2& operator=(UnityAction_2&& o) noexcept = default;
  constexpr UnityAction_2& operator=(UnityAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::SceneManagement::Scene arg0, ::System::Int32Enum arg1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_2, "UnityEngine.Events", "UnityAction`2");
