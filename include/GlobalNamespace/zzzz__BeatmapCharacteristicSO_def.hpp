#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Type: ::BeatmapCharacteristicSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4269))
// CS Name: BeatmapCharacteristicSO
class CORDL_TYPE BeatmapCharacteristicSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BeatmapCharacteristicSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSO", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicSO(BeatmapCharacteristicSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSO", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicSO(BeatmapCharacteristicSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapCharacteristicSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicSO& operator=(BeatmapCharacteristicSO&& o) noexcept = default;
  constexpr BeatmapCharacteristicSO& operator=(BeatmapCharacteristicSO const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Sprite __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__icon() const;

 ::StringW __declspec(property(get=__get__descriptionLocalizationKey, put=__set__descriptionLocalizationKey))  _descriptionLocalizationKey;

constexpr void __set__descriptionLocalizationKey(::StringW value) ;

constexpr ::StringW __get__descriptionLocalizationKey() const;

 ::StringW __declspec(property(get=__get__characteristicNameLocalizationKey, put=__set__characteristicNameLocalizationKey))  _characteristicNameLocalizationKey;

constexpr void __set__characteristicNameLocalizationKey(::StringW value) ;

constexpr ::StringW __get__characteristicNameLocalizationKey() const;

 ::StringW __declspec(property(get=__get__serializedName, put=__set__serializedName))  _serializedName;

constexpr void __set__serializedName(::StringW value) ;

constexpr ::StringW __get__serializedName() const;

 ::StringW __declspec(property(get=__get__compoundIdPartName, put=__set__compoundIdPartName))  _compoundIdPartName;

constexpr void __set__compoundIdPartName(::StringW value) ;

constexpr ::StringW __get__compoundIdPartName() const;

 int32_t __declspec(property(get=__get__sortingOrder, put=__set__sortingOrder))  _sortingOrder;

constexpr void __set__sortingOrder(int32_t value) ;

constexpr int32_t __get__sortingOrder() const;

 bool __declspec(property(get=__get__containsRotationEvents, put=__set__containsRotationEvents))  _containsRotationEvents;

constexpr void __set__containsRotationEvents(bool value) ;

constexpr bool __get__containsRotationEvents() const;

 bool __declspec(property(get=__get__requires360Movement, put=__set__requires360Movement))  _requires360Movement;

constexpr void __set__requires360Movement(bool value) ;

constexpr bool __get__requires360Movement() const;

 int32_t __declspec(property(get=__get__numberOfColors, put=__set__numberOfColors))  _numberOfColors;

constexpr void __set__numberOfColors(int32_t value) ;

constexpr int32_t __get__numberOfColors() const;


// Properties

 ::UnityEngine::Sprite __declspec(property(get=get_icon))  icon;

 ::StringW __declspec(property(get=get_descriptionLocalizationKey))  descriptionLocalizationKey;

 ::StringW __declspec(property(get=get_characteristicNameLocalizationKey))  characteristicNameLocalizationKey;

 ::StringW __declspec(property(get=get_serializedName))  serializedName;

 ::StringW __declspec(property(get=get_compoundIdPartName))  compoundIdPartName;

 int32_t __declspec(property(get=get_sortingOrder))  sortingOrder;

 bool __declspec(property(get=get_containsRotationEvents))  containsRotationEvents;

 bool __declspec(property(get=get_requires360Movement))  requires360Movement;

 int32_t __declspec(property(get=get_numberOfColors))  numberOfColors;


// Methods

/// @brief Method get_icon addr 0x21c96e8 size 0x8 virtual false final false
 ::UnityEngine::Sprite get_icon() ;

/// @brief Method get_descriptionLocalizationKey addr 0x21c96f0 size 0x8 virtual false final false
 ::StringW get_descriptionLocalizationKey() ;

/// @brief Method get_characteristicNameLocalizationKey addr 0x21c96f8 size 0x8 virtual false final false
 ::StringW get_characteristicNameLocalizationKey() ;

/// @brief Method get_serializedName addr 0x21c9700 size 0x8 virtual false final false
 ::StringW get_serializedName() ;

/// @brief Method get_compoundIdPartName addr 0x21c9708 size 0x8 virtual false final false
 ::StringW get_compoundIdPartName() ;

/// @brief Method get_sortingOrder addr 0x21c9710 size 0x8 virtual false final false
 int32_t get_sortingOrder() ;

/// @brief Method get_containsRotationEvents addr 0x21c9718 size 0x8 virtual false final false
 bool get_containsRotationEvents() ;

/// @brief Method get_requires360Movement addr 0x21c9720 size 0x8 virtual false final false
 bool get_requires360Movement() ;

/// @brief Method get_numberOfColors addr 0x21c9728 size 0x8 virtual false final false
 int32_t get_numberOfColors() ;

// Ctor Parameters []
explicit BeatmapCharacteristicSO() ;

/// @brief Method .ctor addr 0x21c9730 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSO, "", "BeatmapCharacteristicSO");
