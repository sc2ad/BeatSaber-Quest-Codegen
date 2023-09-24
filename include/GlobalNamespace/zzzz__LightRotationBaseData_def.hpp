#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBaseData;
}
// Type: ::LightRotationBaseData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4339))
// CS Name: LightRotationBaseData
class CORDL_TYPE LightRotationBaseData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LightRotationBaseData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: " const&", def_value: None }]
constexpr LightRotationBaseData(LightRotationBaseData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: "&&", def_value: None }]
constexpr LightRotationBaseData(LightRotationBaseData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationBaseData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightRotationBaseData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationBaseData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationBaseData& operator=(LightRotationBaseData&& o) noexcept = default;
  constexpr LightRotationBaseData& operator=(LightRotationBaseData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_beat, put=__set_beat))  beat;

constexpr void __set_beat(float_t value) ;

constexpr float_t __get_beat() const;

 bool __declspec(property(get=__get_usePreviousEventRotationValue, put=__set_usePreviousEventRotationValue))  usePreviousEventRotationValue;

constexpr void __set_usePreviousEventRotationValue(bool value) ;

constexpr bool __get_usePreviousEventRotationValue() const;

 GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get_easeType() const;

 float_t __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(float_t value) ;

constexpr float_t __get_rotation() const;

 int32_t __declspec(property(get=__get_loopsCount, put=__set_loopsCount))  loopsCount;

constexpr void __set_loopsCount(int32_t value) ;

constexpr int32_t __get_loopsCount() const;

 GlobalNamespace::LightRotationDirection __declspec(property(get=__get_rotationDirection, put=__set_rotationDirection))  rotationDirection;

constexpr void __set_rotationDirection(GlobalNamespace::LightRotationDirection value) ;

constexpr GlobalNamespace::LightRotationDirection __get_rotationDirection() const;


// Methods

static GlobalNamespace::LightRotationBaseData New_ctor(float_t beat, bool usePreviousEventRotationValue, GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount, GlobalNamespace::LightRotationDirection rotationDirection) ;

/// @brief Method .ctor addr 0x21d8438 size 0x5c virtual false final false
 void _ctor(float_t beat, bool usePreviousEventRotationValue, GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount, GlobalNamespace::LightRotationDirection rotationDirection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightRotationBaseData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightRotationBaseData, "", "LightRotationBaseData");
