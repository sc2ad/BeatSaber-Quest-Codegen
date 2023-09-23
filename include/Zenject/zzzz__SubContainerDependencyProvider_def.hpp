#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Type;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
class SubContainerDependencyProvider;
}
// Type: Zenject::SubContainerDependencyProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11239))
// CS Name: Zenject.SubContainerDependencyProvider
class CORDL_TYPE SubContainerDependencyProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerDependencyProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerDependencyProvider", modifiers: " const&", def_value: None }]
constexpr SubContainerDependencyProvider(SubContainerDependencyProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerDependencyProvider", modifiers: "&&", def_value: None }]
constexpr SubContainerDependencyProvider(SubContainerDependencyProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerDependencyProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerDependencyProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerDependencyProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerDependencyProvider& operator=(SubContainerDependencyProvider&& o) noexcept = default;
  constexpr SubContainerDependencyProvider& operator=(SubContainerDependencyProvider const& o) noexcept = default;
                


// Fields

 Zenject::ISubContainerCreator __declspec(property(get=__get__subContainerCreator, put=__set__subContainerCreator))  _subContainerCreator;

constexpr void __set__subContainerCreator(Zenject::ISubContainerCreator value) ;

constexpr Zenject::ISubContainerCreator __get__subContainerCreator() const;

 System::Type __declspec(property(get=__get__dependencyType, put=__set__dependencyType))  _dependencyType;

constexpr void __set__dependencyType(System::Type value) ;

constexpr System::Type __get__dependencyType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__identifier() const;

 bool __declspec(property(get=__get__resolveAll, put=__set__resolveAll))  _resolveAll;

constexpr void __set__resolveAll(bool value) ;

constexpr bool __get__resolveAll() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "dependencyType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "subContainerCreator", ty: "Zenject::ISubContainerCreator", modifiers: "", def_value: None }, CppParam { name: "resolveAll", ty: "bool", modifiers: "", def_value: None }]
explicit SubContainerDependencyProvider(System::Type dependencyType, ::bs_hook::Il2CppWrapperType identifier, Zenject::ISubContainerCreator subContainerCreator, bool resolveAll) ;

/// @brief Method .ctor addr 0x2d9413c size 0x44 virtual false final false
 void _ctor(System::Type dependencyType, ::bs_hook::Il2CppWrapperType identifier, Zenject::ISubContainerCreator subContainerCreator, bool resolveAll) ;

/// @brief Method get_IsCached addr 0x2d94180 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d94188 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d94190 size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method CreateSubContext addr 0x2d94198 size 0x3c virtual false final false
 Zenject::InjectContext CreateSubContext(Zenject::InjectContext parent, Zenject::DiContainer subContainer) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d941d4 size 0x1a8 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerDependencyProvider, "Zenject", "SubContainerDependencyProvider");
