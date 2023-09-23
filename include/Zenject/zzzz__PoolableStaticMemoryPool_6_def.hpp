#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPool_6_def.hpp"
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class PoolableStaticMemoryPool_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>;
}
// Type: Zenject::PoolableStaticMemoryPool`6
// Type: Zenject::PoolableStaticMemoryPool`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11033), inst: 3507 }), TypeDefinitionIndex(TypeDefinitionIndex(11033)), TypeDefinitionIndex(TypeDefinitionIndex(11023))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11023), inst: 5939 })
// CS Name: Zenject.PoolableStaticMemoryPool`6
class CORDL_TYPE PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> : public Zenject::StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableStaticMemoryPool_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_6", modifiers: " const&", def_value: None }]
constexpr PoolableStaticMemoryPool_6(PoolableStaticMemoryPool_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_6", modifiers: "&&", def_value: None }]
constexpr PoolableStaticMemoryPool_6(PoolableStaticMemoryPool_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableStaticMemoryPool_6(void* ptr) noexcept : Zenject::StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>(ptr) {
}


  constexpr PoolableStaticMemoryPool_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_6& operator=(PoolableStaticMemoryPool_6&& o) noexcept = default;
  constexpr PoolableStaticMemoryPool_6& operator=(PoolableStaticMemoryPool_6 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PoolableStaticMemoryPool_6() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_6, "Zenject", "PoolableStaticMemoryPool`6");
