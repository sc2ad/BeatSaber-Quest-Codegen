#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBaseData;
}
// Type: ::LightTranslationBaseData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4341))
// CS Name: LightTranslationBaseData
class CORDL_TYPE LightTranslationBaseData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LightTranslationBaseData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: " const&", def_value: None }]
constexpr LightTranslationBaseData(LightTranslationBaseData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: "&&", def_value: None }]
constexpr LightTranslationBaseData(LightTranslationBaseData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTranslationBaseData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightTranslationBaseData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTranslationBaseData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTranslationBaseData& operator=(LightTranslationBaseData&& o) noexcept = default;
  constexpr LightTranslationBaseData& operator=(LightTranslationBaseData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_beat, put=__set_beat))  beat;

constexpr void __set_beat(float_t value) ;

constexpr float_t __get_beat() const;

 bool __declspec(property(get=__get_usePreviousEventTranslationValue, put=__set_usePreviousEventTranslationValue))  usePreviousEventTranslationValue;

constexpr void __set_usePreviousEventTranslationValue(bool value) ;

constexpr bool __get_usePreviousEventTranslationValue() const;

 GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get_easeType() const;

 float_t __declspec(property(get=__get_translation, put=__set_translation))  translation;

constexpr void __set_translation(float_t value) ;

constexpr float_t __get_translation() const;


// Methods

static GlobalNamespace::LightTranslationBaseData New_ctor(float_t beat, bool usePreviousEventTranslationValue, GlobalNamespace::EaseType easeType, float_t translation) ;

/// @brief Method .ctor addr 0x21d8cbc size 0x48 virtual false final false
 void _ctor(float_t beat, bool usePreviousEventTranslationValue, GlobalNamespace::EaseType easeType, float_t translation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightTranslationBaseData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightTranslationBaseData, "", "LightTranslationBaseData");
