#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Zenject {
template<typename TKey,typename TValue>
class DictionaryPool_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class DictionaryPool_2<TKey,TValue>;
}
// Type: Zenject::DictionaryPool`2
// Type: Zenject::DictionaryPool`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3809)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 2698 }), TypeDefinitionIndex(TypeDefinitionIndex(11037)), TypeDefinitionIndex(TypeDefinitionIndex(11028)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3809), inst: 1153 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11037), inst: 80 })
// CS Name: Zenject.DictionaryPool`2
class CORDL_TYPE DictionaryPool_2<TKey,TValue> : public Zenject::StaticMemoryPool_1<System::Collections::Generic::Dictionary_2<TKey,TValue>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DictionaryPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: " const&", def_value: None }]
constexpr DictionaryPool_2(DictionaryPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "&&", def_value: None }]
constexpr DictionaryPool_2(DictionaryPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DictionaryPool_2(void* ptr) noexcept : Zenject::StaticMemoryPool_1<System::Collections::Generic::Dictionary_2<TKey,TValue>>(ptr) {
}


  constexpr DictionaryPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DictionaryPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DictionaryPool_2& operator=(DictionaryPool_2&& o) noexcept = default;
  constexpr DictionaryPool_2& operator=(DictionaryPool_2 const& o) noexcept = default;
                


// Fields

static Zenject::DictionaryPool_2<TKey,TValue> __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(Zenject::DictionaryPool_2<TKey,TValue> value) ;

static Zenject::DictionaryPool_2<TKey,TValue> __get__instance() ;


// Properties

static Zenject::DictionaryPool_2<TKey,TValue> __declspec(property(get=get_Instance))  Instance;


// Methods

static Zenject::DictionaryPool_2<TKey,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::DictionaryPool_2<TKey,TValue> get_Instance() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(System::Collections::Generic::Dictionary_2<TKey,TValue> items) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(System::Collections::Generic::Dictionary_2<TKey,TValue> items) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::DictionaryPool_2, "Zenject", "DictionaryPool`2");
