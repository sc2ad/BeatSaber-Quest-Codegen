#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_7_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryArgumentsToChoiceBinder_7;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryToChoiceIdBinder_7;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>;
}
// Type: Zenject::FactoryToChoiceIdBinder`7
// Type: Zenject::FactoryToChoiceIdBinder`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10652)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10652), inst: 1696 }), TypeDefinitionIndex(TypeDefinitionIndex(10805))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10805), inst: 5940 })
// CS Name: Zenject.FactoryToChoiceIdBinder`7
class CORDL_TYPE FactoryToChoiceIdBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_7", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_7(FactoryToChoiceIdBinder_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_7", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_7(FactoryToChoiceIdBinder_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_7(void* ptr) noexcept : ::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_7& operator=(FactoryToChoiceIdBinder_7&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_7& operator=(FactoryToChoiceIdBinder_7 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_7(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_7, "Zenject", "FactoryToChoiceIdBinder`7");
