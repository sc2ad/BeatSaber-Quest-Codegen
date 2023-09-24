#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_5_def.hpp"
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
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryArgumentsToChoiceBinder_5;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryToChoiceIdBinder_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>;
}
// Type: Zenject::FactoryToChoiceIdBinder`5
// Type: Zenject::FactoryToChoiceIdBinder`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10650)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10650), inst: 1694 }), TypeDefinitionIndex(TypeDefinitionIndex(10803))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10803), inst: 5938 })
// CS Name: Zenject.FactoryToChoiceIdBinder`5
class CORDL_TYPE FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> : public Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_5", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_5(FactoryToChoiceIdBinder_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_5", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_5(FactoryToChoiceIdBinder_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_5(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_5& operator=(FactoryToChoiceIdBinder_5&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_5& operator=(FactoryToChoiceIdBinder_5 const& o) noexcept = default;
                


// Methods

static Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_5, "Zenject", "FactoryToChoiceIdBinder`5");
