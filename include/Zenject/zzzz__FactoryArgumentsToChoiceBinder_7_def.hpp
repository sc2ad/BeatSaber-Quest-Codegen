#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_7_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryToChoiceBinder_7;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryArgumentsToChoiceBinder_7;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TContract>
class FactoryArgumentsToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>;
}
// Type: Zenject::FactoryArgumentsToChoiceBinder`7
// Type: Zenject::FactoryArgumentsToChoiceBinder`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10797)), TypeDefinitionIndex(TypeDefinitionIndex(10652)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10797), inst: 1830 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10652), inst: 5940 })
// CS Name: Zenject.FactoryArgumentsToChoiceBinder`7
class CORDL_TYPE FactoryArgumentsToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> : public Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryArgumentsToChoiceBinder_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_7", modifiers: " const&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_7(FactoryArgumentsToChoiceBinder_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_7", modifiers: "&&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_7(FactoryArgumentsToChoiceBinder_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryArgumentsToChoiceBinder_7(void* ptr) noexcept : Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>(ptr) {
}


  constexpr FactoryArgumentsToChoiceBinder_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_7& operator=(FactoryArgumentsToChoiceBinder_7&& o) noexcept = default;
  constexpr FactoryArgumentsToChoiceBinder_7& operator=(FactoryArgumentsToChoiceBinder_7 const& o) noexcept = default;
                


// Methods

static Zenject::FactoryArgumentsToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArguments(T param) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2>
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WithFactoryArgumentsExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArgs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryArgumentsToChoiceBinder_7, "Zenject", "FactoryArgumentsToChoiceBinder`7");
