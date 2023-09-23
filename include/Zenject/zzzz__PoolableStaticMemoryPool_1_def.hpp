#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
// Forward declare root types
namespace Zenject {
template<typename TValue>
class PoolableStaticMemoryPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_1<TValue>;
}
// Type: Zenject::PoolableStaticMemoryPool`1
// Type: Zenject::PoolableStaticMemoryPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11018)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 2652 }), TypeDefinitionIndex(TypeDefinitionIndex(11028))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11018), inst: 2 })
// CS Name: Zenject.PoolableStaticMemoryPool`1
class CORDL_TYPE PoolableStaticMemoryPool_1<TValue> : public Zenject::StaticMemoryPool_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableStaticMemoryPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_1", modifiers: " const&", def_value: None }]
constexpr PoolableStaticMemoryPool_1(PoolableStaticMemoryPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_1", modifiers: "&&", def_value: None }]
constexpr PoolableStaticMemoryPool_1(PoolableStaticMemoryPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableStaticMemoryPool_1(void* ptr) noexcept : Zenject::StaticMemoryPool_1<TValue>(ptr) {
}


  constexpr PoolableStaticMemoryPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_1& operator=(PoolableStaticMemoryPool_1&& o) noexcept = default;
  constexpr PoolableStaticMemoryPool_1& operator=(PoolableStaticMemoryPool_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PoolableStaticMemoryPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(TValue value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_1, "Zenject", "PoolableStaticMemoryPool`1");
