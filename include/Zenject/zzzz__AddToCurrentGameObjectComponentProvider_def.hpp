#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AddToCurrentGameObjectComponentProvider;
}
namespace Zenject {
class Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0;
}
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11122))
// CS Name: Zenject.AddToCurrentGameObjectComponentProvider::<>c__DisplayClass15_0
class CORDL_TYPE Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0", modifiers: " const&", def_value: None }]
constexpr Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0(Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
constexpr Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0(Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0& operator=(Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0&& o) noexcept = default;
  constexpr Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0& operator=(Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0 const& o) noexcept = default;
                


// Fields

 Zenject::AddToCurrentGameObjectComponentProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::AddToCurrentGameObjectComponentProvider value) ;

constexpr Zenject::AddToCurrentGameObjectComponentProvider __get___4__this() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_args() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_instance, put=__set_instance))  instance;

constexpr void __set_instance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_instance() const;

 Zenject::InjectContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get_context() const;


// Methods

// Ctor Parameters []
explicit Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0() ;

/// @brief Method .ctor addr 0x2d8c8b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__0 addr 0x2d8c9d0 size 0x158 virtual false final false
 void _GetAllInstancesWithInjectSplit_b__0() ;

/// @brief Method __zenCreate addr 0x2d8cb28 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d8cb84 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::AddToCurrentGameObjectComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11123))
// CS Name: Zenject.AddToCurrentGameObjectComponentProvider
class CORDL_TYPE AddToCurrentGameObjectComponentProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass15_0 = Zenject::Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0;

/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AddToCurrentGameObjectComponentProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToCurrentGameObjectComponentProvider", modifiers: " const&", def_value: None }]
constexpr AddToCurrentGameObjectComponentProvider(AddToCurrentGameObjectComponentProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToCurrentGameObjectComponentProvider", modifiers: "&&", def_value: None }]
constexpr AddToCurrentGameObjectComponentProvider(AddToCurrentGameObjectComponentProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddToCurrentGameObjectComponentProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AddToCurrentGameObjectComponentProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddToCurrentGameObjectComponentProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddToCurrentGameObjectComponentProvider& operator=(AddToCurrentGameObjectComponentProvider&& o) noexcept = default;
  constexpr AddToCurrentGameObjectComponentProvider& operator=(AddToCurrentGameObjectComponentProvider const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__componentType, put=__set__componentType))  _componentType;

constexpr void __set__componentType(System::Type value) ;

constexpr System::Type __get__componentType() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get__extraArguments, put=__set__extraArguments))  _extraArguments;

constexpr void __set__extraArguments(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get__extraArguments() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__concreteIdentifier, put=__set__concreteIdentifier))  _concreteIdentifier;

constexpr void __set__concreteIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__concreteIdentifier() const;

 System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__instantiateCallback, put=__set__instantiateCallback))  _instantiateCallback;

constexpr void __set__instantiateCallback(System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __get__instantiateCallback() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;

 System::Type __declspec(property(get=get_ComponentType))  ComponentType;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "concreteIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit AddToCurrentGameObjectComponentProvider(Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d8c454 size 0xe0 virtual false final false
 void _ctor(Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_IsCached addr 0x2d8c534 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8c53c size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method get_Container addr 0x2d8c544 size 0x8 virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method get_ComponentType addr 0x2d8c54c size 0x8 virtual false final false
 System::Type get_ComponentType() ;

/// @brief Method GetInstanceType addr 0x2d8c554 size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8c55c size 0x354 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::AddToCurrentGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToCurrentGameObjectComponentProvider, "Zenject", "AddToCurrentGameObjectComponentProvider");
NEED_NO_BOX(Zenject::Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__AddToCurrentGameObjectComponentProvider____c__DisplayClass15_0, "Zenject", "AddToCurrentGameObjectComponentProvider/<>c__DisplayClass15_0");
