#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class InjectContext;
}
namespace System {
struct Guid;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract,typename TMemoryPool>
class PoolableMemoryPoolProvider_7;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
class PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>;
}
// Type: Zenject::PoolableMemoryPoolProvider`7
// Type: Zenject::PoolableMemoryPoolProvider`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11161), inst: 4692 }), TypeDefinitionIndex(TypeDefinitionIndex(11167)), TypeDefinitionIndex(TypeDefinitionIndex(11161))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11167), inst: 5940 })
// CS Name: Zenject.PoolableMemoryPoolProvider`7
class CORDL_TYPE PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool> : public Zenject::PoolableMemoryPoolProviderBase_1<TContract> {
public:
// Declarations
/// @brief Convert operator to Zenject::IValidatable
constexpr operator  Zenject::IValidatable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableMemoryPoolProvider_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_7", modifiers: " const&", def_value: None }]
constexpr PoolableMemoryPoolProvider_7(PoolableMemoryPoolProvider_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_7", modifiers: "&&", def_value: None }]
constexpr PoolableMemoryPoolProvider_7(PoolableMemoryPoolProvider_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableMemoryPoolProvider_7(void* ptr) noexcept : Zenject::PoolableMemoryPoolProviderBase_1<TContract>(ptr) {
}


  constexpr PoolableMemoryPoolProvider_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableMemoryPoolProvider_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableMemoryPoolProvider_7& operator=(PoolableMemoryPoolProvider_7&& o) noexcept = default;
  constexpr PoolableMemoryPoolProvider_7& operator=(PoolableMemoryPoolProvider_7 const& o) noexcept = default;
                


// Fields

 TMemoryPool __declspec(property(get=__get__pool, put=__set__pool))  _pool;

constexpr void __set__pool(TMemoryPool value) ;

constexpr TMemoryPool __get__pool() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "poolId", ty: "System::Guid", modifiers: "", def_value: None }]
explicit PoolableMemoryPoolProvider_7(Zenject::DiContainer container, System::Guid poolId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, System::Guid poolId) ;

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final true
 void Validate() ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProvider_7, "Zenject", "PoolableMemoryPoolProvider`7");
