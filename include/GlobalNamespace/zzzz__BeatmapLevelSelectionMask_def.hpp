#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Type: ::BeatmapLevelSelectionMask
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12628))
// CS Name: BeatmapLevelSelectionMask
struct CORDL_TYPE BeatmapLevelSelectionMask : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>() const;

// Ctor Parameters [CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }]
constexpr BeatmapLevelSelectionMask(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks) noexcept;


                    constexpr BeatmapLevelSelectionMask(BeatmapLevelSelectionMask const&) = default;
                    constexpr BeatmapLevelSelectionMask(BeatmapLevelSelectionMask&&) = default;
                    constexpr BeatmapLevelSelectionMask& operator=(BeatmapLevelSelectionMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapLevelSelectionMask& operator=(BeatmapLevelSelectionMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelSelectionMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get_difficulties, put=__set_difficulties))  difficulties;

constexpr void __set_difficulties(::GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask __get_difficulties() const;

 ::GlobalNamespace::GameplayModifierMask __declspec(property(get=__get_modifiers, put=__set_modifiers))  modifiers;

constexpr void __set_modifiers(::GlobalNamespace::GameplayModifierMask value) ;

constexpr ::GlobalNamespace::GameplayModifierMask __get_modifiers() const;

 ::GlobalNamespace::SongPackMask __declspec(property(get=__get_songPacks, put=__set_songPacks))  songPacks;

constexpr void __set_songPacks(::GlobalNamespace::SongPackMask value) ;

constexpr ::GlobalNamespace::SongPackMask __get_songPacks() const;


// Methods

/// @brief Method .ctor addr 0xd9cb1c size 0x10 virtual false final false
 void _ctor(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks) ;

/// @brief Method Equals addr 0xd9cb2c size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xd9cbbc size 0xf8 virtual true final true
 bool Equals(::GlobalNamespace::BeatmapLevelSelectionMask other) ;

/// @brief Method GetHashCode addr 0xd9ccb4 size 0x2c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Serialize addr 0xd9cce0 size 0x50 virtual false final false
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer, uint32_t version) ;

/// @brief Method Deserialize addr 0xd9cd30 size 0x64 virtual false final false
static ::GlobalNamespace::BeatmapLevelSelectionMask Deserialize(::LiteNetLib::Utils::NetDataReader reader, uint32_t version) ;

/// @brief Method op_Equality addr 0xd9cd94 size 0x40 virtual false final false
static bool op_Equality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r) ;

/// @brief Method op_Inequality addr 0xd9cdd4 size 0x40 virtual false final false
static bool op_Inequality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSelectionMask, "", "BeatmapLevelSelectionMask");
