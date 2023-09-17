#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
// Type: ::BloomFogEnvironmentParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14612))
// CS Name: BloomFogEnvironmentParams
class CORDL_TYPE BloomFogEnvironmentParams : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BloomFogEnvironmentParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: " const&", def_value: None }]
constexpr BloomFogEnvironmentParams(BloomFogEnvironmentParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: "&&", def_value: None }]
constexpr BloomFogEnvironmentParams(BloomFogEnvironmentParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomFogEnvironmentParams(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BloomFogEnvironmentParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomFogEnvironmentParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomFogEnvironmentParams& operator=(BloomFogEnvironmentParams&& o) noexcept = default;
  constexpr BloomFogEnvironmentParams& operator=(BloomFogEnvironmentParams const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_attenuation, put=__set_attenuation))  attenuation;

constexpr void __set_attenuation(float_t value) ;

constexpr float_t __get_attenuation() const;

 float_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(float_t value) ;

constexpr float_t __get_offset() const;

 float_t __declspec(property(get=__get_heightFogStartY, put=__set_heightFogStartY))  heightFogStartY;

constexpr void __set_heightFogStartY(float_t value) ;

constexpr float_t __get_heightFogStartY() const;

 float_t __declspec(property(get=__get_heightFogHeight, put=__set_heightFogHeight))  heightFogHeight;

constexpr void __set_heightFogHeight(float_t value) ;

constexpr float_t __get_heightFogHeight() const;

 float_t __declspec(property(get=__get_autoExposureLimit, put=__set_autoExposureLimit))  autoExposureLimit;

constexpr void __set_autoExposureLimit(float_t value) ;

constexpr float_t __get_autoExposureLimit() const;

 float_t __declspec(property(get=__get_noteSpawnIntensity, put=__set_noteSpawnIntensity))  noteSpawnIntensity;

constexpr void __set_noteSpawnIntensity(float_t value) ;

constexpr float_t __get_noteSpawnIntensity() const;


// Methods

// Ctor Parameters []
explicit BloomFogEnvironmentParams() ;

/// @brief Method .ctor addr 0x1f9021c size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironmentParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironmentParams, "", "BloomFogEnvironmentParams");
