#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinder_6_def.hpp"
namespace {
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class FactoryFromBinder_6;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class FactoryToChoiceBinder_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>;
}
// Type: Zenject::FactoryToChoiceBinder`6
// Type: Zenject::FactoryToChoiceBinder`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10707), inst: 1755 }), TypeDefinitionIndex(TypeDefinitionIndex(10796)), TypeDefinitionIndex(TypeDefinitionIndex(10707))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10796), inst: 5939 })
// CS Name: Zenject.FactoryToChoiceBinder`6
class CORDL_TYPE FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> : public ::Zenject::FactoryFromBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_6", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_6(FactoryToChoiceBinder_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_6", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_6(FactoryToChoiceBinder_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_6(void* ptr) noexcept : ::Zenject::FactoryFromBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_6& operator=(FactoryToChoiceBinder_6&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_6& operator=(FactoryToChoiceBinder_6 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceBinder_6(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactoryFromBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 ::Zenject::FactoryFromBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_6, "Zenject", "FactoryToChoiceBinder`6");