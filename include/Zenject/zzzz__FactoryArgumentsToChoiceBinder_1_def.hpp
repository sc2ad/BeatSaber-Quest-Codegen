#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract>
class FactoryToChoiceBinder_1;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryArgumentsToChoiceBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryArgumentsToChoiceBinder_1<TContract>;
}
// Type: Zenject::FactoryArgumentsToChoiceBinder`1
// Type: Zenject::FactoryArgumentsToChoiceBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10790)), TypeDefinitionIndex(TypeDefinitionIndex(10645)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10790), inst: 1823 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10645), inst: 2 })
// CS Name: Zenject.FactoryArgumentsToChoiceBinder`1
class CORDL_TYPE FactoryArgumentsToChoiceBinder_1<TContract> : public ::Zenject::FactoryToChoiceBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryArgumentsToChoiceBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_1", modifiers: " const&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_1(FactoryArgumentsToChoiceBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_1", modifiers: "&&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_1(FactoryArgumentsToChoiceBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryArgumentsToChoiceBinder_1(void* ptr) noexcept : ::Zenject::FactoryToChoiceBinder_1<TContract>(ptr) {
}


  constexpr FactoryArgumentsToChoiceBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_1& operator=(FactoryArgumentsToChoiceBinder_1&& o) noexcept = default;
  constexpr FactoryArgumentsToChoiceBinder_1& operator=(FactoryArgumentsToChoiceBinder_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryArgumentsToChoiceBinder_1(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArguments(T param) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2>
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3>
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WithFactoryArgumentsExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactoryToChoiceBinder_1<TContract> WithFactoryArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArgs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryArgumentsToChoiceBinder_1, "Zenject", "FactoryArgumentsToChoiceBinder`1");
