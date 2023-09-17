#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPool_3_def.hpp"
namespace {
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class PoolableStaticMemoryPool_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_3<TParam1,TParam2,TValue>;
}
// Type: Zenject::PoolableStaticMemoryPool`3
// Type: Zenject::PoolableStaticMemoryPool`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11030), inst: 3501 }), TypeDefinitionIndex(TypeDefinitionIndex(11020)), TypeDefinitionIndex(TypeDefinitionIndex(11030))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11020), inst: 5155 })
// CS Name: Zenject.PoolableStaticMemoryPool`3
class CORDL_TYPE PoolableStaticMemoryPool_3<TParam1,TParam2,TValue> : public ::Zenject::StaticMemoryPool_3<TParam1,TParam2,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableStaticMemoryPool_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_3", modifiers: " const&", def_value: None }]
constexpr PoolableStaticMemoryPool_3(PoolableStaticMemoryPool_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_3", modifiers: "&&", def_value: None }]
constexpr PoolableStaticMemoryPool_3(PoolableStaticMemoryPool_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableStaticMemoryPool_3(void* ptr) noexcept : ::Zenject::StaticMemoryPool_3<TParam1,TParam2,TValue>(ptr) {
}


  constexpr PoolableStaticMemoryPool_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableStaticMemoryPool_3& operator=(PoolableStaticMemoryPool_3&& o) noexcept = default;
  constexpr PoolableStaticMemoryPool_3& operator=(PoolableStaticMemoryPool_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PoolableStaticMemoryPool_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(TParam1 p1, TParam2 p2, TValue value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_3, "Zenject", "PoolableStaticMemoryPool`3");
