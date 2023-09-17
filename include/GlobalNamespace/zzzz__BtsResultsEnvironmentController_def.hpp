#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseResultsEnvironmentController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BTSCharacterResultAnimationController;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class BtsResultsEnvironmentController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11;
}
// Type: ::BTSResultCharacterPlaceWithAnimation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3960))
// CS Name: BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation
class CORDL_TYPE ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation(____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation(____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation& operator=(____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation&& o) noexcept = default;
  constexpr ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation& operator=(____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::UnityEngine::Transform __declspec(property(get=__get__placeTransform, put=__set__placeTransform))  _placeTransform;

constexpr void __set__placeTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__placeTransform() const;

 ::GlobalNamespace::BTSCharacterResultAnimationController __declspec(property(get=__get__animationController, put=__set__animationController))  _animationController;

constexpr void __set__animationController(::GlobalNamespace::BTSCharacterResultAnimationController value) ;

constexpr ::GlobalNamespace::BTSCharacterResultAnimationController __get__animationController() const;

 ::UnityEngine::AnimationClip __declspec(property(get=__get__animationClip, put=__set__animationClip))  _animationClip;

constexpr void __set__animationClip(::UnityEngine::AnimationClip value) ;

constexpr ::UnityEngine::AnimationClip __get__animationClip() const;

 ::GlobalNamespace::BTSCharacter __declspec(property(get=__get__btsCharacter, put=__set__btsCharacter))  _btsCharacter;

constexpr void __set__btsCharacter(::GlobalNamespace::BTSCharacter value) ;

constexpr ::GlobalNamespace::BTSCharacter __get__btsCharacter() const;

 ::UnityEngine::AddressableAssets::AssetReference __declspec(property(get=__get__btsCharacterAssetReference, put=__set__btsCharacterAssetReference))  _btsCharacterAssetReference;

constexpr void __set__btsCharacterAssetReference(::UnityEngine::AddressableAssets::AssetReference value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReference __get__btsCharacterAssetReference() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;


// Methods

/// @brief Method get_name addr 0x20aa7c0 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method Clean addr 0x20aa658 size 0xec virtual false final false
 void Clean() ;

/// @brief Method SetCharacter addr 0x20aa200 size 0xcc virtual false final false
 void SetCharacter(::UnityEngine::AddressableAssets::AssetReference assetReference, ::GlobalNamespace::BTSCharacter btsCharacter, bool alternativeMaterial) ;

// Ctor Parameters []
explicit ____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation() ;

/// @brief Method .ctor addr 0x20aa7c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DestroyCharactersDelayed>d__11
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3961))
// CS Name: BtsResultsEnvironmentController::<DestroyCharactersDelayed>d__11
class CORDL_TYPE ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11(____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11(____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11& operator=(____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11&& o) noexcept = default;
  constexpr ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11& operator=(____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::BtsResultsEnvironmentController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::BtsResultsEnvironmentController value) ;

constexpr ::GlobalNamespace::BtsResultsEnvironmentController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20aa630 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20aa7d0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20aa7d4 size 0xc0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20aa894 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20aa89c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20aa8dc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BtsResultsEnvironmentController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4803))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3962))
// CS Name: BtsResultsEnvironmentController
class CORDL_TYPE BtsResultsEnvironmentController : public ::GlobalNamespace::BaseResultsEnvironmentController {
public:
// Declarations
using _DestroyCharactersDelayed_d__11 = ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11;

using BTSResultCharacterPlaceWithAnimation = ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BtsResultsEnvironmentController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BtsResultsEnvironmentController", modifiers: " const&", def_value: None }]
constexpr BtsResultsEnvironmentController(BtsResultsEnvironmentController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BtsResultsEnvironmentController", modifiers: "&&", def_value: None }]
constexpr BtsResultsEnvironmentController(BtsResultsEnvironmentController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BtsResultsEnvironmentController(void* ptr) noexcept : ::GlobalNamespace::BaseResultsEnvironmentController(ptr) {
}


  constexpr BtsResultsEnvironmentController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BtsResultsEnvironmentController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BtsResultsEnvironmentController& operator=(BtsResultsEnvironmentController&& o) noexcept = default;
  constexpr BtsResultsEnvironmentController& operator=(BtsResultsEnvironmentController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__btsCharacterAnimationWrapper, put=__set__btsCharacterAnimationWrapper))  _btsCharacterAnimationWrapper;

constexpr void __set__btsCharacterAnimationWrapper(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__btsCharacterAnimationWrapper() const;

 ::GlobalNamespace::BTSCharacterDataModel __declspec(property(get=__get__btsCharacterDataModel, put=__set__btsCharacterDataModel))  _btsCharacterDataModel;

constexpr void __set__btsCharacterDataModel(::GlobalNamespace::BTSCharacterDataModel value) ;

constexpr ::GlobalNamespace::BTSCharacterDataModel __get__btsCharacterDataModel() const;

 ::UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__btsCharactersResultsAppearPlayableDirector, put=__set__btsCharactersResultsAppearPlayableDirector))  _btsCharactersResultsAppearPlayableDirector;

constexpr void __set__btsCharactersResultsAppearPlayableDirector(::UnityEngine::Playables::PlayableDirector value) ;

constexpr ::UnityEngine::Playables::PlayableDirector __get__btsCharactersResultsAppearPlayableDirector() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation> __declspec(property(get=__get__resultPlacesWithAnimations, put=__set__resultPlacesWithAnimations))  _resultPlacesWithAnimations;

constexpr void __set__resultPlacesWithAnimations(::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation> __get__resultPlacesWithAnimations() const;

/// @brief Field kCharacterDisplayEventType offset 0
static ::GlobalNamespace::BasicBeatmapEventType const kCharacterDisplayEventType;

 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __declspec(property(get=__get__handles, put=__set__handles))  _handles;

constexpr void __set__handles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __get__handles() const;


// Methods

/// @brief Method Setup addr 0x20a9acc size 0x4e4 virtual true final false
 void Setup(::GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

/// @brief Method SpawnBtsCharacters addr 0x20a9fb0 size 0x250 virtual false final false
 void SpawnBtsCharacters(::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId btsCharacterPrefabToSpawn, bool useAlternativeMaterial) ;

/// @brief Method Activate addr 0x20aa2cc size 0xa8 virtual true final false
 void Activate(bool immediately) ;

/// @brief Method Deactivate addr 0x20aa374 size 0x1d0 virtual true final false
 void Deactivate(bool immediately) ;

/// @brief Method DestroyCharactersDelayed addr 0x20aa5c8 size 0x68 virtual false final false
 ::System::Collections::IEnumerator DestroyCharactersDelayed() ;

/// @brief Method DestroyCharactersAndStopAnimations addr 0x20aa544 size 0x84 virtual false final false
 void DestroyCharactersAndStopAnimations() ;

// Ctor Parameters []
explicit BtsResultsEnvironmentController() ;

/// @brief Method .ctor addr 0x20aa744 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BtsResultsEnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BtsResultsEnvironmentController, "", "BtsResultsEnvironmentController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, "", "BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11, "", "BtsResultsEnvironmentController/<DestroyCharactersDelayed>d__11");
