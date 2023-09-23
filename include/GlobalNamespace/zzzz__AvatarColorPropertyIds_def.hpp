#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorPropertyIds;
}
// Type: ::AvatarColorPropertyIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4071))
// CS Name: AvatarColorPropertyIds
class CORDL_TYPE AvatarColorPropertyIds : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AvatarColorPropertyIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorPropertyIds", modifiers: " const&", def_value: None }]
constexpr AvatarColorPropertyIds(AvatarColorPropertyIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorPropertyIds", modifiers: "&&", def_value: None }]
constexpr AvatarColorPropertyIds(AvatarColorPropertyIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarColorPropertyIds(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarColorPropertyIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarColorPropertyIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarColorPropertyIds& operator=(AvatarColorPropertyIds&& o) noexcept = default;
  constexpr AvatarColorPropertyIds& operator=(AvatarColorPropertyIds const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_colorPropertyId, put=__set_colorPropertyId))  colorPropertyId;

static void __set_colorPropertyId(int32_t value) ;

static int32_t __get_colorPropertyId() ;

static int32_t __declspec(property(get=__get_rimLightColorPropertyId, put=__set_rimLightColorPropertyId))  rimLightColorPropertyId;

static void __set_rimLightColorPropertyId(int32_t value) ;

static int32_t __get_rimLightColorPropertyId() ;

static int32_t __declspec(property(get=__get_uvColorsPropertyId, put=__set_uvColorsPropertyId))  uvColorsPropertyId;

static void __set_uvColorsPropertyId(int32_t value) ;

static int32_t __get_uvColorsPropertyId() ;

static int32_t __declspec(property(get=__get_uvRimLightColorsPropertyId, put=__set_uvRimLightColorsPropertyId))  uvRimLightColorsPropertyId;

static void __set_uvRimLightColorsPropertyId(int32_t value) ;

static int32_t __get_uvRimLightColorsPropertyId() ;

static int32_t __declspec(property(get=__get_segmentToHighlightPropertyId, put=__set_segmentToHighlightPropertyId))  segmentToHighlightPropertyId;

static void __set_segmentToHighlightPropertyId(int32_t value) ;

static int32_t __get_segmentToHighlightPropertyId() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarColorPropertyIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarColorPropertyIds, "", "AvatarColorPropertyIds");
