#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class PoolableMemoryPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class PoolableMemoryPool_1<TValue>;
}
// Type: Zenject::PoolableMemoryPool`1
// Type: Zenject::PoolableMemoryPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10980), inst: 2651 }), TypeDefinitionIndex(TypeDefinitionIndex(10980)), TypeDefinitionIndex(TypeDefinitionIndex(11007))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11007), inst: 2 })
// CS Name: Zenject.PoolableMemoryPool`1
class CORDL_TYPE PoolableMemoryPool_1<TValue> : public ::Zenject::MemoryPool_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PoolableMemoryPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_1", modifiers: " const&", def_value: None }]
constexpr PoolableMemoryPool_1(PoolableMemoryPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_1", modifiers: "&&", def_value: None }]
constexpr PoolableMemoryPool_1(PoolableMemoryPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableMemoryPool_1(void* ptr) noexcept : ::Zenject::MemoryPool_1<TValue>(ptr) {
}


  constexpr PoolableMemoryPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableMemoryPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableMemoryPool_1& operator=(PoolableMemoryPool_1&& o) noexcept = default;
  constexpr PoolableMemoryPool_1& operator=(PoolableMemoryPool_1 const& o) noexcept = default;
                


// Methods

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TValue item) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TValue item) ;

// Ctor Parameters []
explicit PoolableMemoryPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPool_1, "Zenject", "PoolableMemoryPool`1");
