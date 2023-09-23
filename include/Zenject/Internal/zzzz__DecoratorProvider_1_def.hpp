#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
template<typename TParam1,typename TValue>
class IFactory_2;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject::Internal {
class IDecoratorProvider;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Zenject {
class InjectContext;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Zenject::Internal {
template<typename TContract>
class DecoratorProvider_1;
}
namespace Zenject::Internal {
template<::cordl_internals::il2cpp_reference_type TContract>
class DecoratorProvider_1<TContract>;
}
// Type: Zenject.Internal::DecoratorProvider`1
// Type: Zenject.Internal::DecoratorProvider`1
namespace Zenject::Internal {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11312))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11312), inst: 2 })
// CS Name: Zenject.Internal.DecoratorProvider`1
class CORDL_TYPE DecoratorProvider_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::Internal::IDecoratorProvider
constexpr operator  Zenject::Internal::IDecoratorProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DecoratorProvider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoratorProvider_1", modifiers: " const&", def_value: None }]
constexpr DecoratorProvider_1(DecoratorProvider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoratorProvider_1", modifiers: "&&", def_value: None }]
constexpr DecoratorProvider_1(DecoratorProvider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoratorProvider_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DecoratorProvider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoratorProvider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoratorProvider_1& operator=(DecoratorProvider_1&& o) noexcept = default;
  constexpr DecoratorProvider_1& operator=(DecoratorProvider_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<Zenject::IProvider,System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__cachedInstances, put=__set__cachedInstances))  _cachedInstances;

constexpr void __set__cachedInstances(System::Collections::Generic::Dictionary_2<Zenject::IProvider,System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::Dictionary_2<Zenject::IProvider,System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> __get__cachedInstances() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::List_1<System::Guid> __declspec(property(get=__get__factoryBindIds, put=__set__factoryBindIds))  _factoryBindIds;

constexpr void __set__factoryBindIds(System::Collections::Generic::List_1<System::Guid> value) ;

constexpr System::Collections::Generic::List_1<System::Guid> __get__factoryBindIds() const;

 System::Collections::Generic::List_1<Zenject::IFactory_2<TContract,TContract>> __declspec(property(get=__get__decoratorFactories, put=__set__decoratorFactories))  _decoratorFactories;

constexpr void __set__decoratorFactories(System::Collections::Generic::List_1<Zenject::IFactory_2<TContract,TContract>> value) ;

constexpr System::Collections::Generic::List_1<Zenject::IFactory_2<TContract,TContract>> __get__decoratorFactories() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit DecoratorProvider_1(Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container) ;

/// @brief Method AddFactoryId addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddFactoryId(System::Guid factoryBindId) ;

/// @brief Method LazyInitializeDecoratorFactories addr 0x0 size 0xffffffffffffffff virtual false final false
 void LazyInitializeDecoratorFactories() ;

/// @brief Method GetAllInstances addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllInstances(Zenject::IProvider provider, Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method WrapProviderInstances addr 0x0 size 0xffffffffffffffff virtual false final false
 void WrapProviderInstances(Zenject::IProvider provider, Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method DecorateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
 ::bs_hook::Il2CppWrapperType DecorateInstance(::bs_hook::Il2CppWrapperType instance, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Internal::DecoratorProvider_1, "Zenject.Internal", "DecoratorProvider`1");
