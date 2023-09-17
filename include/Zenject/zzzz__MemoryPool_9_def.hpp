#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TValue>
class IMemoryPool_9;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TValue>
class IFactory_9;
}
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
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TValue>
class MemoryPool_9;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TValue>
class MemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>;
}
// Type: Zenject::MemoryPool`9
// Type: Zenject::MemoryPool`9
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10991), inst: 2695 }), TypeDefinitionIndex(TypeDefinitionIndex(10988)), TypeDefinitionIndex(TypeDefinitionIndex(10991))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10988), inst: 7469 })
// CS Name: Zenject.MemoryPool`9
class CORDL_TYPE MemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue> : public ::Zenject::MemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IMemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>
constexpr operator  ::Zenject::IMemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr operator  ::Zenject::IMemoryPool() const noexcept;

/// @brief Convert operator to ::Zenject::IFactory_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>
constexpr operator  ::Zenject::IFactory_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IFactory
constexpr operator  ::Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPool_9() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_9", modifiers: " const&", def_value: None }]
constexpr MemoryPool_9(MemoryPool_9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_9", modifiers: "&&", def_value: None }]
constexpr MemoryPool_9(MemoryPool_9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPool_9(void* ptr) noexcept : ::Zenject::MemoryPoolBase_1<TValue>(ptr) {
}


  constexpr MemoryPool_9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPool_9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPool_9& operator=(MemoryPool_9&& o) noexcept = default;
  constexpr MemoryPool_9& operator=(MemoryPool_9 const& o) noexcept = default;
                


// Methods

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item) ;

/// @brief Method Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>.Create addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Zenject_IFactory_TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue__Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8) ;

// Ctor Parameters []
explicit MemoryPool_9() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPool_9, "Zenject", "MemoryPool`9");
