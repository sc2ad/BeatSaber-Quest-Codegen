#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPool_8_def.hpp"
namespace {
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TValue>
class PoolableStaticMemoryPool_8;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>;
}
// Type: Zenject::PoolableStaticMemoryPool`8
// Type: Zenject::PoolableStaticMemoryPool`8
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11025)), TypeDefinitionIndex(TypeDefinitionIndex(11035)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11035), inst: 3511 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11025), inst: 5941 })
// CS Name: Zenject.PoolableStaticMemoryPool`8
class CORDL_TYPE PoolableStaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> : public ::Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableStaticMemoryPool_8() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_8", modifiers: " const&", def_value: None }]
constexpr PoolableStaticMemoryPool_8(PoolableStaticMemoryPool_8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_8", modifiers: "&&", def_value: None }]
constexpr PoolableStaticMemoryPool_8(PoolableStaticMemoryPool_8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableStaticMemoryPool_8(void* ptr) noexcept : ::Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>(ptr) {
}


  constexpr PoolableStaticMemoryPool_8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_8& operator=(PoolableStaticMemoryPool_8&& o) noexcept = default;
  constexpr PoolableStaticMemoryPool_8& operator=(PoolableStaticMemoryPool_8 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PoolableStaticMemoryPool_8() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_8, "Zenject", "PoolableStaticMemoryPool`8");
