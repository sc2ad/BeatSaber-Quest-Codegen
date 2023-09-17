#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace Unity::XR::Oculus {
class Performance;
}
// Type: Unity.XR.Oculus::Performance
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15223))
// CS Name: Unity.XR.Oculus.Performance
class CORDL_TYPE Performance : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Performance() = default;

// Ctor Parameters [CppParam { name: "", ty: "Performance", modifiers: " const&", def_value: None }]
constexpr Performance(Performance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Performance", modifiers: "&&", def_value: None }]
constexpr Performance(Performance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Performance(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Performance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Performance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Performance& operator=(Performance&& o) noexcept = default;
  constexpr Performance& operator=(Performance const& o) noexcept = default;
                


// Fields

static ::ArrayW<float_t> __declspec(property(get=__get_cachedDisplayAvailableFrequencies, put=__set_cachedDisplayAvailableFrequencies))  cachedDisplayAvailableFrequencies;

static void __set_cachedDisplayAvailableFrequencies(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_cachedDisplayAvailableFrequencies() ;


// Methods

/// @brief Method TrySetCPULevel addr 0x2ae0024 size 0x18 virtual false final false
static bool TrySetCPULevel(int32_t level) ;

/// @brief Method TrySetGPULevel addr 0x2ae0040 size 0x18 virtual false final false
static bool TrySetGPULevel(int32_t level) ;

/// @brief Method TryGetAvailableDisplayRefreshRates addr 0x2ae005c size 0x1b8 virtual false final false
static bool TryGetAvailableDisplayRefreshRates(ByRef<::ArrayW<float_t>> refreshRates) ;

/// @brief Method TrySetDisplayRefreshRate addr 0x2ae0218 size 0x4 virtual false final false
static bool TrySetDisplayRefreshRate(float_t refreshRate) ;

/// @brief Method TryGetDisplayRefreshRate addr 0x2ae0220 size 0x4 virtual false final false
static bool TryGetDisplayRefreshRate(ByRef<float_t> refreshRate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::Performance);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Performance, "Unity.XR.Oculus", "Performance");
