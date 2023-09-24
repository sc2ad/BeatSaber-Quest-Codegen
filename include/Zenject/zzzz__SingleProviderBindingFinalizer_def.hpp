#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class SingleProviderBindingFinalizer;
}
// Type: Zenject::SingleProviderBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10908))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10912))
// CS Name: Zenject.SingleProviderBindingFinalizer
class CORDL_TYPE SingleProviderBindingFinalizer : public Zenject::ProviderBindingFinalizer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SingleProviderBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleProviderBindingFinalizer", modifiers: " const&", def_value: None }]
constexpr SingleProviderBindingFinalizer(SingleProviderBindingFinalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleProviderBindingFinalizer", modifiers: "&&", def_value: None }]
constexpr SingleProviderBindingFinalizer(SingleProviderBindingFinalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingleProviderBindingFinalizer(void* ptr) noexcept : Zenject::ProviderBindingFinalizer(ptr) {
}


  constexpr SingleProviderBindingFinalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingleProviderBindingFinalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingleProviderBindingFinalizer& operator=(SingleProviderBindingFinalizer&& o) noexcept = default;
  constexpr SingleProviderBindingFinalizer& operator=(SingleProviderBindingFinalizer const& o) noexcept = default;
                


// Fields

 System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> __declspec(property(get=__get__providerFactory, put=__set__providerFactory))  _providerFactory;

constexpr void __set__providerFactory(System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> value) ;

constexpr System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> __get__providerFactory() const;


// Methods

static Zenject::SingleProviderBindingFinalizer New_ctor(Zenject::BindInfo bindInfo, System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> providerFactory) ;

/// @brief Method .ctor addr 0x2d6d258 size 0x2c virtual false final false
 void _ctor(Zenject::BindInfo bindInfo, System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> providerFactory) ;

/// @brief Method OnFinalizeBinding addr 0x2d6d284 size 0xc4 virtual true final false
 void OnFinalizeBinding(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SingleProviderBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SingleProviderBindingFinalizer, "Zenject", "SingleProviderBindingFinalizer");
