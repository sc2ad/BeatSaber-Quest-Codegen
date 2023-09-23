#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
template<typename TObj,typename TResult>
class GetterProvider_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TObj,::cordl_internals::il2cpp_reference_type TResult>
class GetterProvider_2<TObj,TResult>;
}
// Type: Zenject::GetterProvider`2
// Type: Zenject::GetterProvider`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObj,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11135))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11135), inst: 80 })
// CS Name: Zenject.GetterProvider`2
class CORDL_TYPE GetterProvider_2<TObj,TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GetterProvider_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetterProvider_2", modifiers: " const&", def_value: None }]
constexpr GetterProvider_2(GetterProvider_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetterProvider_2", modifiers: "&&", def_value: None }]
constexpr GetterProvider_2(GetterProvider_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetterProvider_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GetterProvider_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetterProvider_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetterProvider_2& operator=(GetterProvider_2&& o) noexcept = default;
  constexpr GetterProvider_2& operator=(GetterProvider_2 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__identifier() const;

 System::Func_2<TObj,TResult> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<TObj,TResult> value) ;

constexpr System::Func_2<TObj,TResult> __get__method() const;

 bool __declspec(property(get=__get__matchAll, put=__set__matchAll))  _matchAll;

constexpr void __set__matchAll(bool value) ;

constexpr bool __get__matchAll() const;

 Zenject::InjectSources __declspec(property(get=__get__sourceType, put=__set__sourceType))  _sourceType;

constexpr void __set__sourceType(Zenject::InjectSources value) ;

constexpr Zenject::InjectSources __get__sourceType() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "System::Func_2<TObj,TResult>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "sourceType", ty: "Zenject::InjectSources", modifiers: "", def_value: None }, CppParam { name: "matchAll", ty: "bool", modifiers: "", def_value: None }]
explicit GetterProvider_2(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TResult> method, Zenject::DiContainer container, Zenject::InjectSources sourceType, bool matchAll) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TResult> method, Zenject::DiContainer container, Zenject::InjectSources sourceType, bool matchAll) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetSubContext addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::InjectContext GetSubContext(Zenject::InjectContext parent) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::GetterProvider_2, "Zenject", "GetterProvider`2");
