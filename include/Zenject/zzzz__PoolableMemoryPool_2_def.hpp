#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class PoolableMemoryPool_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
class PoolableMemoryPool_2<TParam1,TValue>;
}
// Type: Zenject::PoolableMemoryPool`2
// Type: Zenject::PoolableMemoryPool`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10981)), TypeDefinitionIndex(TypeDefinitionIndex(11008)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10981), inst: 3366 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11008), inst: 80 })
// CS Name: Zenject.PoolableMemoryPool`2
class CORDL_TYPE PoolableMemoryPool_2<TParam1,TValue> : public ::Zenject::MemoryPool_2<TParam1,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PoolableMemoryPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_2", modifiers: " const&", def_value: None }]
constexpr PoolableMemoryPool_2(PoolableMemoryPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_2", modifiers: "&&", def_value: None }]
constexpr PoolableMemoryPool_2(PoolableMemoryPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableMemoryPool_2(void* ptr) noexcept : ::Zenject::MemoryPool_2<TParam1,TValue>(ptr) {
}


  constexpr PoolableMemoryPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableMemoryPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableMemoryPool_2& operator=(PoolableMemoryPool_2&& o) noexcept = default;
  constexpr PoolableMemoryPool_2& operator=(PoolableMemoryPool_2 const& o) noexcept = default;
                


// Methods

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TValue item) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TParam1 p1, TValue item) ;

// Ctor Parameters []
explicit PoolableMemoryPool_2() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPool_2, "Zenject", "PoolableMemoryPool`2");
