#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId;
}
namespace GlobalNamespace {
class VideoProjectionDataModelSO;
}
// Type: ::VideoClipWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5072))
// CS Name: VideoProjectionDataModelSO::VideoClipWithId
class CORDL_TYPE GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId(GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId(GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId& operator=(GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId&& o) noexcept = default;
  constexpr GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId& operator=(GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(int32_t value) ;

constexpr int32_t __get__id() const;

 UnityEngine::AddressableAssets::AssetReference __declspec(property(get=__get__videoAssetReference, put=__set__videoAssetReference))  _videoAssetReference;

constexpr void __set__videoAssetReference(UnityEngine::AddressableAssets::AssetReference value) ;

constexpr UnityEngine::AddressableAssets::AssetReference __get__videoAssetReference() const;


// Properties

 int32_t __declspec(property(get=get_id))  id;

 UnityEngine::AddressableAssets::AssetReference __declspec(property(get=get_videoAssetReference))  videoAssetReference;


// Methods

/// @brief Method get_id addr 0x2267e70 size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method get_videoAssetReference addr 0x2267e78 size 0x8 virtual false final false
 UnityEngine::AddressableAssets::AssetReference get_videoAssetReference() ;

// Ctor Parameters []
explicit GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId() ;

/// @brief Method .ctor addr 0x2267e80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VideoProjectionDataModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5073))
// CS Name: VideoProjectionDataModelSO
class CORDL_TYPE VideoProjectionDataModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using VideoClipWithId = GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~VideoProjectionDataModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO", modifiers: " const&", def_value: None }]
constexpr VideoProjectionDataModelSO(VideoProjectionDataModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO", modifiers: "&&", def_value: None }]
constexpr VideoProjectionDataModelSO(VideoProjectionDataModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VideoProjectionDataModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr VideoProjectionDataModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VideoProjectionDataModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VideoProjectionDataModelSO& operator=(VideoProjectionDataModelSO&& o) noexcept = default;
  constexpr VideoProjectionDataModelSO& operator=(VideoProjectionDataModelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId> __declspec(property(get=__get__videoClipsWithId, put=__set__videoClipsWithId))  _videoClipsWithId;

constexpr void __set__videoClipsWithId(::ArrayW<GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId> __get__videoClipsWithId() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId> __declspec(property(get=get_videoClipWithIds))  videoClipWithIds;


// Methods

/// @brief Method get_videoClipWithIds addr 0x2267e60 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId> get_videoClipWithIds() ;

// Ctor Parameters []
explicit VideoProjectionDataModelSO() ;

/// @brief Method .ctor addr 0x2267e68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId, "", "VideoProjectionDataModelSO/VideoClipWithId");
NEED_NO_BOX(GlobalNamespace::VideoProjectionDataModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VideoProjectionDataModelSO, "", "VideoProjectionDataModelSO");
