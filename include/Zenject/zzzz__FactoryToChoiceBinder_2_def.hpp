#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryFromBinder_2;
}
namespace Zenject {
class BindInfo;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryToChoiceBinder_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_2<TParam1,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_2<System::Int32Enum,TContract>;
}
// Type: Zenject::FactoryToChoiceBinder`2
// Type: Zenject::FactoryToChoiceBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10667), inst: 1719 }), TypeDefinitionIndex(TypeDefinitionIndex(10791)), TypeDefinitionIndex(TypeDefinitionIndex(10667))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10791), inst: 80 })
// CS Name: Zenject.FactoryToChoiceBinder`2
class CORDL_TYPE FactoryToChoiceBinder_2<TParam1,TContract> : public Zenject::FactoryFromBinder_2<TParam1,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_2(FactoryToChoiceBinder_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_2(FactoryToChoiceBinder_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_2(void* ptr) noexcept : Zenject::FactoryFromBinder_2<TParam1,TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_2& operator=(FactoryToChoiceBinder_2&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_2& operator=(FactoryToChoiceBinder_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceBinder_2(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryFromBinder_2<TParam1,TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::FactoryFromBinder_2<TParam1,TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryToChoiceBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10791)), TypeDefinitionIndex(TypeDefinitionIndex(10667)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10667), inst: 1719 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10791), inst: 1536 })
// CS Name: Zenject.FactoryToChoiceBinder`2
class CORDL_TYPE FactoryToChoiceBinder_2<System::Int32Enum,TContract> : public Zenject::FactoryFromBinder_2<System::Int32Enum,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_2(FactoryToChoiceBinder_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_2(FactoryToChoiceBinder_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_2(void* ptr) noexcept : Zenject::FactoryFromBinder_2<System::Int32Enum,TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_2& operator=(FactoryToChoiceBinder_2&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_2& operator=(FactoryToChoiceBinder_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceBinder_2(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryFromBinder_2<System::Int32Enum,TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::FactoryFromBinder_2<System::Int32Enum,TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_2, "Zenject", "FactoryToChoiceBinder`2");
