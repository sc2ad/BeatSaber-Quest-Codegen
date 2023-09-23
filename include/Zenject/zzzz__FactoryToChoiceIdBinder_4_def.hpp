#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_4_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class FactoryArgumentsToChoiceBinder_4;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class FactoryToChoiceIdBinder_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_4<TParam1,TParam2,TParam3,TContract>;
}
// Type: Zenject::FactoryToChoiceIdBinder`4
// Type: Zenject::FactoryToChoiceIdBinder`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10649)), TypeDefinitionIndex(TypeDefinitionIndex(10802)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10649), inst: 1693 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10802), inst: 5937 })
// CS Name: Zenject.FactoryToChoiceIdBinder`4
class CORDL_TYPE FactoryToChoiceIdBinder_4<TParam1,TParam2,TParam3,TContract> : public Zenject::FactoryArgumentsToChoiceBinder_4<TParam1,TParam2,TParam3,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_4", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_4(FactoryToChoiceIdBinder_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_4", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_4(FactoryToChoiceIdBinder_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_4(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_4<TParam1,TParam2,TParam3,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_4& operator=(FactoryToChoiceIdBinder_4&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_4& operator=(FactoryToChoiceIdBinder_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_4(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_4<TParam1,TParam2,TParam3,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_4, "Zenject", "FactoryToChoiceIdBinder`4");
