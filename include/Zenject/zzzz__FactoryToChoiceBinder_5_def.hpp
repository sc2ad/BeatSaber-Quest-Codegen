#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinder_5_def.hpp"
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryFromBinder_5;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryToChoiceBinder_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>;
}
// Type: Zenject::FactoryToChoiceBinder`5
// Type: Zenject::FactoryToChoiceBinder`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10698)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10698), inst: 1746 }), TypeDefinitionIndex(TypeDefinitionIndex(10795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10795), inst: 5938 })
// CS Name: Zenject.FactoryToChoiceBinder`5
class CORDL_TYPE FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> : public Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_5", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_5(FactoryToChoiceBinder_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_5", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_5(FactoryToChoiceBinder_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_5(void* ptr) noexcept : Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_5& operator=(FactoryToChoiceBinder_5&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_5& operator=(FactoryToChoiceBinder_5 const& o) noexcept = default;
                


// Methods

static Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_5, "Zenject", "FactoryToChoiceBinder`5");
