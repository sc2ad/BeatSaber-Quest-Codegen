#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class ResolveProvider;
}
// Type: Zenject::ResolveProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11177))
// CS Name: Zenject.ResolveProvider
class CORDL_TYPE ResolveProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IProvider
constexpr operator  ::Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ResolveProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolveProvider", modifiers: " const&", def_value: None }]
constexpr ResolveProvider(ResolveProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolveProvider", modifiers: "&&", def_value: None }]
constexpr ResolveProvider(ResolveProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResolveProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResolveProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResolveProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResolveProvider& operator=(ResolveProvider&& o) noexcept = default;
  constexpr ResolveProvider& operator=(ResolveProvider const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__identifier() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Type __declspec(property(get=__get__contractType, put=__set__contractType))  _contractType;

constexpr void __set__contractType(::System::Type value) ;

constexpr ::System::Type __get__contractType() const;

 bool __declspec(property(get=__get__isOptional, put=__set__isOptional))  _isOptional;

constexpr void __set__isOptional(bool value) ;

constexpr bool __get__isOptional() const;

 ::Zenject::InjectSources __declspec(property(get=__get__source, put=__set__source))  _source;

constexpr void __set__source(::Zenject::InjectSources value) ;

constexpr ::Zenject::InjectSources __get__source() const;

 bool __declspec(property(get=__get__matchAll, put=__set__matchAll))  _matchAll;

constexpr void __set__matchAll(bool value) ;

constexpr bool __get__matchAll() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "contractType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Zenject::InjectSources", modifiers: "", def_value: None }, CppParam { name: "matchAll", ty: "bool", modifiers: "", def_value: None }]
explicit ResolveProvider(::System::Type contractType, ::Zenject::DiContainer container, ::bs_hook::Il2CppWrapperType identifier, bool isOptional, ::Zenject::InjectSources source, bool matchAll) ;

/// @brief Method .ctor addr 0x2d908b0 size 0x5c virtual false final false
 void _ctor(::System::Type contractType, ::Zenject::DiContainer container, ::bs_hook::Il2CppWrapperType identifier, bool isOptional, ::Zenject::InjectSources source, bool matchAll) ;

/// @brief Method get_IsCached addr 0x2d9090c size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d90914 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d9091c size 0x8 virtual true final true
 ::System::Type GetInstanceType(::Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d90924 size 0x1a0 virtual true final true
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method GetSubContext addr 0x2d90ac4 size 0x44 virtual false final false
 ::Zenject::InjectContext GetSubContext(::Zenject::InjectContext parent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ResolveProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ResolveProvider, "Zenject", "ResolveProvider");
