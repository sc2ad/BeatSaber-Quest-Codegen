#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0;
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
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectResourceProvider;
}
namespace Zenject {
class Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0;
}
// Type: ::<>c__DisplayClass13_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11181))
// CS Name: Zenject.ScriptableObjectResourceProvider::<>c__DisplayClass13_0
class CORDL_TYPE Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0(Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0(Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0& operator=(Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0&& o) noexcept = default;
  constexpr Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0& operator=(Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get_buffer() const;

 Zenject::ScriptableObjectResourceProvider __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::ScriptableObjectResourceProvider value) ;

constexpr Zenject::ScriptableObjectResourceProvider __get___4__this() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_args() const;

 Zenject::InjectContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get_context() const;


// Methods

static Zenject::Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d916b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__0 addr 0x2d916c0 size 0x190 virtual false final false
 void _GetAllInstancesWithInjectSplit_b__0() ;

/// @brief Method __zenCreate addr 0x2d91850 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d918ac size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ScriptableObjectResourceProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11182))
// CS Name: Zenject.ScriptableObjectResourceProvider
class CORDL_TYPE ScriptableObjectResourceProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass13_0 = Zenject::Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0;

/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ScriptableObjectResourceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectResourceProvider", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectResourceProvider(ScriptableObjectResourceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectResourceProvider", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectResourceProvider(ScriptableObjectResourceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectResourceProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptableObjectResourceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectResourceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectResourceProvider& operator=(ScriptableObjectResourceProvider&& o) noexcept = default;
  constexpr ScriptableObjectResourceProvider& operator=(ScriptableObjectResourceProvider const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Type __declspec(property(get=__get__resourceType, put=__set__resourceType))  _resourceType;

constexpr void __set__resourceType(System::Type value) ;

constexpr System::Type __get__resourceType() const;

 ::StringW __declspec(property(get=__get__resourcePath, put=__set__resourcePath))  _resourcePath;

constexpr void __set__resourcePath(::StringW value) ;

constexpr ::StringW __get__resourcePath() const;

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


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::ScriptableObjectResourceProvider New_ctor(::StringW resourcePath, System::Type resourceType, Zenject::DiContainer container, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, bool createNew, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d91378 size 0xc8 virtual false final false
 void _ctor(::StringW resourcePath, System::Type resourceType, Zenject::DiContainer container, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, bool createNew, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_IsCached addr 0x2d91440 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d91448 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d91450 size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d91458 size 0x260 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ScriptableObjectResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectResourceProvider, "Zenject", "ScriptableObjectResourceProvider");
NEED_NO_BOX(Zenject::Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ScriptableObjectResourceProvider____c__DisplayClass13_0, "Zenject", "ScriptableObjectResourceProvider/<>c__DisplayClass13_0");
