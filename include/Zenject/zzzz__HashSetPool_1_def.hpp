#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class HashSetPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type T>
class HashSetPool_1<T>;
}
// Type: Zenject::HashSetPool`1
// Type: Zenject::HashSetPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14596), inst: 2476 }), TypeDefinitionIndex(TypeDefinitionIndex(11028)), TypeDefinitionIndex(TypeDefinitionIndex(11038)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 2699 }), TypeDefinitionIndex(TypeDefinitionIndex(14596))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11038), inst: 2 })
// CS Name: Zenject.HashSetPool`1
class CORDL_TYPE HashSetPool_1<T> : public Zenject::StaticMemoryPool_1<System::Collections::Generic::HashSet_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HashSetPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetPool_1", modifiers: " const&", def_value: None }]
constexpr HashSetPool_1(HashSetPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetPool_1", modifiers: "&&", def_value: None }]
constexpr HashSetPool_1(HashSetPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSetPool_1(void* ptr) noexcept : Zenject::StaticMemoryPool_1<System::Collections::Generic::HashSet_1<T>>(ptr) {
}


  constexpr HashSetPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSetPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSetPool_1& operator=(HashSetPool_1&& o) noexcept = default;
  constexpr HashSetPool_1& operator=(HashSetPool_1 const& o) noexcept = default;
                


// Fields

static Zenject::HashSetPool_1<T> __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(Zenject::HashSetPool_1<T> value) ;

static Zenject::HashSetPool_1<T> __get__instance() ;


// Properties

static Zenject::HashSetPool_1<T> __declspec(property(get=get_Instance))  Instance;


// Methods

static Zenject::HashSetPool_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::HashSetPool_1<T> get_Instance() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(System::Collections::Generic::HashSet_1<T> items) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(System::Collections::Generic::HashSet_1<T> items) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::HashSetPool_1, "Zenject", "HashSetPool`1");
