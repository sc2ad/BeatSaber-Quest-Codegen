#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Action;
}
namespace Zenject {
class Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstanceProvider;
}
namespace Zenject {
class Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0;
}
// Type: ::<>c__DisplayClass13_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11179))
// CS Name: Zenject.ScriptableObjectInstanceProvider::<>c__DisplayClass13_0
class CORDL_TYPE Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0(Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0(Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0& operator=(Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0&& o) noexcept = default;
  constexpr Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0& operator=(Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get_buffer() const;

 Zenject::ScriptableObjectInstanceProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::ScriptableObjectInstanceProvider value) ;

constexpr Zenject::ScriptableObjectInstanceProvider __get___4__this() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_args() const;

 Zenject::InjectContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get_context() const;


// Methods

static Zenject::Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d90fc4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__0 addr 0x2d90fcc size 0x190 virtual false final false
 void _GetAllInstancesWithInjectSplit_b__0() ;

/// @brief Method __zenCreate addr 0x2d9115c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d911b8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ScriptableObjectInstanceProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11180))
// CS Name: Zenject.ScriptableObjectInstanceProvider
class CORDL_TYPE ScriptableObjectInstanceProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass13_0 = Zenject::Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0;

/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ScriptableObjectInstanceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstanceProvider", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectInstanceProvider(ScriptableObjectInstanceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstanceProvider", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectInstanceProvider(ScriptableObjectInstanceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectInstanceProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptableObjectInstanceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectInstanceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectInstanceProvider& operator=(ScriptableObjectInstanceProvider&& o) noexcept = default;
  constexpr ScriptableObjectInstanceProvider& operator=(ScriptableObjectInstanceProvider const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Type __declspec(property(get=__get__resourceType, put=__set__resourceType))  _resourceType;

constexpr void __set__resourceType(System::Type value) ;

constexpr System::Type __get__resourceType() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get__extraArguments, put=__set__extraArguments))  _extraArguments;

constexpr void __set__extraArguments(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get__extraArguments() const;

 bool __declspec(property(get=__get__createNew, put=__set__createNew))  _createNew;

constexpr void __set__createNew(bool value) ;

constexpr bool __get__createNew() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__concreteIdentifier, put=__set__concreteIdentifier))  _concreteIdentifier;

constexpr void __set__concreteIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__concreteIdentifier() const;

 System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__instantiateCallback, put=__set__instantiateCallback))  _instantiateCallback;

constexpr void __set__instantiateCallback(System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __get__instantiateCallback() const;

 UnityEngine::Object __declspec(property(get=__get__resource, put=__set__resource))  _resource;

constexpr void __set__resource(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get__resource() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::ScriptableObjectInstanceProvider New_ctor(UnityEngine::Object resource, System::Type resourceType, Zenject::DiContainer container, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, bool createNew, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d90d34 size 0xc8 virtual false final false
 void _ctor(UnityEngine::Object resource, System::Type resourceType, Zenject::DiContainer container, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, bool createNew, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_IsCached addr 0x2d90dfc size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d90e04 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d90e0c size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d90e14 size 0x1b0 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ScriptableObjectInstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstanceProvider, "Zenject", "ScriptableObjectInstanceProvider");
NEED_NO_BOX(Zenject::Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ScriptableObjectInstanceProvider____c__DisplayClass13_0, "Zenject", "ScriptableObjectInstanceProvider/<>c__DisplayClass13_0");
