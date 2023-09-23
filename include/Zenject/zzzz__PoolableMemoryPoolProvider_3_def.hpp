#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IValidatable;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TContract,typename TMemoryPool>
class PoolableMemoryPoolProvider_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
class PoolableMemoryPoolProvider_3<TParam1,TContract,TMemoryPool>;
}
// Type: Zenject::PoolableMemoryPoolProvider`3
// Type: Zenject::PoolableMemoryPoolProvider`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11161)), TypeDefinitionIndex(TypeDefinitionIndex(11163)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11161), inst: 4688 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11163), inst: 5155 })
// CS Name: Zenject.PoolableMemoryPoolProvider`3
class CORDL_TYPE PoolableMemoryPoolProvider_3<TParam1,TContract,TMemoryPool> : public Zenject::PoolableMemoryPoolProviderBase_1<TContract> {
public:
// Declarations
/// @brief Convert operator to Zenject::IValidatable
constexpr operator  Zenject::IValidatable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PoolableMemoryPoolProvider_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_3", modifiers: " const&", def_value: None }]
constexpr PoolableMemoryPoolProvider_3(PoolableMemoryPoolProvider_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_3", modifiers: "&&", def_value: None }]
constexpr PoolableMemoryPoolProvider_3(PoolableMemoryPoolProvider_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableMemoryPoolProvider_3(void* ptr) noexcept : Zenject::PoolableMemoryPoolProviderBase_1<TContract>(ptr) {
}


  constexpr PoolableMemoryPoolProvider_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableMemoryPoolProvider_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableMemoryPoolProvider_3& operator=(PoolableMemoryPoolProvider_3&& o) noexcept = default;
  constexpr PoolableMemoryPoolProvider_3& operator=(PoolableMemoryPoolProvider_3 const& o) noexcept = default;
                


// Fields

 TMemoryPool __declspec(property(get=__get__pool, put=__set__pool))  _pool;

constexpr void __set__pool(TMemoryPool value) ;

constexpr TMemoryPool __get__pool() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "poolId", ty: "System::Guid", modifiers: "", def_value: None }]
explicit PoolableMemoryPoolProvider_3(Zenject::DiContainer container, System::Guid poolId) ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProvider_3, "Zenject", "PoolableMemoryPoolProvider`3");
