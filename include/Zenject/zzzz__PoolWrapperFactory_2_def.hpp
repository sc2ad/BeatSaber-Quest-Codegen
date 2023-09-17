#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class IFactory_2;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class IMemoryPool_2;
}
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class PoolWrapperFactory_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
class PoolWrapperFactory_2<TParam1,TValue>;
}
// Type: Zenject::PoolWrapperFactory`2
// Type: Zenject::PoolWrapperFactory`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11017))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11017), inst: 80 })
// CS Name: Zenject.PoolWrapperFactory`2
class CORDL_TYPE PoolWrapperFactory_2<TParam1,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IFactory_2<TParam1,TValue>
constexpr operator  ::Zenject::IFactory_2<TParam1,TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IFactory
constexpr operator  ::Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PoolWrapperFactory_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_2", modifiers: " const&", def_value: None }]
constexpr PoolWrapperFactory_2(PoolWrapperFactory_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_2", modifiers: "&&", def_value: None }]
constexpr PoolWrapperFactory_2(PoolWrapperFactory_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolWrapperFactory_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoolWrapperFactory_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolWrapperFactory_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolWrapperFactory_2& operator=(PoolWrapperFactory_2&& o) noexcept = default;
  constexpr PoolWrapperFactory_2& operator=(PoolWrapperFactory_2 const& o) noexcept = default;
                


// Fields

 ::Zenject::IMemoryPool_2<TParam1,TValue> __declspec(property(get=__get__pool, put=__set__pool))  _pool;

constexpr void __set__pool(::Zenject::IMemoryPool_2<TParam1,TValue> value) ;

constexpr ::Zenject::IMemoryPool_2<TParam1,TValue> __get__pool() const;


// Methods

// Ctor Parameters [CppParam { name: "pool", ty: "::Zenject::IMemoryPool_2<TParam1,TValue>", modifiers: "", def_value: None }]
explicit PoolWrapperFactory_2(::Zenject::IMemoryPool_2<TParam1,TValue> pool) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::IMemoryPool_2<TParam1,TValue> pool) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Create(TParam1 arg) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolWrapperFactory_2, "Zenject", "PoolWrapperFactory`2");
