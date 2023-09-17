#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_6_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class FactoryArgumentsToChoiceBinder_6;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class FactoryToChoiceIdBinder_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>;
}
// Type: Zenject::FactoryToChoiceIdBinder`6
// Type: Zenject::FactoryToChoiceIdBinder`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10804)), TypeDefinitionIndex(TypeDefinitionIndex(10651)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10651), inst: 1695 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10804), inst: 5939 })
// CS Name: Zenject.FactoryToChoiceIdBinder`6
class CORDL_TYPE FactoryToChoiceIdBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_6", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_6(FactoryToChoiceIdBinder_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_6", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_6(FactoryToChoiceIdBinder_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_6(void* ptr) noexcept : ::Zenject::FactoryArgumentsToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_6& operator=(FactoryToChoiceIdBinder_6&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_6& operator=(FactoryToChoiceIdBinder_6 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_6(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactoryArgumentsToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_6, "Zenject", "FactoryToChoiceIdBinder`6");
