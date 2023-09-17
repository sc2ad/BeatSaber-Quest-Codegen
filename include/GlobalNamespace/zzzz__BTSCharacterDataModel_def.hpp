#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId;
}
// Type: ::PrefabWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3948))
// CS Name: BTSCharacterDataModel::PrefabWithId
class CORDL_TYPE ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BTSCharacterDataModel__PrefabWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterDataModel__PrefabWithId", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId(____GlobalNamespace__BTSCharacterDataModel__PrefabWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterDataModel__PrefabWithId", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId(____GlobalNamespace__BTSCharacterDataModel__PrefabWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId& operator=(____GlobalNamespace__BTSCharacterDataModel__PrefabWithId&& o) noexcept = default;
  constexpr ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId& operator=(____GlobalNamespace__BTSCharacterDataModel__PrefabWithId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(int32_t value) ;

constexpr int32_t __get__id() const;

 ::UnityEngine::AddressableAssets::AssetReference __declspec(property(get=__get__prefabAssetReference, put=__set__prefabAssetReference))  _prefabAssetReference;

constexpr void __set__prefabAssetReference(::UnityEngine::AddressableAssets::AssetReference value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReference __get__prefabAssetReference() const;


// Properties

 int32_t __declspec(property(get=get_id))  id;

 ::UnityEngine::AddressableAssets::AssetReference __declspec(property(get=get_prefabAssetReference))  prefabAssetReference;


// Methods

/// @brief Method get_id addr 0x20a7244 size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method get_prefabAssetReference addr 0x20a724c size 0x8 virtual false final false
 ::UnityEngine::AddressableAssets::AssetReference get_prefabAssetReference() ;

// Ctor Parameters []
explicit ____GlobalNamespace__BTSCharacterDataModel__PrefabWithId() ;

/// @brief Method .ctor addr 0x20a7254 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AnimationClipWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3949))
// CS Name: BTSCharacterDataModel::AnimationClipWithId
class CORDL_TYPE ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId(____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId(____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId& operator=(____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId&& o) noexcept = default;
  constexpr ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId& operator=(____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(int32_t value) ;

constexpr int32_t __get__id() const;

 ::UnityEngine::AddressableAssets::AssetReference __declspec(property(get=__get__animationClipAssetReference, put=__set__animationClipAssetReference))  _animationClipAssetReference;

constexpr void __set__animationClipAssetReference(::UnityEngine::AddressableAssets::AssetReference value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReference __get__animationClipAssetReference() const;


// Properties

 int32_t __declspec(property(get=get_id))  id;

 ::UnityEngine::AddressableAssets::AssetReference __declspec(property(get=get_animationClipAssetReference))  animationClipAssetReference;


// Methods

/// @brief Method get_id addr 0x20a725c size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method get_animationClipAssetReference addr 0x20a7264 size 0x8 virtual false final false
 ::UnityEngine::AddressableAssets::AssetReference get_animationClipAssetReference() ;

// Ctor Parameters []
explicit ____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId() ;

/// @brief Method .ctor addr 0x20a726c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BTSCharacterDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3950))
// CS Name: BTSCharacterDataModel
class CORDL_TYPE BTSCharacterDataModel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimationClipWithId = ::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId;

using PrefabWithId = ::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BTSCharacterDataModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel", modifiers: " const&", def_value: None }]
constexpr BTSCharacterDataModel(BTSCharacterDataModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel", modifiers: "&&", def_value: None }]
constexpr BTSCharacterDataModel(BTSCharacterDataModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacterDataModel(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSCharacterDataModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacterDataModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacterDataModel& operator=(BTSCharacterDataModel&& o) noexcept = default;
  constexpr BTSCharacterDataModel& operator=(BTSCharacterDataModel const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId> __declspec(property(get=__get__prefabsWithIds, put=__set__prefabsWithIds))  _prefabsWithIds;

constexpr void __set__prefabsWithIds(::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId> __get__prefabsWithIds() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId> __declspec(property(get=__get__animationClipsWithIds, put=__set__animationClipsWithIds))  _animationClipsWithIds;

constexpr void __set__animationClipsWithIds(::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId> __get__animationClipsWithIds() const;


// Properties

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId> __declspec(property(get=get_prefabsWithIds))  prefabsWithIds;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId> __declspec(property(get=get_animationClipsWithIds))  animationClipsWithIds;


// Methods

/// @brief Method get_prefabsWithIds addr 0x20a722c size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId> get_prefabsWithIds() ;

/// @brief Method get_animationClipsWithIds addr 0x20a7234 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId> get_animationClipsWithIds() ;

// Ctor Parameters []
explicit BTSCharacterDataModel() ;

/// @brief Method .ctor addr 0x20a723c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterDataModel, "", "BTSCharacterDataModel");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__AnimationClipWithId, "", "BTSCharacterDataModel/AnimationClipWithId");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId, "", "BTSCharacterDataModel/PrefabWithId");
