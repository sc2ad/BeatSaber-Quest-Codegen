#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
struct InvalidBindResponses;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace Zenject {
class BindingCondition;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct ScopeTypes;
}
namespace Zenject {
struct ToChoices;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class BindInfo;
}
// Type: Zenject::BindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10888))
// CS Name: Zenject.BindInfo
class CORDL_TYPE BindInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BindInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindInfo", modifiers: " const&", def_value: None }]
constexpr BindInfo(BindInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindInfo", modifiers: "&&", def_value: None }]
constexpr BindInfo(BindInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BindInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindInfo& operator=(BindInfo&& o) noexcept = default;
  constexpr BindInfo& operator=(BindInfo const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_MarkAsCreationBinding, put=__set_MarkAsCreationBinding))  MarkAsCreationBinding;

constexpr void __set_MarkAsCreationBinding(bool value) ;

constexpr bool __get_MarkAsCreationBinding() const;

 bool __declspec(property(get=__get_MarkAsUniqueSingleton, put=__set_MarkAsUniqueSingleton))  MarkAsUniqueSingleton;

constexpr void __set_MarkAsUniqueSingleton(bool value) ;

constexpr bool __get_MarkAsUniqueSingleton() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_ConcreteIdentifier, put=__set_ConcreteIdentifier))  ConcreteIdentifier;

constexpr void __set_ConcreteIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_ConcreteIdentifier() const;

 bool __declspec(property(get=__get_SaveProvider, put=__set_SaveProvider))  SaveProvider;

constexpr void __set_SaveProvider(bool value) ;

constexpr bool __get_SaveProvider() const;

 bool __declspec(property(get=__get_OnlyBindIfNotBound, put=__set_OnlyBindIfNotBound))  OnlyBindIfNotBound;

constexpr void __set_OnlyBindIfNotBound(bool value) ;

constexpr bool __get_OnlyBindIfNotBound() const;

 bool __declspec(property(get=__get_RequireExplicitScope, put=__set_RequireExplicitScope))  RequireExplicitScope;

constexpr void __set_RequireExplicitScope(bool value) ;

constexpr bool __get_RequireExplicitScope() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Identifier, put=__set_Identifier))  Identifier;

constexpr void __set_Identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Identifier() const;

 System::Collections::Generic::List_1<System::Type> __declspec(property(get=__get_ContractTypes, put=__set_ContractTypes))  ContractTypes;

constexpr void __set_ContractTypes(System::Collections::Generic::List_1<System::Type> value) ;

constexpr System::Collections::Generic::List_1<System::Type> __get_ContractTypes() const;

 Zenject::BindingInheritanceMethods __declspec(property(get=__get_BindingInheritanceMethod, put=__set_BindingInheritanceMethod))  BindingInheritanceMethod;

constexpr void __set_BindingInheritanceMethod(Zenject::BindingInheritanceMethods value) ;

constexpr Zenject::BindingInheritanceMethods __get_BindingInheritanceMethod() const;

 Zenject::InvalidBindResponses __declspec(property(get=__get_InvalidBindResponse, put=__set_InvalidBindResponse))  InvalidBindResponse;

constexpr void __set_InvalidBindResponse(Zenject::InvalidBindResponses value) ;

constexpr Zenject::InvalidBindResponses __get_InvalidBindResponse() const;

 bool __declspec(property(get=__get_NonLazy, put=__set_NonLazy))  NonLazy;

constexpr void __set_NonLazy(bool value) ;

constexpr bool __get_NonLazy() const;

 Zenject::BindingCondition __declspec(property(get=__get_Condition, put=__set_Condition))  Condition;

constexpr void __set_Condition(Zenject::BindingCondition value) ;

constexpr Zenject::BindingCondition __get_Condition() const;

 Zenject::ToChoices __declspec(property(get=__get_ToChoice, put=__set_ToChoice))  ToChoice;

constexpr void __set_ToChoice(Zenject::ToChoices value) ;

constexpr Zenject::ToChoices __get_ToChoice() const;

 ::StringW __declspec(property(get=__get_ContextInfo, put=__set_ContextInfo))  ContextInfo;

constexpr void __set_ContextInfo(::StringW value) ;

constexpr ::StringW __get_ContextInfo() const;

 System::Collections::Generic::List_1<System::Type> __declspec(property(get=__get_ToTypes, put=__set_ToTypes))  ToTypes;

constexpr void __set_ToTypes(System::Collections::Generic::List_1<System::Type> value) ;

constexpr System::Collections::Generic::List_1<System::Type> __get_ToTypes() const;

 Zenject::ScopeTypes __declspec(property(get=__get_Scope, put=__set_Scope))  Scope;

constexpr void __set_Scope(Zenject::ScopeTypes value) ;

constexpr Zenject::ScopeTypes __get_Scope() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_Arguments, put=__set_Arguments))  Arguments;

constexpr void __set_Arguments(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_Arguments() const;

 System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_InstantiatedCallback, put=__set_InstantiatedCallback))  InstantiatedCallback;

constexpr void __set_InstantiatedCallback(System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __get_InstantiatedCallback() const;


// Methods

static Zenject::BindInfo New_ctor() ;

/// @brief Method .ctor addr 0x2d65480 size 0xec virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0x2d65668 size 0x58 virtual true final true
 void Dispose() ;

/// @brief Method SetContextInfo addr 0x2d656c0 size 0x8 virtual false final false
 void SetContextInfo(::StringW contextInfo) ;

/// @brief Method Reset addr 0x2d6556c size 0xfc virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::BindInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindInfo, "Zenject", "BindInfo");
