#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryArgumentsToChoiceBinder_2;
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
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryToChoiceIdBinder_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_2<TParam1,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_2<System::Int32Enum,TContract>;
}
// Type: Zenject::FactoryToChoiceIdBinder`2
// Type: Zenject::FactoryToChoiceIdBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10799)), TypeDefinitionIndex(TypeDefinitionIndex(10646)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10646), inst: 1691 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10799), inst: 80 })
// CS Name: Zenject.FactoryToChoiceIdBinder`2
class CORDL_TYPE FactoryToChoiceIdBinder_2<TParam1,TContract> : public Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_2(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_2& operator=(FactoryToChoiceIdBinder_2&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_2& operator=(FactoryToChoiceIdBinder_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_2(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryToChoiceIdBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10646)), TypeDefinitionIndex(TypeDefinitionIndex(10799)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10646), inst: 1691 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10799), inst: 1536 })
// CS Name: Zenject.FactoryToChoiceIdBinder`2
class CORDL_TYPE FactoryToChoiceIdBinder_2<System::Int32Enum,TContract> : public Zenject::FactoryArgumentsToChoiceBinder_2<System::Int32Enum,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceIdBinder_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceIdBinder_2(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_2<System::Int32Enum,TContract>(ptr) {
}


  constexpr FactoryToChoiceIdBinder_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceIdBinder_2& operator=(FactoryToChoiceIdBinder_2&& o) noexcept = default;
  constexpr FactoryToChoiceIdBinder_2& operator=(FactoryToChoiceIdBinder_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceIdBinder_2(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_2<System::Int32Enum,TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_2, "Zenject", "FactoryToChoiceIdBinder`2");
