#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_11_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract>
class FactoryToChoiceBinder_11;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract>
class FactoryArgumentsToChoiceBinder_11;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TParam9,::cordl_internals::il2cpp_reference_type TParam10,::cordl_internals::il2cpp_reference_type TContract>
class FactoryArgumentsToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>;
}
// Type: Zenject::FactoryArgumentsToChoiceBinder`11
// Type: Zenject::FactoryArgumentsToChoiceBinder`11
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TParam9,::cordl_internals::il2cpp_reference_type TParam10,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10792)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10792), inst: 1824 }), TypeDefinitionIndex(TypeDefinitionIndex(10647))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10647), inst: 5955 })
// CS Name: Zenject.FactoryArgumentsToChoiceBinder`11
class CORDL_TYPE FactoryArgumentsToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> : public Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryArgumentsToChoiceBinder_11() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_11", modifiers: " const&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_11(FactoryArgumentsToChoiceBinder_11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_11", modifiers: "&&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_11(FactoryArgumentsToChoiceBinder_11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryArgumentsToChoiceBinder_11(void* ptr) noexcept : Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>(ptr) {
}


  constexpr FactoryArgumentsToChoiceBinder_11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_11& operator=(FactoryArgumentsToChoiceBinder_11&& o) noexcept = default;
  constexpr FactoryArgumentsToChoiceBinder_11& operator=(FactoryArgumentsToChoiceBinder_11 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryArgumentsToChoiceBinder_11(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArguments(T param) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2>
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WithFactoryArgumentsExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArgs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryArgumentsToChoiceBinder_11, "Zenject", "FactoryArgumentsToChoiceBinder`11");
