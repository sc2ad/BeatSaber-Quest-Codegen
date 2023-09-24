#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBaseData;
}
// Type: ::LightColorBaseData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4337))
// CS Name: LightColorBaseData
class CORDL_TYPE LightColorBaseData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LightColorBaseData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: " const&", def_value: None }]
constexpr LightColorBaseData(LightColorBaseData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: "&&", def_value: None }]
constexpr LightColorBaseData(LightColorBaseData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorBaseData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightColorBaseData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorBaseData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorBaseData& operator=(LightColorBaseData&& o) noexcept = default;
  constexpr LightColorBaseData& operator=(LightColorBaseData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_beat, put=__set_beat))  beat;

constexpr void __set_beat(float_t value) ;

constexpr float_t __get_beat() const;

 GlobalNamespace::BeatmapEventTransitionType __declspec(property(get=__get_transitionType, put=__set_transitionType))  transitionType;

constexpr void __set_transitionType(GlobalNamespace::BeatmapEventTransitionType value) ;

constexpr GlobalNamespace::BeatmapEventTransitionType __get_transitionType() const;

 GlobalNamespace::EnvironmentColorType __declspec(property(get=__get_colorType, put=__set_colorType))  colorType;

constexpr void __set_colorType(GlobalNamespace::EnvironmentColorType value) ;

constexpr GlobalNamespace::EnvironmentColorType __get_colorType() const;

 float_t __declspec(property(get=__get_brightness, put=__set_brightness))  brightness;

constexpr void __set_brightness(float_t value) ;

constexpr float_t __get_brightness() const;

 int32_t __declspec(property(get=__get_strobeBeatFrequency, put=__set_strobeBeatFrequency))  strobeBeatFrequency;

constexpr void __set_strobeBeatFrequency(int32_t value) ;

constexpr int32_t __get_strobeBeatFrequency() const;


// Methods

static GlobalNamespace::LightColorBaseData New_ctor(float_t beat, GlobalNamespace::BeatmapEventTransitionType transitionType, GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency) ;

/// @brief Method .ctor addr 0x21d7b94 size 0x54 virtual false final false
 void _ctor(float_t beat, GlobalNamespace::BeatmapEventTransitionType transitionType, GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightColorBaseData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorBaseData, "", "LightColorBaseData");
