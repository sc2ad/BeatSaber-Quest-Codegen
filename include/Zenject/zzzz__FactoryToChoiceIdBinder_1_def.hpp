#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template<typename TContract>
class FactoryArgumentsToChoiceBinder_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryToChoiceIdBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_1<TContract>;
}
// Type: Zenject::FactoryToChoiceIdBinder`1
// Type: Zenject::FactoryToChoiceIdBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10645)), TypeDefinitionIndex(TypeDefinitionIndex(10798)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10645), inst: 1687 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10798), inst: 2 })
// CS Name: Zenject.FactoryToChoiceIdBinder`1
class CORDL_TYPE FactoryToChoiceIdBinder_1<TContract> : public Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_1", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_1(FactoryToChoiceIdBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_1", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_1(FactoryToChoiceIdBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_1(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_1<TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_1& operator=(FactoryToChoiceIdBinder_1&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_1& operator=(FactoryToChoiceIdBinder_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_1(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_1<TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_1, "Zenject", "FactoryToChoiceIdBinder`1");
