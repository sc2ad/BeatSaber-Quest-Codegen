#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IProvider;
}
namespace System {
struct Guid;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class PoolableMemoryPoolProviderBase_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class PoolableMemoryPoolProviderBase_1<TContract>;
}
// Type: Zenject::PoolableMemoryPoolProviderBase`1
// Type: Zenject::PoolableMemoryPoolProviderBase`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11161))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11161), inst: 2 })
// CS Name: Zenject.PoolableMemoryPoolProviderBase`1
class CORDL_TYPE PoolableMemoryPoolProviderBase_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PoolableMemoryPoolProviderBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProviderBase_1", modifiers: " const&", def_value: None }]
constexpr PoolableMemoryPoolProviderBase_1(PoolableMemoryPoolProviderBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProviderBase_1", modifiers: "&&", def_value: None }]
constexpr PoolableMemoryPoolProviderBase_1(PoolableMemoryPoolProviderBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableMemoryPoolProviderBase_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoolableMemoryPoolProviderBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableMemoryPoolProviderBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableMemoryPoolProviderBase_1& operator=(PoolableMemoryPoolProviderBase_1&& o) noexcept = default;
  constexpr PoolableMemoryPoolProviderBase_1& operator=(PoolableMemoryPoolProviderBase_1 const& o) noexcept = default;
                


// Fields

 System::Guid __declspec(property(get=__get__PoolId_k__BackingField, put=__set__PoolId_k__BackingField))  _PoolId_k__BackingField;

constexpr void __set__PoolId_k__BackingField(System::Guid value) ;

constexpr System::Guid __get__PoolId_k__BackingField() const;

 Zenject::DiContainer __declspec(property(get=__get__Container_k__BackingField, put=__set__Container_k__BackingField))  _Container_k__BackingField;

constexpr void __set__Container_k__BackingField(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__Container_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 System::Guid __declspec(property(get=get_PoolId, put=set_PoolId))  PoolId;

 Zenject::DiContainer __declspec(property(get=get_Container, put=set_Container))  Container;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "poolId", ty: "System::Guid", modifiers: "", def_value: None }]
explicit PoolableMemoryPoolProviderBase_1(Zenject::DiContainer container, System::Guid poolId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, System::Guid poolId) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsCached() ;

/// @brief Method get_PoolId addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Guid get_PoolId() ;

/// @brief Method set_PoolId addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_PoolId(System::Guid value) ;

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method set_Container addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Container(Zenject::DiContainer value) ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProviderBase_1, "Zenject", "PoolableMemoryPoolProviderBase`1");
