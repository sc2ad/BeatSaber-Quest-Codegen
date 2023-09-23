#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class PoolWrapperFactory_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type T>
class PoolWrapperFactory_1<T>;
}
// Type: Zenject::PoolWrapperFactory`1
// Type: Zenject::PoolWrapperFactory`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11016))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11016), inst: 2 })
// CS Name: Zenject.PoolWrapperFactory`1
class CORDL_TYPE PoolWrapperFactory_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IFactory_1<T>
constexpr operator  Zenject::IFactory_1<T>() const noexcept;

/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PoolWrapperFactory_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: " const&", def_value: None }]
constexpr PoolWrapperFactory_1(PoolWrapperFactory_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: "&&", def_value: None }]
constexpr PoolWrapperFactory_1(PoolWrapperFactory_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolWrapperFactory_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoolWrapperFactory_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolWrapperFactory_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolWrapperFactory_1& operator=(PoolWrapperFactory_1&& o) noexcept = default;
  constexpr PoolWrapperFactory_1& operator=(PoolWrapperFactory_1 const& o) noexcept = default;
                


// Fields

 Zenject::IMemoryPool_1<T> __declspec(property(get=__get__pool, put=__set__pool))  _pool;

constexpr void __set__pool(Zenject::IMemoryPool_1<T> value) ;

constexpr Zenject::IMemoryPool_1<T> __get__pool() const;


// Methods

// Ctor Parameters [CppParam { name: "pool", ty: "Zenject::IMemoryPool_1<T>", modifiers: "", def_value: None }]
explicit PoolWrapperFactory_1(Zenject::IMemoryPool_1<T> pool) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::IMemoryPool_1<T> pool) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final true
 T Create() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolWrapperFactory_1, "Zenject", "PoolWrapperFactory`1");
