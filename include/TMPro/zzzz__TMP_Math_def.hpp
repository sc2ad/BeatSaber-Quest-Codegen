#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro {
class TMP_Math;
}
// Type: TMPro::TMP_Math
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12257))
// CS Name: TMPro.TMP_Math
class CORDL_TYPE TMP_Math : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_Math() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Math", modifiers: " const&", def_value: None }]
constexpr TMP_Math(TMP_Math const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Math", modifiers: "&&", def_value: None }]
constexpr TMP_Math(TMP_Math&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Math(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_Math& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Math& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Math& operator=(TMP_Math&& o) noexcept = default;
  constexpr TMP_Math& operator=(TMP_Math const& o) noexcept = default;
                


// Fields

/// @brief Field FLOAT_MAX offset 0
static constexpr float_t  FLOAT_MAX{32767};

/// @brief Field FLOAT_MIN offset 0
static constexpr float_t  FLOAT_MIN{-32767};

/// @brief Field INT_MAX offset 0
static constexpr int32_t  INT_MAX{2147483647};

/// @brief Field INT_MIN offset 0
static constexpr int32_t  INT_MIN{-2147483647};

/// @brief Field FLOAT_UNSET offset 0
static constexpr float_t  FLOAT_UNSET{-32767};

/// @brief Field INT_UNSET offset 0
static constexpr int32_t  INT_UNSET{-32767};

static ::UnityEngine::Vector2 __declspec(property(get=__get_MAX_16BIT, put=__set_MAX_16BIT))  MAX_16BIT;

static void __set_MAX_16BIT(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_MAX_16BIT() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_MIN_16BIT, put=__set_MIN_16BIT))  MIN_16BIT;

static void __set_MIN_16BIT(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_MIN_16BIT() ;


// Methods

/// @brief Method Approximately addr 0x2a69310 size 0x30 virtual false final false
static bool Approximately(float_t a, float_t b) ;

/// @brief Method Mod addr 0x2a69340 size 0x14 virtual false final false
static int32_t Mod(int32_t a, int32_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_Math);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Math, "TMPro", "TMP_Math");
