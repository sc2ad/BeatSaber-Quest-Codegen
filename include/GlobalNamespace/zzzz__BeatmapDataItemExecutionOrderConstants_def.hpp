#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataItemExecutionOrderConstants;
}
// Type: ::BeatmapDataItemExecutionOrderConstants
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14911))
// CS Name: BeatmapDataItemExecutionOrderConstants
class CORDL_TYPE BeatmapDataItemExecutionOrderConstants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataItemExecutionOrderConstants() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItemExecutionOrderConstants", modifiers: " const&", def_value: None }]
constexpr BeatmapDataItemExecutionOrderConstants(BeatmapDataItemExecutionOrderConstants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItemExecutionOrderConstants", modifiers: "&&", def_value: None }]
constexpr BeatmapDataItemExecutionOrderConstants(BeatmapDataItemExecutionOrderConstants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataItemExecutionOrderConstants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataItemExecutionOrderConstants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataItemExecutionOrderConstants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataItemExecutionOrderConstants& operator=(BeatmapDataItemExecutionOrderConstants&& o) noexcept = default;
  constexpr BeatmapDataItemExecutionOrderConstants& operator=(BeatmapDataItemExecutionOrderConstants const& o) noexcept = default;
                


// Fields

/// @brief Field kBPMChangeBeatmapEventExecutionOrder offset 0
static constexpr int32_t  kBPMChangeBeatmapEventExecutionOrder{-1001};

/// @brief Field kEarlySpawnRotationBeatmapEventExecutionOrder offset 0
static constexpr int32_t  kEarlySpawnRotationBeatmapEventExecutionOrder{-1000};

/// @brief Field kCommonBeatmapEventExecutionOrder offset 0
static constexpr int32_t  kCommonBeatmapEventExecutionOrder{-100};

/// @brief Field kCommonBeatmapObjectDataExecutionOrder offset 0
static constexpr int32_t  kCommonBeatmapObjectDataExecutionOrder{100};

/// @brief Field kLateSpawnRotationBeatmapEventExecutionOrder offset 0
static constexpr int32_t  kLateSpawnRotationBeatmapEventExecutionOrder{1000};


// Methods

static GlobalNamespace::BeatmapDataItemExecutionOrderConstants New_ctor() ;

/// @brief Method .ctor addr 0xd919b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataItemExecutionOrderConstants);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataItemExecutionOrderConstants, "", "BeatmapDataItemExecutionOrderConstants");
