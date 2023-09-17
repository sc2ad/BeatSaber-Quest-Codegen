#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPool_5_def.hpp"
namespace {
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class PoolableStaticMemoryPool_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>;
}
// Type: Zenject::PoolableStaticMemoryPool`5
// Type: Zenject::PoolableStaticMemoryPool`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11032), inst: 3505 }), TypeDefinitionIndex(TypeDefinitionIndex(11022)), TypeDefinitionIndex(TypeDefinitionIndex(11032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11022), inst: 5938 })
// CS Name: Zenject.PoolableStaticMemoryPool`5
class CORDL_TYPE PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> : public ::Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableStaticMemoryPool_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_5", modifiers: " const&", def_value: None }]
constexpr PoolableStaticMemoryPool_5(PoolableStaticMemoryPool_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_5", modifiers: "&&", def_value: None }]
constexpr PoolableStaticMemoryPool_5(PoolableStaticMemoryPool_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableStaticMemoryPool_5(void* ptr) noexcept : ::Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>(ptr) {
}


  constexpr PoolableStaticMemoryPool_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_5& operator=(PoolableStaticMemoryPool_5&& o) noexcept = default;
  constexpr PoolableStaticMemoryPool_5& operator=(PoolableStaticMemoryPool_5 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PoolableStaticMemoryPool_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_5, "Zenject", "PoolableStaticMemoryPool`5");
