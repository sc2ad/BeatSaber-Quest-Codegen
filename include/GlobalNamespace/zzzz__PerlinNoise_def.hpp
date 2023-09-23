#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class PerlinNoise;
}
// Type: ::PerlinNoise
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13815))
// CS Name: PerlinNoise
class CORDL_TYPE PerlinNoise : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PerlinNoise() = default;

// Ctor Parameters [CppParam { name: "", ty: "PerlinNoise", modifiers: " const&", def_value: None }]
constexpr PerlinNoise(PerlinNoise const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PerlinNoise", modifiers: "&&", def_value: None }]
constexpr PerlinNoise(PerlinNoise&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PerlinNoise(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PerlinNoise& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PerlinNoise& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PerlinNoise& operator=(PerlinNoise&& o) noexcept = default;
  constexpr PerlinNoise& operator=(PerlinNoise const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_permutation, put=__set_permutation))  permutation;

static void __set_permutation(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_permutation() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_p, put=__set_p))  p;

static void __set_p(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_p() ;


// Methods

/// @brief Method OctavePerlin3D addr 0x1f79160 size 0xdc virtual false final false
static float_t OctavePerlin3D(float_t x, float_t y, float_t z, int32_t octaves, float_t persistence, int32_t repeat) ;

/// @brief Method Perlin3D addr 0x1f7923c size 0x538 virtual false final false
static float_t Perlin3D(float_t x, float_t y, float_t z, int32_t repeat) ;

/// @brief Method Inc addr 0x1f797a0 size 0x18 virtual false final false
static int32_t Inc(int32_t num, int32_t repeat) ;

/// @brief Method Grad3D addr 0x1f797b8 size 0x74 virtual false final false
static float_t Grad3D(int32_t hash, float_t x, float_t y, float_t z) ;

/// @brief Method Fade addr 0x1f79774 size 0x2c virtual false final false
static float_t Fade(float_t t) ;

/// @brief Method Lerp addr 0x1f7982c size 0x10 virtual false final false
static float_t Lerp(float_t a, float_t b, float_t x) ;

// Ctor Parameters []
explicit PerlinNoise() ;

/// @brief Method .ctor addr 0x1f7983c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PerlinNoise);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PerlinNoise, "", "PerlinNoise");
