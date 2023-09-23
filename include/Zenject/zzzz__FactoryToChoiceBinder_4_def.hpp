#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinder_4_def.hpp"
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class FactoryFromBinder_4;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class FactoryToChoiceBinder_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_4<TParam1,TParam2,TParam3,TContract>;
}
// Type: Zenject::FactoryToChoiceBinder`4
// Type: Zenject::FactoryToChoiceBinder`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10689), inst: 1737 }), TypeDefinitionIndex(TypeDefinitionIndex(10794)), TypeDefinitionIndex(TypeDefinitionIndex(10689))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10794), inst: 5937 })
// CS Name: Zenject.FactoryToChoiceBinder`4
class CORDL_TYPE FactoryToChoiceBinder_4<TParam1,TParam2,TParam3,TContract> : public Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_4", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_4(FactoryToChoiceBinder_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_4", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_4(FactoryToChoiceBinder_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_4(void* ptr) noexcept : Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_4& operator=(FactoryToChoiceBinder_4&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_4& operator=(FactoryToChoiceBinder_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceBinder_4(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_4, "Zenject", "FactoryToChoiceBinder`4");
