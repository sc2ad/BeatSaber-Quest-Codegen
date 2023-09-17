#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Type: ::GameplayModifierParamsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4225))
// CS Name: GameplayModifierParamsSO
class CORDL_TYPE GameplayModifierParamsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GameplayModifierParamsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierParamsSO", modifiers: " const&", def_value: None }]
constexpr GameplayModifierParamsSO(GameplayModifierParamsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierParamsSO", modifiers: "&&", def_value: None }]
constexpr GameplayModifierParamsSO(GameplayModifierParamsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifierParamsSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr GameplayModifierParamsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifierParamsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifierParamsSO& operator=(GameplayModifierParamsSO&& o) noexcept = default;
  constexpr GameplayModifierParamsSO& operator=(GameplayModifierParamsSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__modifierNameLocalizationKey, put=__set__modifierNameLocalizationKey))  _modifierNameLocalizationKey;

constexpr void __set__modifierNameLocalizationKey(::StringW value) ;

constexpr ::StringW __get__modifierNameLocalizationKey() const;

 ::StringW __declspec(property(get=__get__descriptionLocalizationKey, put=__set__descriptionLocalizationKey))  _descriptionLocalizationKey;

constexpr void __set__descriptionLocalizationKey(::StringW value) ;

constexpr ::StringW __get__descriptionLocalizationKey() const;

 float_t __declspec(property(get=__get__multiplier, put=__set__multiplier))  _multiplier;

constexpr void __set__multiplier(float_t value) ;

constexpr float_t __get__multiplier() const;

 bool __declspec(property(get=__get__multiplierConditionallyValid, put=__set__multiplierConditionallyValid))  _multiplierConditionallyValid;

constexpr void __set__multiplierConditionallyValid(bool value) ;

constexpr bool __get__multiplierConditionallyValid() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__icon() const;

 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get__mutuallyExclusives, put=__set__mutuallyExclusives))  _mutuallyExclusives;

constexpr void __set__mutuallyExclusives(::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __get__mutuallyExclusives() const;

 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get__requires, put=__set__requires))  _requires;

constexpr void __set__requires(::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __get__requires() const;

 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get__requiredBy, put=__set__requiredBy))  _requiredBy;

constexpr void __set__requiredBy(::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __get__requiredBy() const;

 bool __declspec(property(get=__get__isInBeta, put=__set__isInBeta))  _isInBeta;

constexpr void __set__isInBeta(bool value) ;

constexpr bool __get__isInBeta() const;


// Properties

 ::StringW __declspec(property(get=get_modifierNameLocalizationKey))  modifierNameLocalizationKey;

 ::StringW __declspec(property(get=get_descriptionLocalizationKey))  descriptionLocalizationKey;

 float_t __declspec(property(get=get_multiplier))  multiplier;

 bool __declspec(property(get=get_multiplierConditionallyValid))  multiplierConditionallyValid;

 ::UnityEngine::Sprite __declspec(property(get=get_icon))  icon;

 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=get_mutuallyExclusives))  mutuallyExclusives;

 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=get_requires))  requires;

 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=get_requiredBy))  requiredBy;

 bool __declspec(property(get=get_isInBeta))  isInBeta;


// Methods

/// @brief Method get_modifierNameLocalizationKey addr 0x21c2170 size 0x8 virtual false final false
 ::StringW get_modifierNameLocalizationKey() ;

/// @brief Method get_descriptionLocalizationKey addr 0x21c2178 size 0x8 virtual false final false
 ::StringW get_descriptionLocalizationKey() ;

/// @brief Method get_multiplier addr 0x21c2180 size 0x8 virtual false final false
 float_t get_multiplier() ;

/// @brief Method get_multiplierConditionallyValid addr 0x21c2188 size 0x8 virtual false final false
 bool get_multiplierConditionallyValid() ;

/// @brief Method get_icon addr 0x21c2190 size 0x8 virtual false final false
 ::UnityEngine::Sprite get_icon() ;

/// @brief Method get_mutuallyExclusives addr 0x21c2198 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> get_mutuallyExclusives() ;

/// @brief Method get_requires addr 0x21c21a0 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> get_requires() ;

/// @brief Method get_requiredBy addr 0x21c21a8 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO> get_requiredBy() ;

/// @brief Method get_isInBeta addr 0x21c21b0 size 0x8 virtual false final false
 bool get_isInBeta() ;

// Ctor Parameters []
explicit GameplayModifierParamsSO() ;

/// @brief Method .ctor addr 0x21c21b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierParamsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierParamsSO, "", "GameplayModifierParamsSO");
