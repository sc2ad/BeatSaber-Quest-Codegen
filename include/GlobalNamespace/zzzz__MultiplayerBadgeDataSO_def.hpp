#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
// Type: ::MultiplayerBadgeDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5208))
// CS Name: MultiplayerBadgeDataSO
class CORDL_TYPE MultiplayerBadgeDataSO : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MultiplayerBadgeDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataSO(MultiplayerBadgeDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataSO(MultiplayerBadgeDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr MultiplayerBadgeDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataSO& operator=(MultiplayerBadgeDataSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataSO& operator=(MultiplayerBadgeDataSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__titleLocalizationKey, put=__set__titleLocalizationKey))  _titleLocalizationKey;

constexpr void __set__titleLocalizationKey(::StringW value) ;

constexpr ::StringW __get__titleLocalizationKey() const;

 ::StringW __declspec(property(get=__get__subtitleLocalizationKey, put=__set__subtitleLocalizationKey))  _subtitleLocalizationKey;

constexpr void __set__subtitleLocalizationKey(::StringW value) ;

constexpr ::StringW __get__subtitleLocalizationKey() const;

 UnityEngine::Sprite __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__icon() const;


// Properties

 UnityEngine::Sprite __declspec(property(get=get_icon))  icon;

 ::StringW __declspec(property(get=get_titleLocalizationKey))  titleLocalizationKey;

 ::StringW __declspec(property(get=get_subtitleLocalizationKey))  subtitleLocalizationKey;


// Methods

/// @brief Method get_icon addr 0x20da2d4 size 0x8 virtual false final false
 UnityEngine::Sprite get_icon() ;

/// @brief Method get_titleLocalizationKey addr 0x20da2dc size 0x8 virtual false final false
 ::StringW get_titleLocalizationKey() ;

/// @brief Method get_subtitleLocalizationKey addr 0x20da2e4 size 0x8 virtual false final false
 ::StringW get_subtitleLocalizationKey() ;

/// @brief Method CalculateBadgeData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::MultiplayerBadgeAwardData CalculateBadgeData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> resultsData, GlobalNamespace::PlayerDataModel playerDataModel, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, float_t randomMultiplier) ;

static GlobalNamespace::MultiplayerBadgeDataSO New_ctor() ;

/// @brief Method .ctor addr 0x20d8644 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerBadgeDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataSO, "", "MultiplayerBadgeDataSO");
