#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct ColorSchemeNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
// Type: ::PlayerSpecificSettingsNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12866))
// CS Name: PlayerSpecificSettingsNetSerializable
class CORDL_TYPE PlayerSpecificSettingsNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~PlayerSpecificSettingsNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsNetSerializable", modifiers: " const&", def_value: None }]
constexpr PlayerSpecificSettingsNetSerializable(PlayerSpecificSettingsNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsNetSerializable", modifiers: "&&", def_value: None }]
constexpr PlayerSpecificSettingsNetSerializable(PlayerSpecificSettingsNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSpecificSettingsNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerSpecificSettingsNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSpecificSettingsNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSpecificSettingsNetSerializable& operator=(PlayerSpecificSettingsNetSerializable&& o) noexcept = default;
  constexpr PlayerSpecificSettingsNetSerializable& operator=(PlayerSpecificSettingsNetSerializable const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 bool __declspec(property(get=__get_leftHanded, put=__set_leftHanded))  leftHanded;

constexpr void __set_leftHanded(bool value) ;

constexpr bool __get_leftHanded() const;

 bool __declspec(property(get=__get_automaticPlayerHeight, put=__set_automaticPlayerHeight))  automaticPlayerHeight;

constexpr void __set_automaticPlayerHeight(bool value) ;

constexpr bool __get_automaticPlayerHeight() const;

 float_t __declspec(property(get=__get_playerHeight, put=__set_playerHeight))  playerHeight;

constexpr void __set_playerHeight(float_t value) ;

constexpr float_t __get_playerHeight() const;

 float_t __declspec(property(get=__get_headPosToPlayerHeightOffset, put=__set_headPosToPlayerHeightOffset))  headPosToPlayerHeightOffset;

constexpr void __set_headPosToPlayerHeightOffset(float_t value) ;

constexpr float_t __get_headPosToPlayerHeightOffset() const;

 GlobalNamespace::ColorSchemeNetSerializable __declspec(property(get=__get_colorScheme, put=__set_colorScheme))  colorScheme;

constexpr void __set_colorScheme(GlobalNamespace::ColorSchemeNetSerializable value) ;

constexpr GlobalNamespace::ColorSchemeNetSerializable __get_colorScheme() const;


// Methods

static GlobalNamespace::PlayerSpecificSettingsNetSerializable New_ctor() ;

/// @brief Method .ctor addr 0xdc5474 size 0x8 virtual false final false
 void _ctor() ;

static GlobalNamespace::PlayerSpecificSettingsNetSerializable New_ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight, float_t headPosToPlayerHeightOffset, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color obstaclesColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost) ;

/// @brief Method .ctor addr 0xdc5514 size 0x140 virtual false final false
 void _ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight, float_t headPosToPlayerHeightOffset, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color obstaclesColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost) ;

/// @brief Method Serialize addr 0xdc528c size 0x90 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdc547c size 0x98 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerSpecificSettingsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpecificSettingsNetSerializable, "", "PlayerSpecificSettingsNetSerializable");
