#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
class Action;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class IProvider;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class GetFromGameObjectGetterComponentProvider;
}
// Type: Zenject::GetFromGameObjectGetterComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11130))
// CS Name: Zenject.GetFromGameObjectGetterComponentProvider
class CORDL_TYPE GetFromGameObjectGetterComponentProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GetFromGameObjectGetterComponentProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectGetterComponentProvider", modifiers: " const&", def_value: None }]
constexpr GetFromGameObjectGetterComponentProvider(GetFromGameObjectGetterComponentProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectGetterComponentProvider", modifiers: "&&", def_value: None }]
constexpr GetFromGameObjectGetterComponentProvider(GetFromGameObjectGetterComponentProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetFromGameObjectGetterComponentProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GetFromGameObjectGetterComponentProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetFromGameObjectGetterComponentProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetFromGameObjectGetterComponentProvider& operator=(GetFromGameObjectGetterComponentProvider&& o) noexcept = default;
  constexpr GetFromGameObjectGetterComponentProvider& operator=(GetFromGameObjectGetterComponentProvider const& o) noexcept = default;
                


// Fields

 System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> __declspec(property(get=__get__gameObjectGetter, put=__set__gameObjectGetter))  _gameObjectGetter;

constexpr void __set__gameObjectGetter(System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> value) ;

constexpr System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> __get__gameObjectGetter() const;

 System::Type __declspec(property(get=__get__componentType, put=__set__componentType))  _componentType;

constexpr void __set__componentType(System::Type value) ;

constexpr System::Type __get__componentType() const;

 bool __declspec(property(get=__get__matchSingle, put=__set__matchSingle))  _matchSingle;

constexpr void __set__matchSingle(bool value) ;

constexpr bool __get__matchSingle() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "gameObjectGetter", ty: "System::Func_2<Zenject::InjectContext,UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "matchSingle", ty: "bool", modifiers: "", def_value: None }]
explicit GetFromGameObjectGetterComponentProvider(System::Type componentType, System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> gameObjectGetter, bool matchSingle) ;

/// @brief Method .ctor addr 0x2d8d918 size 0x3c virtual false final false
 void _ctor(System::Type componentType, System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> gameObjectGetter, bool matchSingle) ;

/// @brief Method get_IsCached addr 0x2d8d954 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8d95c size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d8d964 size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8d96c size 0x234 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::GetFromGameObjectGetterComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GetFromGameObjectGetterComponentProvider, "Zenject", "GetFromGameObjectGetterComponentProvider");
