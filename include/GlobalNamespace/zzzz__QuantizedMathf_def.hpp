#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class QuantizedMathf;
}
// Type: ::QuantizedMathf
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15127))
// CS Name: QuantizedMathf
class CORDL_TYPE QuantizedMathf : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QuantizedMathf() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuantizedMathf", modifiers: " const&", def_value: None }]
constexpr QuantizedMathf(QuantizedMathf const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuantizedMathf", modifiers: "&&", def_value: None }]
constexpr QuantizedMathf(QuantizedMathf&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuantizedMathf(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QuantizedMathf& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuantizedMathf& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuantizedMathf& operator=(QuantizedMathf&& o) noexcept = default;
  constexpr QuantizedMathf& operator=(QuantizedMathf const& o) noexcept = default;
                


// Fields

/// @brief Field kQuaternionSerializableScaleFactor offset 0
static constexpr int32_t  kQuaternionSerializableScaleFactor{16383};

/// @brief Field kQuaternionSerializableEpsilon offset 0
static constexpr float_t  kQuaternionSerializableEpsilon{0.00006103888};

/// @brief Field kVectorSerializableScaleInt offset 0
static constexpr int32_t  kVectorSerializableScaleInt{1000};

/// @brief Field kVectorSerializableScale offset 0
static constexpr float_t  kVectorSerializableScale{1000};

/// @brief Field kVectorSerializableEpsilon offset 0
static constexpr float_t  kVectorSerializableEpsilon{0.001};


// Methods

/// @brief Method Approximately addr 0x1219758 size 0xd4 virtual false final false
static bool Approximately(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b) ;

/// @brief Method Approximately addr 0x121982c size 0x10 virtual false final false
static bool Approximately(float_t a, float_t b, float_t epsilon) ;

/// @brief Method Approximately addr 0x121983c size 0x74 virtual false final false
static bool Approximately(int32_t a, int32_t b, int32_t epsilon) ;

/// @brief Method Approximately addr 0x12198b0 size 0x38 virtual false final false
static bool Approximately(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b) ;

/// @brief Method Approximately addr 0x12198e8 size 0x60 virtual false final false
static bool Approximately(::UnityEngine::Pose a, ::UnityEngine::Pose b) ;

/// @brief Method QuantizedVectorComponentToString addr 0x1219948 size 0x100 virtual false final false
static ::StringW QuantizedVectorComponentToString(int32_t v) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::QuantizedMathf);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuantizedMathf, "", "QuantizedMathf");
