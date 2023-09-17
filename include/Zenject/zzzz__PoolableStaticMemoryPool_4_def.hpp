#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPool_4_def.hpp"
namespace {
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class PoolableStaticMemoryPool_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>;
}
// Type: Zenject::PoolableStaticMemoryPool`4
// Type: Zenject::PoolableStaticMemoryPool`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11031), inst: 3503 }), TypeDefinitionIndex(TypeDefinitionIndex(11031)), TypeDefinitionIndex(TypeDefinitionIndex(11021))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11021), inst: 5937 })
// CS Name: Zenject.PoolableStaticMemoryPool`4
class CORDL_TYPE PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue> : public ::Zenject::StaticMemoryPool_4<TParam1,TParam2,TParam3,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableStaticMemoryPool_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_4", modifiers: " const&", def_value: None }]
constexpr PoolableStaticMemoryPool_4(PoolableStaticMemoryPool_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_4", modifiers: "&&", def_value: None }]
constexpr PoolableStaticMemoryPool_4(PoolableStaticMemoryPool_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableStaticMemoryPool_4(void* ptr) noexcept : ::Zenject::StaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>(ptr) {
}


  constexpr PoolableStaticMemoryPool_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_4& operator=(PoolableStaticMemoryPool_4&& o) noexcept = default;
  constexpr PoolableStaticMemoryPool_4& operator=(PoolableStaticMemoryPool_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PoolableStaticMemoryPool_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TValue value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_4, "Zenject", "PoolableStaticMemoryPool`4");
