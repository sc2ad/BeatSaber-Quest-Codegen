#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct ScopeTypes;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class ProviderBindingFinalizer;
}
namespace Zenject {
class Zenject__ProviderBindingFinalizer____c;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10907))
// CS Name: Zenject.ProviderBindingFinalizer::<>c
class CORDL_TYPE Zenject__ProviderBindingFinalizer____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__ProviderBindingFinalizer____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ProviderBindingFinalizer____c", modifiers: " const&", def_value: None }]
constexpr Zenject__ProviderBindingFinalizer____c(Zenject__ProviderBindingFinalizer____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ProviderBindingFinalizer____c", modifiers: "&&", def_value: None }]
constexpr Zenject__ProviderBindingFinalizer____c(Zenject__ProviderBindingFinalizer____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ProviderBindingFinalizer____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ProviderBindingFinalizer____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ProviderBindingFinalizer____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ProviderBindingFinalizer____c& operator=(Zenject__ProviderBindingFinalizer____c&& o) noexcept = default;
  constexpr Zenject__ProviderBindingFinalizer____c& operator=(Zenject__ProviderBindingFinalizer____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__ProviderBindingFinalizer____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__ProviderBindingFinalizer____c value) ;

static Zenject::Zenject__ProviderBindingFinalizer____c __get___9() ;

static System::Func_2<System::Type,::StringW> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<System::Type,::StringW> value) ;

static System::Func_2<System::Type,::StringW> __get___9__7_0() ;

static System::Func_2<System::Type,::StringW> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<System::Type,::StringW> value) ;

static System::Func_2<System::Type,::StringW> __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__ProviderBindingFinalizer____c() ;

/// @brief Method .ctor addr 0x2d6c7d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetScope>b__7_0 addr 0x2d6c7d8 size 0x58 virtual false final false
 ::StringW _GetScope_b__7_0(System::Type x) ;

/// @brief Method <FinalizeBinding>b__8_0 addr 0x2d6c830 size 0x58 virtual false final false
 ::StringW _FinalizeBinding_b__8_0(System::Type x) ;

/// @brief Method __zenCreate addr 0x2d6c888 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6c8e4 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ProviderBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10908))
// CS Name: Zenject.ProviderBindingFinalizer
class CORDL_TYPE ProviderBindingFinalizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__ProviderBindingFinalizer____c;

/// @brief Convert operator to Zenject::IBindingFinalizer
constexpr operator  Zenject::IBindingFinalizer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ProviderBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer", modifiers: " const&", def_value: None }]
constexpr ProviderBindingFinalizer(ProviderBindingFinalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderBindingFinalizer", modifiers: "&&", def_value: None }]
constexpr ProviderBindingFinalizer(ProviderBindingFinalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProviderBindingFinalizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProviderBindingFinalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProviderBindingFinalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProviderBindingFinalizer& operator=(ProviderBindingFinalizer&& o) noexcept = default;
  constexpr ProviderBindingFinalizer& operator=(ProviderBindingFinalizer const& o) noexcept = default;
                


// Fields

 Zenject::BindInfo __declspec(property(get=__get__BindInfo_k__BackingField, put=__set__BindInfo_k__BackingField))  _BindInfo_k__BackingField;

constexpr void __set__BindInfo_k__BackingField(Zenject::BindInfo value) ;

constexpr Zenject::BindInfo __get__BindInfo_k__BackingField() const;


// Properties

 Zenject::BindingInheritanceMethods __declspec(property(get=get_BindingInheritanceMethod))  BindingInheritanceMethod;

 Zenject::BindInfo __declspec(property(get=get_BindInfo, put=set_BindInfo))  BindInfo;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
explicit ProviderBindingFinalizer(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d68a68 size 0x28 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method get_BindingInheritanceMethod addr 0x2d6b924 size 0x1c virtual true final true
 Zenject::BindingInheritanceMethods get_BindingInheritanceMethod() ;

/// @brief Method get_BindInfo addr 0x2d6b940 size 0x8 virtual false final false
 Zenject::BindInfo get_BindInfo() ;

/// @brief Method set_BindInfo addr 0x2d6b948 size 0x8 virtual false final false
 void set_BindInfo(Zenject::BindInfo value) ;

/// @brief Method GetScope addr 0x2d69180 size 0x24c virtual false final false
 Zenject::ScopeTypes GetScope() ;

/// @brief Method FinalizeBinding addr 0x2d6b950 size 0x370 virtual true final true
 void FinalizeBinding(Zenject::DiContainer container) ;

/// @brief Method OnFinalizeBinding addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnFinalizeBinding(Zenject::DiContainer container) ;

/// @brief Method RegisterProvider addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 void RegisterProvider(Zenject::DiContainer container, Zenject::IProvider provider) ;

/// @brief Method RegisterProvider addr 0x2d6bcc0 size 0x254 virtual false final false
 void RegisterProvider(Zenject::DiContainer container, System::Type contractType, Zenject::IProvider provider) ;

/// @brief Method RegisterProviderPerContract addr 0x2d69978 size 0x214 virtual false final false
 void RegisterProviderPerContract(Zenject::DiContainer container, System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> providerFunc) ;

/// @brief Method RegisterProviderForAllContracts addr 0x2d6c0d8 size 0x1e8 virtual false final false
 void RegisterProviderForAllContracts(Zenject::DiContainer container, Zenject::IProvider provider) ;

/// @brief Method RegisterProvidersPerContractAndConcreteType addr 0x2d6c2c0 size 0x2cc virtual false final false
 void RegisterProvidersPerContractAndConcreteType(Zenject::DiContainer container, System::Collections::Generic::List_1<System::Type> concreteTypes, System::Func_3<System::Type,System::Type,Zenject::IProvider> providerFunc) ;

/// @brief Method ValidateBindTypes addr 0x2d6c58c size 0x1e0 virtual false final false
 bool ValidateBindTypes(System::Type concreteType, System::Type contractType) ;

/// @brief Method RegisterProvidersForAllContractsPerConcreteType addr 0x2d693cc size 0x59c virtual false final false
 void RegisterProvidersForAllContractsPerConcreteType(Zenject::DiContainer container, System::Collections::Generic::List_1<System::Type> concreteTypes, System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> providerFunc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ProviderBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProviderBindingFinalizer, "Zenject", "ProviderBindingFinalizer");
NEED_NO_BOX(Zenject::Zenject__ProviderBindingFinalizer____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ProviderBindingFinalizer____c, "Zenject", "ProviderBindingFinalizer/<>c");
