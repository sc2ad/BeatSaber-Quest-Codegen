#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class PlaceholderFactoryBindingFinalizer_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class PlaceholderFactoryBindingFinalizer_1<TContract>;
}
// Type: Zenject::PlaceholderFactoryBindingFinalizer`1
// Type: Zenject::PlaceholderFactoryBindingFinalizer`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10908)), TypeDefinitionIndex(TypeDefinitionIndex(10806))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10806), inst: 2 })
// CS Name: Zenject.PlaceholderFactoryBindingFinalizer`1
class CORDL_TYPE PlaceholderFactoryBindingFinalizer_1<TContract> : public Zenject::ProviderBindingFinalizer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlaceholderFactoryBindingFinalizer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBindingFinalizer_1", modifiers: " const&", def_value: None }]
constexpr PlaceholderFactoryBindingFinalizer_1(PlaceholderFactoryBindingFinalizer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBindingFinalizer_1", modifiers: "&&", def_value: None }]
constexpr PlaceholderFactoryBindingFinalizer_1(PlaceholderFactoryBindingFinalizer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlaceholderFactoryBindingFinalizer_1(void* ptr) noexcept : Zenject::ProviderBindingFinalizer(ptr) {
}


  constexpr PlaceholderFactoryBindingFinalizer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlaceholderFactoryBindingFinalizer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlaceholderFactoryBindingFinalizer_1& operator=(PlaceholderFactoryBindingFinalizer_1&& o) noexcept = default;
  constexpr PlaceholderFactoryBindingFinalizer_1& operator=(PlaceholderFactoryBindingFinalizer_1 const& o) noexcept = default;
                


// Fields

 Zenject::FactoryBindInfo __declspec(property(get=__get__factoryBindInfo, put=__set__factoryBindInfo))  _factoryBindInfo;

constexpr void __set__factoryBindInfo(Zenject::FactoryBindInfo value) ;

constexpr Zenject::FactoryBindInfo __get__factoryBindInfo() const;


// Methods

static Zenject::PlaceholderFactoryBindingFinalizer_1<TContract> New_ctor(Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method OnFinalizeBinding addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnFinalizeBinding(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactoryBindingFinalizer_1, "Zenject", "PlaceholderFactoryBindingFinalizer`1");
