#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
struct ____Zenject__DisposeBlock__SpawnedObjectPoolPair;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class ListPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type T>
class ListPool_1<T>;
}
namespace Zenject {
template<>
class ListPool_1<::Zenject::TypeValuePair>;
}
namespace Zenject {
template<>
class ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>;
}
// Type: Zenject::ListPool`1
// Type: Zenject::ListPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3828), inst: 3848 }), TypeDefinitionIndex(TypeDefinitionIndex(3828)), TypeDefinitionIndex(TypeDefinitionIndex(11039)), TypeDefinitionIndex(TypeDefinitionIndex(11028)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 2700 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11039), inst: 2 })
// CS Name: Zenject.ListPool`1
class CORDL_TYPE ListPool_1<T> : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ListPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: " const&", def_value: None }]
constexpr ListPool_1(ListPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
constexpr ListPool_1(ListPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListPool_1(void* ptr) noexcept : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<T>>(ptr) {
}


  constexpr ListPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListPool_1& operator=(ListPool_1&& o) noexcept = default;
  constexpr ListPool_1& operator=(ListPool_1 const& o) noexcept = default;
                


// Fields

static ::Zenject::ListPool_1<T> __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(::Zenject::ListPool_1<T> value) ;

static ::Zenject::ListPool_1<T> __get__instance() ;


// Properties

static ::Zenject::ListPool_1<T> __declspec(property(get=get_Instance))  Instance;


// Methods

// Ctor Parameters []
explicit ListPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::ListPool_1<T> get_Instance() ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDespawned(::System::Collections::Generic::List_1<T> list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ListPool`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11039)), TypeDefinitionIndex(TypeDefinitionIndex(3828)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3828), inst: 3848 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 2700 }), TypeDefinitionIndex(TypeDefinitionIndex(11028))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11039), inst: 3022 })
// CS Name: Zenject.ListPool`1
class CORDL_TYPE ListPool_1<::Zenject::TypeValuePair> : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ListPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: " const&", def_value: None }]
constexpr ListPool_1(ListPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
constexpr ListPool_1(ListPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListPool_1(void* ptr) noexcept : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>(ptr) {
}


  constexpr ListPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListPool_1& operator=(ListPool_1&& o) noexcept = default;
  constexpr ListPool_1& operator=(ListPool_1 const& o) noexcept = default;
                


// Fields

static ::Zenject::ListPool_1<::Zenject::TypeValuePair> __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(::Zenject::ListPool_1<::Zenject::TypeValuePair> value) ;

static ::Zenject::ListPool_1<::Zenject::TypeValuePair> __get__instance() ;


// Properties

static ::Zenject::ListPool_1<::Zenject::TypeValuePair> __declspec(property(get=get_Instance))  Instance;


// Methods

// Ctor Parameters []
explicit ListPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::ListPool_1<::Zenject::TypeValuePair> get_Instance() ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDespawned(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ListPool`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11039)), TypeDefinitionIndex(TypeDefinitionIndex(3828)), TypeDefinitionIndex(TypeDefinitionIndex(11028)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 2700 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3828), inst: 3848 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11039), inst: 4211 })
// CS Name: Zenject.ListPool`1
class CORDL_TYPE ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ListPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: " const&", def_value: None }]
constexpr ListPool_1(ListPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
constexpr ListPool_1(ListPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListPool_1(void* ptr) noexcept : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>(ptr) {
}


  constexpr ListPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListPool_1& operator=(ListPool_1&& o) noexcept = default;
  constexpr ListPool_1& operator=(ListPool_1 const& o) noexcept = default;
                


// Fields

static ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> value) ;

static ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> __get__instance() ;


// Properties

static ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> __declspec(property(get=get_Instance))  Instance;


// Methods

// Ctor Parameters []
explicit ListPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> get_Instance() ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDespawned(::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ListPool_1, "Zenject", "ListPool`1");
