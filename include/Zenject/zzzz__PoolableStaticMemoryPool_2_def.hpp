#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPool_2_def.hpp"
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class PoolableStaticMemoryPool_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_2<TParam1,TValue>;
}
// Type: Zenject::PoolableStaticMemoryPool`2
// Type: Zenject::PoolableStaticMemoryPool`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11029), inst: 3499 }), TypeDefinitionIndex(TypeDefinitionIndex(11019)), TypeDefinitionIndex(TypeDefinitionIndex(11029))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11019), inst: 80 })
// CS Name: Zenject.PoolableStaticMemoryPool`2
class CORDL_TYPE PoolableStaticMemoryPool_2<TParam1,TValue> : public Zenject::StaticMemoryPool_2<TParam1,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableStaticMemoryPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_2", modifiers: " const&", def_value: None }]
constexpr PoolableStaticMemoryPool_2(PoolableStaticMemoryPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_2", modifiers: "&&", def_value: None }]
constexpr PoolableStaticMemoryPool_2(PoolableStaticMemoryPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableStaticMemoryPool_2(void* ptr) noexcept : Zenject::StaticMemoryPool_2<TParam1,TValue>(ptr) {
}


  constexpr PoolableStaticMemoryPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_2& operator=(PoolableStaticMemoryPool_2&& o) noexcept = default;
  constexpr PoolableStaticMemoryPool_2& operator=(PoolableStaticMemoryPool_2 const& o) noexcept = default;
                


// Methods

static Zenject::PoolableStaticMemoryPool_2<TParam1,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(TParam1 p1, TValue value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_2, "Zenject", "PoolableStaticMemoryPool`2");
