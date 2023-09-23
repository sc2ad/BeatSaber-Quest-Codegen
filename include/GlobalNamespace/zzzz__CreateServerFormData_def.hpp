#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct SongSelectionMode;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct GameplayServerMode;
}
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
struct CreateServerFormData;
}
// Type: ::CreateServerFormData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5654))
// CS Name: CreateServerFormData
struct CORDL_TYPE CreateServerFormData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "usePassword", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maxPlayers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allowInviteOthers", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "netDiscoverable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "difficulties", ty: "GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty: "GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }, CppParam { name: "songPacks", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerMode", ty: "GlobalNamespace::GameplayServerMode", modifiers: "", def_value: None }, CppParam { name: "songSelectionMode", ty: "GlobalNamespace::SongSelectionMode", modifiers: "", def_value: None }, CppParam { name: "gameplayServerControlSettings", ty: "GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: None }]
constexpr CreateServerFormData(bool usePassword, ::StringW password, int32_t maxPlayers, bool allowInviteOthers, bool netDiscoverable, GlobalNamespace::BeatmapDifficultyMask difficulties, GlobalNamespace::GameplayModifierMask modifiers, GlobalNamespace::SongPackMask songPacks, GlobalNamespace::GameplayServerMode gameplayServerMode, GlobalNamespace::SongSelectionMode songSelectionMode, GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept;


                    constexpr CreateServerFormData(CreateServerFormData const&) = default;
                    constexpr CreateServerFormData(CreateServerFormData&&) = default;
                    constexpr CreateServerFormData& operator=(CreateServerFormData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CreateServerFormData& operator=(CreateServerFormData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CreateServerFormData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_usePassword, put=__set_usePassword))  usePassword;

constexpr void __set_usePassword(bool value) ;

constexpr bool __get_usePassword() const;

 ::StringW __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::StringW value) ;

constexpr ::StringW __get_password() const;

 int32_t __declspec(property(get=__get_maxPlayers, put=__set_maxPlayers))  maxPlayers;

constexpr void __set_maxPlayers(int32_t value) ;

constexpr int32_t __get_maxPlayers() const;

 bool __declspec(property(get=__get_allowInviteOthers, put=__set_allowInviteOthers))  allowInviteOthers;

constexpr void __set_allowInviteOthers(bool value) ;

constexpr bool __get_allowInviteOthers() const;

 bool __declspec(property(get=__get_netDiscoverable, put=__set_netDiscoverable))  netDiscoverable;

constexpr void __set_netDiscoverable(bool value) ;

constexpr bool __get_netDiscoverable() const;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get_difficulties, put=__set_difficulties))  difficulties;

constexpr void __set_difficulties(GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr GlobalNamespace::BeatmapDifficultyMask __get_difficulties() const;

 GlobalNamespace::GameplayModifierMask __declspec(property(get=__get_modifiers, put=__set_modifiers))  modifiers;

constexpr void __set_modifiers(GlobalNamespace::GameplayModifierMask value) ;

constexpr GlobalNamespace::GameplayModifierMask __get_modifiers() const;

 GlobalNamespace::SongPackMask __declspec(property(get=__get_songPacks, put=__set_songPacks))  songPacks;

constexpr void __set_songPacks(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get_songPacks() const;

 GlobalNamespace::GameplayServerMode __declspec(property(get=__get_gameplayServerMode, put=__set_gameplayServerMode))  gameplayServerMode;

constexpr void __set_gameplayServerMode(GlobalNamespace::GameplayServerMode value) ;

constexpr GlobalNamespace::GameplayServerMode __get_gameplayServerMode() const;

 GlobalNamespace::SongSelectionMode __declspec(property(get=__get_songSelectionMode, put=__set_songSelectionMode))  songSelectionMode;

constexpr void __set_songSelectionMode(GlobalNamespace::SongSelectionMode value) ;

constexpr GlobalNamespace::SongSelectionMode __get_songSelectionMode() const;

 GlobalNamespace::GameplayServerControlSettings __declspec(property(get=__get_gameplayServerControlSettings, put=__set_gameplayServerControlSettings))  gameplayServerControlSettings;

constexpr void __set_gameplayServerControlSettings(GlobalNamespace::GameplayServerControlSettings value) ;

constexpr GlobalNamespace::GameplayServerControlSettings __get_gameplayServerControlSettings() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerFormData, "", "CreateServerFormData");
