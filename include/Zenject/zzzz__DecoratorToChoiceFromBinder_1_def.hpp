#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryFromBinder_2;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class DecoratorToChoiceFromBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class DecoratorToChoiceFromBinder_1<TContract>;
}
// Type: Zenject::DecoratorToChoiceFromBinder`1
// Type: Zenject::DecoratorToChoiceFromBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10789))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10789), inst: 2 })
// CS Name: Zenject.DecoratorToChoiceFromBinder`1
class CORDL_TYPE DecoratorToChoiceFromBinder_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DecoratorToChoiceFromBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoratorToChoiceFromBinder_1", modifiers: " const&", def_value: None }]
constexpr DecoratorToChoiceFromBinder_1(DecoratorToChoiceFromBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoratorToChoiceFromBinder_1", modifiers: "&&", def_value: None }]
constexpr DecoratorToChoiceFromBinder_1(DecoratorToChoiceFromBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoratorToChoiceFromBinder_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DecoratorToChoiceFromBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoratorToChoiceFromBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoratorToChoiceFromBinder_1& operator=(DecoratorToChoiceFromBinder_1&& o) noexcept = default;
  constexpr DecoratorToChoiceFromBinder_1& operator=(DecoratorToChoiceFromBinder_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__bindContainer, put=__set__bindContainer))  _bindContainer;

constexpr void __set__bindContainer(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__bindContainer() const;

 Zenject::BindInfo __declspec(property(get=__get__bindInfo, put=__set__bindInfo))  _bindInfo;

constexpr void __set__bindInfo(Zenject::BindInfo value) ;

constexpr Zenject::BindInfo __get__bindInfo() const;

 Zenject::FactoryBindInfo __declspec(property(get=__get__factoryBindInfo, put=__set__factoryBindInfo))  _factoryBindInfo;

constexpr void __set__factoryBindInfo(Zenject::FactoryBindInfo value) ;

constexpr Zenject::FactoryBindInfo __get__factoryBindInfo() const;


// Methods

static Zenject::DecoratorToChoiceFromBinder_1<TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method With addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::FactoryFromBinder_2<TContract,TConcrete> With() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::DecoratorToChoiceFromBinder_1, "Zenject", "DecoratorToChoiceFromBinder`1");
