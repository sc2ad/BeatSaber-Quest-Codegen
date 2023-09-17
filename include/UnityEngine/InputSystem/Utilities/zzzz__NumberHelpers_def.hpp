#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class NumberHelpers;
}
// Type: UnityEngine.InputSystem.Utilities::NumberHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6767))
// CS Name: UnityEngine.InputSystem.Utilities.NumberHelpers
class CORDL_TYPE NumberHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NumberHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "NumberHelpers", modifiers: " const&", def_value: None }]
constexpr NumberHelpers(NumberHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NumberHelpers", modifiers: "&&", def_value: None }]
constexpr NumberHelpers(NumberHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NumberHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NumberHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NumberHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NumberHelpers& operator=(NumberHelpers&& o) noexcept = default;
  constexpr NumberHelpers& operator=(NumberHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method AlignToMultipleOf addr 0x2983090 size 0x1c virtual false final false
static int32_t AlignToMultipleOf(int32_t number, int32_t alignment) ;

/// @brief Method AlignToMultipleOf addr 0x29830ac size 0x1c virtual false final false
static int64_t AlignToMultipleOf(int64_t number, int64_t alignment) ;

/// @brief Method AlignToMultipleOf addr 0x29830c8 size 0x1c virtual false final false
static uint32_t AlignToMultipleOf(uint32_t number, uint32_t alignment) ;

/// @brief Method Approximately addr 0x29830e4 size 0x9c virtual false final false
static bool Approximately(double_t a, double_t b) ;

/// @brief Method IntToNormalizedFloat addr 0x2983180 size 0x3c virtual false final false
static float_t IntToNormalizedFloat(int32_t value, int32_t minValue, int32_t maxValue) ;

/// @brief Method NormalizedFloatToInt addr 0x29831bc size 0x50 virtual false final false
static int32_t NormalizedFloatToInt(float_t value, int32_t intMinValue, int32_t intMaxValue) ;

/// @brief Method UIntToNormalizedFloat addr 0x298320c size 0x3c virtual false final false
static float_t UIntToNormalizedFloat(uint32_t value, uint32_t minValue, uint32_t maxValue) ;

/// @brief Method NormalizedFloatToUInt addr 0x2983248 size 0x48 virtual false final false
static uint32_t NormalizedFloatToUInt(float_t value, uint32_t uintMinValue, uint32_t uintMaxValue) ;

/// @brief Method RemapUIntBitsToNormalizeFloatToUIntBits addr 0x2983290 size 0x6c virtual false final false
static uint32_t RemapUIntBitsToNormalizeFloatToUIntBits(uint32_t value, uint32_t inBitSize, uint32_t outBitSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::NumberHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::NumberHelpers, "UnityEngine.InputSystem.Utilities", "NumberHelpers");
