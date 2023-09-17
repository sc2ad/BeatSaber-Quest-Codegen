#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardUploadData;
}
// Type: ::LeaderboardUploadData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4232))
// CS Name: LeaderboardUploadData
class CORDL_TYPE LeaderboardUploadData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~LeaderboardUploadData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardUploadData", modifiers: " const&", def_value: None }]
constexpr LeaderboardUploadData(LeaderboardUploadData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardUploadData", modifiers: "&&", def_value: None }]
constexpr LeaderboardUploadData(LeaderboardUploadData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardUploadData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaderboardUploadData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardUploadData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardUploadData& operator=(LeaderboardUploadData&& o) noexcept = default;
  constexpr LeaderboardUploadData& operator=(LeaderboardUploadData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_playerName, put=__set_playerName))  playerName;

constexpr void __set_playerName(::StringW value) ;

constexpr ::StringW __get_playerName() const;

 ::StringW __declspec(property(get=__get_playerId, put=__set_playerId))  playerId;

constexpr void __set_playerId(::StringW value) ;

constexpr ::StringW __get_playerId() const;

 ::StringW __declspec(property(get=__get_score, put=__set_score))  score;

constexpr void __set_score(::StringW value) ;

constexpr ::StringW __get_score() const;

 ::StringW __declspec(property(get=__get_leaderboardId, put=__set_leaderboardId))  leaderboardId;

constexpr void __set_leaderboardId(::StringW value) ;

constexpr ::StringW __get_leaderboardId() const;

 ::StringW __declspec(property(get=__get_songName, put=__set_songName))  songName;

constexpr void __set_songName(::StringW value) ;

constexpr ::StringW __get_songName() const;

 ::StringW __declspec(property(get=__get_songSubName, put=__set_songSubName))  songSubName;

constexpr void __set_songSubName(::StringW value) ;

constexpr ::StringW __get_songSubName() const;

 ::StringW __declspec(property(get=__get_authorName, put=__set_authorName))  authorName;

constexpr void __set_authorName(::StringW value) ;

constexpr ::StringW __get_authorName() const;

 ::StringW __declspec(property(get=__get_bpm, put=__set_bpm))  bpm;

constexpr void __set_bpm(::StringW value) ;

constexpr ::StringW __get_bpm() const;

 ::StringW __declspec(property(get=__get_difficulty, put=__set_difficulty))  difficulty;

constexpr void __set_difficulty(::StringW value) ;

constexpr ::StringW __get_difficulty() const;

 ::StringW __declspec(property(get=__get_infoHash, put=__set_infoHash))  infoHash;

constexpr void __set_infoHash(::StringW value) ;

constexpr ::StringW __get_infoHash() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_modifiers, put=__set_modifiers))  modifiers;

constexpr void __set_modifiers(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_modifiers() const;


// Methods

// Ctor Parameters [CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "score", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "leaderboardId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "songName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "songSubName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "authorName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bpm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "infoHash", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty: "::System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }]
explicit LeaderboardUploadData(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId, ::StringW songName, ::StringW songSubName, ::StringW authorName, ::StringW bpm, ::StringW difficulty, ::StringW infoHash, ::System::Collections::Generic::List_1<::StringW> modifiers) ;

/// @brief Method .ctor addr 0x21c3b38 size 0x8c virtual false final false
 void _ctor(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId, ::StringW songName, ::StringW songSubName, ::StringW authorName, ::StringW bpm, ::StringW difficulty, ::StringW infoHash, ::System::Collections::Generic::List_1<::StringW> modifiers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardUploadData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardUploadData, "", "LeaderboardUploadData");
