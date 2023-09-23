#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class FactoryBindInfo;
}
// Type: Zenject::FactoryBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10890))
// CS Name: Zenject.FactoryBindInfo
class CORDL_TYPE FactoryBindInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FactoryBindInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: " const&", def_value: None }]
constexpr FactoryBindInfo(FactoryBindInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: "&&", def_value: None }]
constexpr FactoryBindInfo(FactoryBindInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryBindInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FactoryBindInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryBindInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryBindInfo& operator=(FactoryBindInfo&& o) noexcept = default;
  constexpr FactoryBindInfo& operator=(FactoryBindInfo const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__FactoryType_k__BackingField, put=__set__FactoryType_k__BackingField))  _FactoryType_k__BackingField;

constexpr void __set__FactoryType_k__BackingField(System::Type value) ;

constexpr System::Type __get__FactoryType_k__BackingField() const;

 System::Func_2<Zenject::DiContainer,Zenject::IProvider> __declspec(property(get=__get__ProviderFunc_k__BackingField, put=__set__ProviderFunc_k__BackingField))  _ProviderFunc_k__BackingField;

constexpr void __set__ProviderFunc_k__BackingField(System::Func_2<Zenject::DiContainer,Zenject::IProvider> value) ;

constexpr System::Func_2<Zenject::DiContainer,Zenject::IProvider> __get__ProviderFunc_k__BackingField() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get__Arguments_k__BackingField, put=__set__Arguments_k__BackingField))  _Arguments_k__BackingField;

constexpr void __set__Arguments_k__BackingField(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get__Arguments_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_FactoryType, put=set_FactoryType))  FactoryType;

 System::Func_2<Zenject::DiContainer,Zenject::IProvider> __declspec(property(get=get_ProviderFunc, put=set_ProviderFunc))  ProviderFunc;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=get_Arguments, put=set_Arguments))  Arguments;


// Methods

// Ctor Parameters [CppParam { name: "factoryType", ty: "System::Type", modifiers: "", def_value: None }]
explicit FactoryBindInfo(System::Type factoryType) ;

/// @brief Method .ctor addr 0x2d65bac size 0x90 virtual false final false
 void _ctor(System::Type factoryType) ;

/// @brief Method get_FactoryType addr 0x2d65c3c size 0x8 virtual false final false
 System::Type get_FactoryType() ;

/// @brief Method set_FactoryType addr 0x2d65c44 size 0x8 virtual false final false
 void set_FactoryType(System::Type value) ;

/// @brief Method get_ProviderFunc addr 0x2d65c4c size 0x8 virtual false final false
 System::Func_2<Zenject::DiContainer,Zenject::IProvider> get_ProviderFunc() ;

/// @brief Method set_ProviderFunc addr 0x2d65c54 size 0x8 virtual false final false
 void set_ProviderFunc(System::Func_2<Zenject::DiContainer,Zenject::IProvider> value) ;

/// @brief Method get_Arguments addr 0x2d65c5c size 0x8 virtual false final false
 System::Collections::Generic::List_1<Zenject::TypeValuePair> get_Arguments() ;

/// @brief Method set_Arguments addr 0x2d65c64 size 0x8 virtual false final false
 void set_Arguments(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::FactoryBindInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryBindInfo, "Zenject", "FactoryBindInfo");
