#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneAnchor;
}
// Type: ::OVRSceneAnchor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8813))
// CS Name: OVRSceneAnchor
class CORDL_TYPE OVRSceneAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~OVRSceneAnchor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: " const&", def_value: None }]
constexpr OVRSceneAnchor(OVRSceneAnchor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: "&&", def_value: None }]
constexpr OVRSceneAnchor(OVRSceneAnchor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSceneAnchor(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSceneAnchor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSceneAnchor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSceneAnchor& operator=(OVRSceneAnchor&& o) noexcept = default;
  constexpr OVRSceneAnchor& operator=(OVRSceneAnchor const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OVRSpace __declspec(property(get=__get__Space_k__BackingField, put=__set__Space_k__BackingField))  _Space_k__BackingField;

constexpr void __set__Space_k__BackingField(::GlobalNamespace::OVRSpace value) ;

constexpr ::GlobalNamespace::OVRSpace __get__Space_k__BackingField() const;

 ::System::Guid __declspec(property(get=__get__Uuid_k__BackingField, put=__set__Uuid_k__BackingField))  _Uuid_k__BackingField;

constexpr void __set__Uuid_k__BackingField(::System::Guid value) ;

constexpr ::System::Guid __get__Uuid_k__BackingField() const;

 bool __declspec(property(get=__get__IsTracked_k__BackingField, put=__set__IsTracked_k__BackingField))  _IsTracked_k__BackingField;

constexpr void __set__IsTracked_k__BackingField(bool value) ;

constexpr bool __get__IsTracked_k__BackingField() const;

static ::UnityEngine::Quaternion __declspec(property(get=__get_RotateY180, put=__set_RotateY180))  RotateY180;

static void __set_RotateY180(::UnityEngine::Quaternion value) ;

static ::UnityEngine::Quaternion __get_RotateY180() ;

 ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef> __declspec(property(get=__get__pose, put=__set__pose))  _pose;

constexpr void __set__pose(::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef> value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef> __get__pose() const;

static ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace,int32_t> __declspec(property(get=__get_AnchorReferenceCountDictionary, put=__set_AnchorReferenceCountDictionary))  AnchorReferenceCountDictionary;

static void __set_AnchorReferenceCountDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace,int32_t> value) ;

static ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace,int32_t> __get_AnchorReferenceCountDictionary() ;

static ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRSceneAnchor> __declspec(property(get=__get_SceneAnchors, put=__set_SceneAnchors))  SceneAnchors;

static void __set_SceneAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRSceneAnchor> value) ;

static ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRSceneAnchor> __get_SceneAnchors() ;

static ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor> __declspec(property(get=__get_SceneAnchorsList, put=__set_SceneAnchorsList))  SceneAnchorsList;

static void __set_SceneAnchorsList(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor> value) ;

static ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor> __get_SceneAnchorsList() ;


// Properties

 ::GlobalNamespace::OVRSpace __declspec(property(get=get_Space, put=set_Space))  Space;

 ::System::Guid __declspec(property(get=get_Uuid, put=set_Uuid))  Uuid;

 bool __declspec(property(get=get_IsTracked, put=set_IsTracked))  IsTracked;


// Methods

/// @brief Method get_Space addr 0x26028e8 size 0x8 virtual false final false
 ::GlobalNamespace::OVRSpace get_Space() ;

/// @brief Method set_Space addr 0x26028f0 size 0x8 virtual false final false
 void set_Space(::GlobalNamespace::OVRSpace value) ;

/// @brief Method get_Uuid addr 0x26028f8 size 0xc virtual false final false
 ::System::Guid get_Uuid() ;

/// @brief Method set_Uuid addr 0x2602904 size 0x8 virtual false final false
 void set_Uuid(::System::Guid value) ;

/// @brief Method get_IsTracked addr 0x260290c size 0x8 virtual false final false
 bool get_IsTracked() ;

/// @brief Method set_IsTracked addr 0x2602914 size 0xc virtual false final false
 void set_IsTracked(bool value) ;

/// @brief Method IsComponentEnabled addr 0x2602920 size 0x8c virtual false final false
 bool IsComponentEnabled(::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType spaceComponentType) ;

/// @brief Method SyncComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SyncComponent(::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType spaceComponentType) ;

/// @brief Method ClearPoseCache addr 0x26029b0 size 0x10 virtual false final false
 void ClearPoseCache() ;

/// @brief Method Initialize addr 0x26029c0 size 0x368 virtual false final false
 void Initialize(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) ;

/// @brief Method InitializeFrom addr 0x2602ffc size 0xd0 virtual false final false
 void InitializeFrom(::GlobalNamespace::OVRSceneAnchor other) ;

/// @brief Method GetSceneAnchors addr 0x26030cc size 0xf8 virtual false final false
static void GetSceneAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor> anchors) ;

/// @brief Method TryUpdateTransform addr 0x2602d38 size 0x2c4 virtual false final false
 bool TryUpdateTransform(bool useCache) ;

/// @brief Method OnDestroy addr 0x26031c4 size 0x1e0 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit OVRSceneAnchor() ;

/// @brief Method .ctor addr 0x26033a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneAnchor, "", "OVRSceneAnchor");
