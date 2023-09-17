#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_4_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class PoolableMemoryPool_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class PoolableMemoryPool_4<TParam1,TParam2,TParam3,TValue>;
}
// Type: Zenject::PoolableMemoryPool`4
// Type: Zenject::PoolableMemoryPool`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10983)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10983), inst: 3391 }), TypeDefinitionIndex(TypeDefinitionIndex(11010))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11010), inst: 5937 })
// CS Name: Zenject.PoolableMemoryPool`4
class CORDL_TYPE PoolableMemoryPool_4<TParam1,TParam2,TParam3,TValue> : public ::Zenject::MemoryPool_4<TParam1,TParam2,TParam3,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PoolableMemoryPool_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_4", modifiers: " const&", def_value: None }]
constexpr PoolableMemoryPool_4(PoolableMemoryPool_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_4", modifiers: "&&", def_value: None }]
constexpr PoolableMemoryPool_4(PoolableMemoryPool_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableMemoryPool_4(void* ptr) noexcept : ::Zenject::MemoryPool_4<TParam1,TParam2,TParam3,TValue>(ptr) {
}


  constexpr PoolableMemoryPool_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableMemoryPool_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableMemoryPool_4& operator=(PoolableMemoryPool_4&& o) noexcept = default;
  constexpr PoolableMemoryPool_4& operator=(PoolableMemoryPool_4 const& o) noexcept = default;
                


// Methods

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TValue item) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TValue item) ;

// Ctor Parameters []
explicit PoolableMemoryPool_4() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPool_4, "Zenject", "PoolableMemoryPool`4");
