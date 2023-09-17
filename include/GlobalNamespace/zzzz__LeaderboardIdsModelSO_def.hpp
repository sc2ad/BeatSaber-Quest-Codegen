#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData;
}
// Type: ::LeaderboardIdData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4234))
// CS Name: LeaderboardIdsModelSO::LeaderboardIdData
class CORDL_TYPE ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData(____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData(____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData& operator=(____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData&& o) noexcept = default;
  constexpr ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData& operator=(____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__difficultyBeatmapId, put=__set__difficultyBeatmapId))  _difficultyBeatmapId;

constexpr void __set__difficultyBeatmapId(::StringW value) ;

constexpr ::StringW __get__difficultyBeatmapId() const;

 ::StringW __declspec(property(get=__get__platformLeaderboardId, put=__set__platformLeaderboardId))  _platformLeaderboardId;

constexpr void __set__platformLeaderboardId(::StringW value) ;

constexpr ::StringW __get__platformLeaderboardId() const;


// Properties

 ::StringW __declspec(property(get=get_platformLeaderboardId))  platformLeaderboardId;

 ::StringW __declspec(property(get=get_difficultyBeatmapId))  difficultyBeatmapId;


// Methods

/// @brief Method get_platformLeaderboardId addr 0x21c3eec size 0x8 virtual false final false
 ::StringW get_platformLeaderboardId() ;

/// @brief Method get_difficultyBeatmapId addr 0x21c3ef4 size 0x8 virtual false final false
 ::StringW get_difficultyBeatmapId() ;

// Ctor Parameters [CppParam { name: "difficultyBeatmapId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformLeaderboardId", ty: "::StringW", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) ;

/// @brief Method .ctor addr 0x21c3efc size 0x2c virtual false final false
 void _ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LeaderboardIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4235))
// CS Name: LeaderboardIdsModelSO
class CORDL_TYPE LeaderboardIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LeaderboardIdData = ::GlobalNamespace::____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LeaderboardIdsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModelSO", modifiers: " const&", def_value: None }]
constexpr LeaderboardIdsModelSO(LeaderboardIdsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
constexpr LeaderboardIdsModelSO(LeaderboardIdsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardIdsModelSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr LeaderboardIdsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardIdsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardIdsModelSO& operator=(LeaderboardIdsModelSO&& o) noexcept = default;
  constexpr LeaderboardIdsModelSO& operator=(LeaderboardIdsModelSO const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData> __declspec(property(get=__get__leaderboardIds, put=__set__leaderboardIds))  _leaderboardIds;

constexpr void __set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData> __get__leaderboardIds() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get__leaderboardIdMap, put=__set__leaderboardIdMap))  _leaderboardIdMap;

constexpr void __set__leaderboardIdMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get__leaderboardIdMap() const;


// Methods

/// @brief Method RebuildMap addr 0x21c3bd4 size 0x1a0 virtual false final false
 void RebuildMap() ;

/// @brief Method OnEnable addr 0x21c3d74 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method TryGetPlatformLeaderboardId addr 0x21c3d90 size 0x9c virtual false final false
 bool TryGetPlatformLeaderboardId(::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ByRef<::StringW> platformLeaderboardId) ;

// Ctor Parameters []
explicit LeaderboardIdsModelSO() ;

/// @brief Method .ctor addr 0x21c3e2c size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsModelSO, "", "LeaderboardIdsModelSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LeaderboardIdsModelSO__LeaderboardIdData, "", "LeaderboardIdsModelSO/LeaderboardIdData");
