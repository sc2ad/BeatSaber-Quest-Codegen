#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinder_3_def.hpp"
namespace {
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryFromBinder_3;
}
namespace System {
struct Int32Enum;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryToChoiceBinder_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_3<TParam1,::System::Int32Enum,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_3<TParam1,TParam2,TContract>;
}
// Type: Zenject::FactoryToChoiceBinder`3
// Type: Zenject::FactoryToChoiceBinder`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10680), inst: 1728 }), TypeDefinitionIndex(TypeDefinitionIndex(10680)), TypeDefinitionIndex(TypeDefinitionIndex(10793))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10793), inst: 5155 })
// CS Name: Zenject.FactoryToChoiceBinder`3
class CORDL_TYPE FactoryToChoiceBinder_3<TParam1,TParam2,TContract> : public ::Zenject::FactoryFromBinder_3<TParam1,TParam2,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_3", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_3(FactoryToChoiceBinder_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_3", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_3(FactoryToChoiceBinder_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_3(void* ptr) noexcept : ::Zenject::FactoryFromBinder_3<TParam1,TParam2,TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_3& operator=(FactoryToChoiceBinder_3&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_3& operator=(FactoryToChoiceBinder_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceBinder_3(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactoryFromBinder_3<TParam1,TParam2,TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 ::Zenject::FactoryFromBinder_3<TParam1,TParam2,TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryToChoiceBinder`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10680), inst: 1728 }), TypeDefinitionIndex(TypeDefinitionIndex(10793)), TypeDefinitionIndex(TypeDefinitionIndex(10680))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10793), inst: 5954 })
// CS Name: Zenject.FactoryToChoiceBinder`3
class CORDL_TYPE FactoryToChoiceBinder_3<TParam1,::System::Int32Enum,TContract> : public ::Zenject::FactoryFromBinder_3<TParam1,::System::Int32Enum,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_3", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_3(FactoryToChoiceBinder_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_3", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_3(FactoryToChoiceBinder_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_3(void* ptr) noexcept : ::Zenject::FactoryFromBinder_3<TParam1,::System::Int32Enum,TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_3& operator=(FactoryToChoiceBinder_3&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_3& operator=(FactoryToChoiceBinder_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceBinder_3(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactoryFromBinder_3<TParam1,::System::Int32Enum,TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 ::Zenject::FactoryFromBinder_3<TParam1,::System::Int32Enum,TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_3, "Zenject", "FactoryToChoiceBinder`3");