#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class InstanceProvider;
}
// Type: Zenject::InstanceProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11145))
// CS Name: Zenject.InstanceProvider
class CORDL_TYPE InstanceProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IProvider
constexpr operator  ::Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InstanceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: " const&", def_value: None }]
constexpr InstanceProvider(InstanceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "&&", def_value: None }]
constexpr InstanceProvider(InstanceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstanceProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InstanceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstanceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstanceProvider& operator=(InstanceProvider&& o) noexcept = default;
  constexpr InstanceProvider& operator=(InstanceProvider const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__instance, put=__set__instance))  _instance;

constexpr void __set__instance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__instance() const;

 ::System::Type __declspec(property(get=__get__instanceType, put=__set__instanceType))  _instanceType;

constexpr void __set__instanceType(::System::Type value) ;

constexpr ::System::Type __get__instanceType() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "instanceType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "instance", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }]
explicit InstanceProvider(::System::Type instanceType, ::bs_hook::Il2CppWrapperType instance, ::Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x2d8e44c size 0x3c virtual false final false
 void _ctor(::System::Type instanceType, ::bs_hook::Il2CppWrapperType instance, ::Zenject::DiContainer container) ;

/// @brief Method get_IsCached addr 0x2d8e488 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8e490 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d8e498 size 0x8 virtual true final true
 ::System::Type GetInstanceType(::Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8e4a0 size 0x1a4 virtual true final true
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__9_0 addr 0x2d8e644 size 0x54 virtual false final false
 void _GetAllInstancesWithInjectSplit_b__9_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::InstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstanceProvider, "Zenject", "InstanceProvider");
