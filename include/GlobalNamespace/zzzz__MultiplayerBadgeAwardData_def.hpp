#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
// Type: ::MultiplayerBadgeAwardData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5211))
// CS Name: MultiplayerBadgeAwardData
class CORDL_TYPE MultiplayerBadgeAwardData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerBadgeAwardData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeAwardData(MultiplayerBadgeAwardData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeAwardData(MultiplayerBadgeAwardData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeAwardData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerBadgeAwardData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeAwardData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeAwardData& operator=(MultiplayerBadgeAwardData&& o) noexcept = default;
  constexpr MultiplayerBadgeAwardData& operator=(MultiplayerBadgeAwardData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__awardedPlayer, put=__set__awardedPlayer))  _awardedPlayer;

constexpr void __set__awardedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__awardedPlayer() const;

 float_t __declspec(property(get=__get__weight, put=__set__weight))  _weight;

constexpr void __set__weight(float_t value) ;

constexpr float_t __get__weight() const;

 ::StringW __declspec(property(get=__get__title, put=__set__title))  _title;

constexpr void __set__title(::StringW value) ;

constexpr ::StringW __get__title() const;

 ::StringW __declspec(property(get=__get__subtitle, put=__set__subtitle))  _subtitle;

constexpr void __set__subtitle(::StringW value) ;

constexpr ::StringW __get__subtitle() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__icon() const;

 ::GlobalNamespace::MultiplayerBadgeDataSO __declspec(property(get=__get__badgeData, put=__set__badgeData))  _badgeData;

constexpr void __set__badgeData(::GlobalNamespace::MultiplayerBadgeDataSO value) ;

constexpr ::GlobalNamespace::MultiplayerBadgeDataSO __get__badgeData() const;


// Properties

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=get_awardedPlayer))  awardedPlayer;

 ::StringW __declspec(property(get=get_titleLocalizationKey))  titleLocalizationKey;

 ::StringW __declspec(property(get=get_title))  title;

 ::StringW __declspec(property(get=get_subtitle))  subtitle;

 ::UnityEngine::Sprite __declspec(property(get=get_icon))  icon;


// Methods

/// @brief Method get_awardedPlayer addr 0x20da304 size 0x8 virtual false final false
 ::GlobalNamespace::IConnectedPlayer get_awardedPlayer() ;

/// @brief Method get_titleLocalizationKey addr 0x20da30c size 0x1c virtual false final false
 ::StringW get_titleLocalizationKey() ;

/// @brief Method get_title addr 0x20da328 size 0x8 virtual false final false
 ::StringW get_title() ;

/// @brief Method get_subtitle addr 0x20da330 size 0x8 virtual false final false
 ::StringW get_subtitle() ;

/// @brief Method get_icon addr 0x20da338 size 0x8 virtual false final false
 ::UnityEngine::Sprite get_icon() ;

// Ctor Parameters [CppParam { name: "awardedPlayer", ty: "::GlobalNamespace::IConnectedPlayer", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "subtitle", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "badgeData", ty: "::GlobalNamespace::MultiplayerBadgeDataSO", modifiers: "", def_value: None }]
explicit MultiplayerBadgeAwardData(::GlobalNamespace::IConnectedPlayer awardedPlayer, float_t weight, ::StringW title, ::StringW subtitle, ::GlobalNamespace::MultiplayerBadgeDataSO badgeData) ;

/// @brief Method .ctor addr 0x20d85d4 size 0x60 virtual false final false
 void _ctor(::GlobalNamespace::IConnectedPlayer awardedPlayer, float_t weight, ::StringW title, ::StringW subtitle, ::GlobalNamespace::MultiplayerBadgeDataSO badgeData) ;

/// @brief Method CompareTo addr 0x20da340 size 0xf0 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeAwardData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeAwardData, "", "MultiplayerBadgeAwardData");
