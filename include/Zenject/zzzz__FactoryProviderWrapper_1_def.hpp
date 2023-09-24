#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryProviderWrapper_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryProviderWrapper_1<TContract>;
}
// Type: Zenject::FactoryProviderWrapper`1
// Type: Zenject::FactoryProviderWrapper`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10923))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10923), inst: 2 })
// CS Name: Zenject.FactoryProviderWrapper`1
class CORDL_TYPE FactoryProviderWrapper_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IFactory_1<TContract>
constexpr operator  Zenject::IFactory_1<TContract>() const noexcept;

/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FactoryProviderWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryProviderWrapper_1", modifiers: " const&", def_value: None }]
constexpr FactoryProviderWrapper_1(FactoryProviderWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryProviderWrapper_1", modifiers: "&&", def_value: None }]
constexpr FactoryProviderWrapper_1(FactoryProviderWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryProviderWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FactoryProviderWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryProviderWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryProviderWrapper_1& operator=(FactoryProviderWrapper_1&& o) noexcept = default;
  constexpr FactoryProviderWrapper_1& operator=(FactoryProviderWrapper_1 const& o) noexcept = default;
                


// Fields

 Zenject::IProvider __declspec(property(get=__get__provider, put=__set__provider))  _provider;

constexpr void __set__provider(Zenject::IProvider value) ;

constexpr Zenject::IProvider __get__provider() const;

 Zenject::InjectContext __declspec(property(get=__get__injectContext, put=__set__injectContext))  _injectContext;

constexpr void __set__injectContext(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get__injectContext() const;


// Methods

static Zenject::FactoryProviderWrapper_1<TContract> New_ctor(Zenject::IProvider provider, Zenject::InjectContext injectContext) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::IProvider provider, Zenject::InjectContext injectContext) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final true
 TContract Create() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryProviderWrapper_1, "Zenject", "FactoryProviderWrapper`1");
