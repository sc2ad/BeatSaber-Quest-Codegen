#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
class InstantiateOnPrefabComponentProvider;
}
// Type: Zenject::InstantiateOnPrefabComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11132))
// CS Name: Zenject.InstantiateOnPrefabComponentProvider
class CORDL_TYPE InstantiateOnPrefabComponentProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IProvider
constexpr operator  ::Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InstantiateOnPrefabComponentProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantiateOnPrefabComponentProvider", modifiers: " const&", def_value: None }]
constexpr InstantiateOnPrefabComponentProvider(InstantiateOnPrefabComponentProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantiateOnPrefabComponentProvider", modifiers: "&&", def_value: None }]
constexpr InstantiateOnPrefabComponentProvider(InstantiateOnPrefabComponentProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstantiateOnPrefabComponentProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InstantiateOnPrefabComponentProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstantiateOnPrefabComponentProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstantiateOnPrefabComponentProvider& operator=(InstantiateOnPrefabComponentProvider&& o) noexcept = default;
  constexpr InstantiateOnPrefabComponentProvider& operator=(InstantiateOnPrefabComponentProvider const& o) noexcept = default;
                


// Fields

 ::Zenject::IPrefabInstantiator __declspec(property(get=__get__prefabInstantiator, put=__set__prefabInstantiator))  _prefabInstantiator;

constexpr void __set__prefabInstantiator(::Zenject::IPrefabInstantiator value) ;

constexpr ::Zenject::IPrefabInstantiator __get__prefabInstantiator() const;

 ::System::Type __declspec(property(get=__get__componentType, put=__set__componentType))  _componentType;

constexpr void __set__componentType(::System::Type value) ;

constexpr ::System::Type __get__componentType() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "componentType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "prefabInstantiator", ty: "::Zenject::IPrefabInstantiator", modifiers: "", def_value: None }]
explicit InstantiateOnPrefabComponentProvider(::System::Type componentType, ::Zenject::IPrefabInstantiator prefabInstantiator) ;

/// @brief Method .ctor addr 0x2d8def8 size 0x2c virtual false final false
 void _ctor(::System::Type componentType, ::Zenject::IPrefabInstantiator prefabInstantiator) ;

/// @brief Method get_IsCached addr 0x2d8df24 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8df2c size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d8df34 size 0x8 virtual true final true
 ::System::Type GetInstanceType(::Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8df3c size 0x16c virtual true final true
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::InstantiateOnPrefabComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstantiateOnPrefabComponentProvider, "Zenject", "InstantiateOnPrefabComponentProvider");
