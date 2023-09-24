#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
class Object;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class PrefabInstantiatorCached;
}
// Type: Zenject::PrefabInstantiatorCached
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11172))
// CS Name: Zenject.PrefabInstantiatorCached
class CORDL_TYPE PrefabInstantiatorCached : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IPrefabInstantiator
constexpr operator  Zenject::IPrefabInstantiator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PrefabInstantiatorCached() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiatorCached", modifiers: " const&", def_value: None }]
constexpr PrefabInstantiatorCached(PrefabInstantiatorCached const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiatorCached", modifiers: "&&", def_value: None }]
constexpr PrefabInstantiatorCached(PrefabInstantiatorCached&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabInstantiatorCached(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrefabInstantiatorCached& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabInstantiatorCached& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabInstantiatorCached& operator=(PrefabInstantiatorCached&& o) noexcept = default;
  constexpr PrefabInstantiatorCached& operator=(PrefabInstantiatorCached const& o) noexcept = default;
                


// Fields

 Zenject::IPrefabInstantiator __declspec(property(get=__get__subInstantiator, put=__set__subInstantiator))  _subInstantiator;

constexpr void __set__subInstantiator(Zenject::IPrefabInstantiator value) ;

constexpr Zenject::IPrefabInstantiator __get__subInstantiator() const;

 UnityEngine::GameObject __declspec(property(get=__get__gameObject, put=__set__gameObject))  _gameObject;

constexpr void __set__gameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__gameObject() const;


// Properties

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=get_ExtraArguments))  ExtraArguments;

 System::Type __declspec(property(get=get_ArgumentTarget))  ArgumentTarget;

 Zenject::GameObjectCreationParameters __declspec(property(get=get_GameObjectCreationParameters))  GameObjectCreationParameters;


// Methods

static Zenject::PrefabInstantiatorCached New_ctor(Zenject::IPrefabInstantiator subInstantiator) ;

/// @brief Method .ctor addr 0x2d9028c size 0x28 virtual false final false
 void _ctor(Zenject::IPrefabInstantiator subInstantiator) ;

/// @brief Method get_ExtraArguments addr 0x2d902b4 size 0xa4 virtual true final true
 System::Collections::Generic::List_1<Zenject::TypeValuePair> get_ExtraArguments() ;

/// @brief Method get_ArgumentTarget addr 0x2d90358 size 0xa0 virtual true final true
 System::Type get_ArgumentTarget() ;

/// @brief Method get_GameObjectCreationParameters addr 0x2d903f8 size 0xa4 virtual true final true
 Zenject::GameObjectCreationParameters get_GameObjectCreationParameters() ;

/// @brief Method GetPrefab addr 0x2d9049c size 0xa4 virtual true final true
 UnityEngine::Object GetPrefab() ;

/// @brief Method Instantiate addr 0x2d90540 size 0x17c virtual true final true
 UnityEngine::GameObject Instantiate(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PrefabInstantiatorCached);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiatorCached, "Zenject", "PrefabInstantiatorCached");
