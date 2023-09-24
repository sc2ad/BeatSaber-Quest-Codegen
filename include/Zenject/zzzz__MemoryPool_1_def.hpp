#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class MemoryPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class MemoryPool_1<TValue>;
}
// Type: Zenject::MemoryPool`1
// Type: Zenject::MemoryPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10991)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10991), inst: 2648 }), TypeDefinitionIndex(TypeDefinitionIndex(10980))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10980), inst: 2 })
// CS Name: Zenject.MemoryPool`1
class CORDL_TYPE MemoryPool_1<TValue> : public Zenject::MemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_1<TValue>
constexpr operator  Zenject::IMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief Convert operator to Zenject::IFactory_1<TValue>
constexpr operator  Zenject::IFactory_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_1", modifiers: " const&", def_value: None }]
constexpr MemoryPool_1(MemoryPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_1", modifiers: "&&", def_value: None }]
constexpr MemoryPool_1(MemoryPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPool_1(void* ptr) noexcept : Zenject::MemoryPoolBase_1<TValue>(ptr) {
}


  constexpr MemoryPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPool_1& operator=(MemoryPool_1&& o) noexcept = default;
  constexpr MemoryPool_1& operator=(MemoryPool_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn() ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TValue item) ;

/// @brief Method Zenject.IFactory<TValue>.Create addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Zenject_IFactory_TValue__Create() ;

static Zenject::MemoryPool_1<TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_1, "Zenject", "MemoryPool`1");
