#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class TransientProvider;
}
namespace Zenject {
class ____Zenject__TransientProvider____c__DisplayClass11_0;
}
// Type: ::<>c__DisplayClass11_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11240))
// CS Name: Zenject.TransientProvider::<>c__DisplayClass11_0
class CORDL_TYPE ____Zenject__TransientProvider____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____Zenject__TransientProvider____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__TransientProvider____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__TransientProvider____c__DisplayClass11_0(____Zenject__TransientProvider____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__TransientProvider____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__TransientProvider____c__DisplayClass11_0(____Zenject__TransientProvider____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__TransientProvider____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__TransientProvider____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__TransientProvider____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__TransientProvider____c__DisplayClass11_0& operator=(____Zenject__TransientProvider____c__DisplayClass11_0&& o) noexcept = default;
  constexpr ____Zenject__TransientProvider____c__DisplayClass11_0& operator=(____Zenject__TransientProvider____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::TransientProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::TransientProvider value) ;

constexpr ::Zenject::TransientProvider __get___4__this() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_instance, put=__set_instance))  instance;

constexpr void __set_instance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_instance() const;

 ::System::Type __declspec(property(get=__get_instanceType, put=__set_instanceType))  instanceType;

constexpr void __set_instanceType(::System::Type value) ;

constexpr ::System::Type __get_instanceType() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get_extraArgs, put=__set_extraArgs))  extraArgs;

constexpr void __set_extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get_extraArgs() const;

 ::Zenject::InjectContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::Zenject::InjectContext value) ;

constexpr ::Zenject::InjectContext __get_context() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__TransientProvider____c__DisplayClass11_0() ;

/// @brief Method .ctor addr 0x2d94860 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__0 addr 0x2d94868 size 0xf4 virtual false final false
 void _GetAllInstancesWithInjectSplit_b__0() ;

/// @brief Method __zenCreate addr 0x2d9495c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d949b8 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::TransientProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11241))
// CS Name: Zenject.TransientProvider
class CORDL_TYPE TransientProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass11_0 = ::Zenject::____Zenject__TransientProvider____c__DisplayClass11_0;

/// @brief Convert operator to ::Zenject::IProvider
constexpr operator  ::Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TransientProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransientProvider", modifiers: " const&", def_value: None }]
constexpr TransientProvider(TransientProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransientProvider", modifiers: "&&", def_value: None }]
constexpr TransientProvider(TransientProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransientProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TransientProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransientProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransientProvider& operator=(TransientProvider&& o) noexcept = default;
  constexpr TransientProvider& operator=(TransientProvider const& o) noexcept = default;
                


// Fields

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Type __declspec(property(get=__get__concreteType, put=__set__concreteType))  _concreteType;

constexpr void __set__concreteType(::System::Type value) ;

constexpr ::System::Type __get__concreteType() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get__extraArguments, put=__set__extraArguments))  _extraArguments;

constexpr void __set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get__extraArguments() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__concreteIdentifier, put=__set__concreteIdentifier))  _concreteIdentifier;

constexpr void __set__concreteIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__concreteIdentifier() const;

 ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__instantiateCallback, put=__set__instantiateCallback))  _instantiateCallback;

constexpr void __set__instantiateCallback(::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __get__instantiateCallback() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "concreteType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "bindingContext", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "concreteIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit TransientProvider(::System::Type concreteType, ::Zenject::DiContainer container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::StringW bindingContext, ::bs_hook::Il2CppWrapperType concreteIdentifier, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d9437c size 0x1a4 virtual false final false
 void _ctor(::System::Type concreteType, ::Zenject::DiContainer container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::StringW bindingContext, ::bs_hook::Il2CppWrapperType concreteIdentifier, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_IsCached addr 0x2d94520 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d94528 size 0x5c virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d94584 size 0xb4 virtual true final true
 ::System::Type GetInstanceType(::Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d94648 size 0x218 virtual true final true
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method GetTypeToCreate addr 0x2d94638 size 0x10 virtual false final false
 ::System::Type GetTypeToCreate(::System::Type contractType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::TransientProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TransientProvider, "Zenject", "TransientProvider");
NEED_NO_BOX(::Zenject::____Zenject__TransientProvider____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__TransientProvider____c__DisplayClass11_0, "Zenject", "TransientProvider/<>c__DisplayClass11_0");
