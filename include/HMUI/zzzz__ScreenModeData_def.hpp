#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class ScreenModeData;
}
// Type: HMUI::ScreenModeData
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13644))
// CS Name: HMUI.ScreenModeData
class CORDL_TYPE ScreenModeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ScreenModeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeData", modifiers: " const&", def_value: None }]
constexpr ScreenModeData(ScreenModeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeData", modifiers: "&&", def_value: None }]
constexpr ScreenModeData(ScreenModeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenModeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScreenModeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenModeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenModeData& operator=(ScreenModeData&& o) noexcept = default;
  constexpr ScreenModeData& operator=(ScreenModeData const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rotation() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 float_t __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(float_t value) ;

constexpr float_t __get_radius() const;

 bool __declspec(property(get=__get_offsetHeightByHeadPos, put=__set_offsetHeightByHeadPos))  offsetHeightByHeadPos;

constexpr void __set_offsetHeightByHeadPos(bool value) ;

constexpr bool __get_offsetHeightByHeadPos() const;

 float_t __declspec(property(get=__get_yOffsetRelativeToHead, put=__set_yOffsetRelativeToHead))  yOffsetRelativeToHead;

constexpr void __set_yOffsetRelativeToHead(float_t value) ;

constexpr float_t __get_yOffsetRelativeToHead() const;

 float_t __declspec(property(get=__get_minYPos, put=__set_minYPos))  minYPos;

constexpr void __set_minYPos(float_t value) ;

constexpr float_t __get_minYPos() const;


// Methods

static HMUI::ScreenModeData New_ctor(UnityEngine::Vector3 position, UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos, float_t yOffsetRelativeToHead, float_t minYPos) ;

/// @brief Method .ctor addr 0x1fb8aa0 size 0x98 virtual false final false
 void _ctor(UnityEngine::Vector3 position, UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos, float_t yOffsetRelativeToHead, float_t minYPos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ScreenModeData);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScreenModeData, "HMUI", "ScreenModeData");
