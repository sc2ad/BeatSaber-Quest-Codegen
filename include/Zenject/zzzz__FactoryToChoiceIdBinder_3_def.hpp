#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_3_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryArgumentsToChoiceBinder_3;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryToChoiceIdBinder_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_3<TParam1,System::Int32Enum,TContract>;
}
// Type: Zenject::FactoryToChoiceIdBinder`3
// Type: Zenject::FactoryToChoiceIdBinder`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10801)), TypeDefinitionIndex(TypeDefinitionIndex(10648)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10648), inst: 1692 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10801), inst: 5155 })
// CS Name: Zenject.FactoryToChoiceIdBinder`3
class CORDL_TYPE FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract> : public Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_3(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_3& operator=(FactoryToChoiceIdBinder_3&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_3& operator=(FactoryToChoiceIdBinder_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_3(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryToChoiceIdBinder`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10648), inst: 1692 }), TypeDefinitionIndex(TypeDefinitionIndex(10648)), TypeDefinitionIndex(TypeDefinitionIndex(10801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10801), inst: 5954 })
// CS Name: Zenject.FactoryToChoiceIdBinder`3
class CORDL_TYPE FactoryToChoiceIdBinder_3<TParam1,System::Int32Enum,TContract> : public Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,System::Int32Enum,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_3(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,System::Int32Enum,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_3& operator=(FactoryToChoiceIdBinder_3&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_3& operator=(FactoryToChoiceIdBinder_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_3(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_3, "Zenject", "FactoryToChoiceIdBinder`3");
