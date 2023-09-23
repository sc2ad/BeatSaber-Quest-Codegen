#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilter;
}
// Type: ::GameServersFilter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5661))
// CS Name: GameServersFilter
class CORDL_TYPE GameServersFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GameServersFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersFilter", modifiers: " const&", def_value: None }]
constexpr GameServersFilter(GameServersFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersFilter", modifiers: "&&", def_value: None }]
constexpr GameServersFilter(GameServersFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServersFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameServersFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServersFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServersFilter& operator=(GameServersFilter&& o) noexcept = default;
  constexpr GameServersFilter& operator=(GameServersFilter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_filterByDifficulty, put=__set_filterByDifficulty))  filterByDifficulty;

constexpr void __set_filterByDifficulty(bool value) ;

constexpr bool __get_filterByDifficulty() const;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get_filteredDifficulty, put=__set_filteredDifficulty))  filteredDifficulty;

constexpr void __set_filteredDifficulty(GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr GlobalNamespace::BeatmapDifficultyMask __get_filteredDifficulty() const;

 bool __declspec(property(get=__get_filterByModifiers, put=__set_filterByModifiers))  filterByModifiers;

constexpr void __set_filterByModifiers(bool value) ;

constexpr bool __get_filterByModifiers() const;

 GlobalNamespace::GameplayModifierMask __declspec(property(get=__get_filteredModifiers, put=__set_filteredModifiers))  filteredModifiers;

constexpr void __set_filteredModifiers(GlobalNamespace::GameplayModifierMask value) ;

constexpr GlobalNamespace::GameplayModifierMask __get_filteredModifiers() const;

 bool __declspec(property(get=__get_filterBySongPacks, put=__set_filterBySongPacks))  filterBySongPacks;

constexpr void __set_filterBySongPacks(bool value) ;

constexpr bool __get_filterBySongPacks() const;

 GlobalNamespace::SongPackMask __declspec(property(get=__get_filteredSongPacks, put=__set_filteredSongPacks))  filteredSongPacks;

constexpr void __set_filteredSongPacks(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get_filteredSongPacks() const;

 bool __declspec(property(get=__get_showFull, put=__set_showFull))  showFull;

constexpr void __set_showFull(bool value) ;

constexpr bool __get_showFull() const;

 bool __declspec(property(get=__get_showProtected, put=__set_showProtected))  showProtected;

constexpr void __set_showProtected(bool value) ;

constexpr bool __get_showProtected() const;

 bool __declspec(property(get=__get_showInternetGames, put=__set_showInternetGames))  showInternetGames;

constexpr void __set_showInternetGames(bool value) ;

constexpr bool __get_showInternetGames() const;


// Methods

// Ctor Parameters []
explicit GameServersFilter() ;

/// @brief Method .ctor addr 0x214ddb0 size 0x40 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServersFilter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersFilter, "", "GameServersFilter");
