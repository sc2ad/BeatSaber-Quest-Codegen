#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsPyramidView;
}
// Type: ::MultiplayerResultsPyramidView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5333))
// CS Name: MultiplayerResultsPyramidView
class CORDL_TYPE MultiplayerResultsPyramidView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MultiplayerResultsPyramidView() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidView", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsPyramidView(MultiplayerResultsPyramidView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidView", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsPyramidView(MultiplayerResultsPyramidView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsPyramidView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerResultsPyramidView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsPyramidView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsPyramidView& operator=(MultiplayerResultsPyramidView&& o) noexcept = default;
  constexpr MultiplayerResultsPyramidView& operator=(MultiplayerResultsPyramidView const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition __declspec(property(get=__get__multiplayerOffsetByLocalPlayerPosition, put=__set__multiplayerOffsetByLocalPlayerPosition))  _multiplayerOffsetByLocalPlayerPosition;

constexpr void __set__multiplayerOffsetByLocalPlayerPosition(GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition value) ;

constexpr GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition __get__multiplayerOffsetByLocalPlayerPosition() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get__spawnPoints, put=__set__spawnPoints))  _spawnPoints;

constexpr void __set__spawnPoints(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get__spawnPoints() const;

 UnityEngine::Transform __declspec(property(get=__get__spawnPointsParent, put=__set__spawnPointsParent))  _spawnPointsParent;

constexpr void __set__spawnPointsParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__spawnPointsParent() const;

 float_t __declspec(property(get=__get__evenCountOffset, put=__set__evenCountOffset))  _evenCountOffset;

constexpr void __set__evenCountOffset(float_t value) ;

constexpr float_t __get__evenCountOffset() const;

 GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory __declspec(property(get=__get__avatarsFactory, put=__set__avatarsFactory))  _avatarsFactory;

constexpr void __set__avatarsFactory(GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory __get__avatarsFactory() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar> __declspec(property(get=__get__avatarsDictionary, put=__set__avatarsDictionary))  _avatarsDictionary;

constexpr void __set__avatarsDictionary(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar> __get__avatarsDictionary() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__resultAvatarDirectors, put=__set__resultAvatarDirectors))  _resultAvatarDirectors;

constexpr void __set__resultAvatarDirectors(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__resultAvatarDirectors() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__badgeTimelines, put=__set__badgeTimelines))  _badgeTimelines;

constexpr void __set__badgeTimelines(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__badgeTimelines() const;

 GlobalNamespace::MultiplayerResultsPyramidViewAvatar __declspec(property(get=__get__anyResultsAvatar, put=__set__anyResultsAvatar))  _anyResultsAvatar;

constexpr void __set__anyResultsAvatar(GlobalNamespace::MultiplayerResultsPyramidViewAvatar value) ;

constexpr GlobalNamespace::MultiplayerResultsPyramidViewAvatar __get__anyResultsAvatar() const;


// Properties

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=get_resultAvatarDirectors))  resultAvatarDirectors;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=get_badgeTimelines))  badgeTimelines;


// Methods

/// @brief Method get_resultAvatarDirectors addr 0x2100f4c size 0x8 virtual false final false
 ::ArrayW<UnityEngine::GameObject> get_resultAvatarDirectors() ;

/// @brief Method get_badgeTimelines addr 0x2100f54 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::GameObject> get_badgeTimelines() ;

/// @brief Method PrespawnAvatars addr 0x20fefc8 size 0x400 virtual false final false
 void PrespawnAvatars(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> activePlayers) ;

/// @brief Method SetupResults addr 0x20fe17c size 0x614 virtual false final false
 void SetupResults(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> resultsData, UnityEngine::Transform badgeStartTransform, UnityEngine::Transform badgeMidTransform) ;

static GlobalNamespace::MultiplayerResultsPyramidView New_ctor() ;

/// @brief Method .ctor addr 0x21013c0 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerResultsPyramidView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsPyramidView, "", "MultiplayerResultsPyramidView");
