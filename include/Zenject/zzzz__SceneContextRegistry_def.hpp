#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class SceneContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SceneContextRegistry;
}
// Type: Zenject::SceneContextRegistry
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11274))
// CS Name: Zenject.SceneContextRegistry
class CORDL_TYPE SceneContextRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SceneContextRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistry", modifiers: " const&", def_value: None }]
constexpr SceneContextRegistry(SceneContextRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistry", modifiers: "&&", def_value: None }]
constexpr SceneContextRegistry(SceneContextRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneContextRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneContextRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneContextRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneContextRegistry& operator=(SceneContextRegistry&& o) noexcept = default;
  constexpr SceneContextRegistry& operator=(SceneContextRegistry const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene,Zenject::SceneContext> __declspec(property(get=__get__map, put=__set__map))  _map;

constexpr void __set__map(System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene,Zenject::SceneContext> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene,Zenject::SceneContext> __get__map() const;


// Properties

 System::Collections::Generic::IEnumerable_1<Zenject::SceneContext> __declspec(property(get=get_SceneContexts))  SceneContexts;


// Methods

/// @brief Method get_SceneContexts addr 0x2d9ced8 size 0x50 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::SceneContext> get_SceneContexts() ;

/// @brief Method Add addr 0x2d9ec34 size 0xd0 virtual false final false
 void Add(Zenject::SceneContext context) ;

/// @brief Method GetSceneContextForScene addr 0x2d9ed04 size 0xb0 virtual false final false
 Zenject::SceneContext GetSceneContextForScene(::StringW name) ;

/// @brief Method GetSceneContextForScene addr 0x2d9edb4 size 0x58 virtual false final false
 Zenject::SceneContext GetSceneContextForScene(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method TryGetSceneContextForScene addr 0x2d9ee0c size 0xb0 virtual false final false
 Zenject::SceneContext TryGetSceneContextForScene(::StringW name) ;

/// @brief Method TryGetSceneContextForScene addr 0x2d9eebc size 0x78 virtual false final false
 Zenject::SceneContext TryGetSceneContextForScene(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method GetContainerForScene addr 0x2d9ef34 size 0xa4 virtual false final false
 Zenject::DiContainer GetContainerForScene(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method TryGetContainerForScene addr 0x2d9efd8 size 0xec virtual false final false
 Zenject::DiContainer TryGetContainerForScene(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method Remove addr 0x2d9f0c4 size 0xfc virtual false final false
 void Remove(Zenject::SceneContext context) ;

static Zenject::SceneContextRegistry New_ctor() ;

/// @brief Method .ctor addr 0x2d9f1c0 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d9f23c size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9f294 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SceneContextRegistry);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContextRegistry, "Zenject", "SceneContextRegistry");
