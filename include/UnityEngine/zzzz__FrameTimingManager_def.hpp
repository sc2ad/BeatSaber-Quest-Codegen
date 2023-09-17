#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct FrameTiming;
}
// Forward declare root types
namespace UnityEngine {
class FrameTimingManager;
}
// Type: UnityEngine::FrameTimingManager
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10075))
// CS Name: UnityEngine.FrameTimingManager
class CORDL_TYPE FrameTimingManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FrameTimingManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "FrameTimingManager", modifiers: " const&", def_value: None }]
constexpr FrameTimingManager(FrameTimingManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FrameTimingManager", modifiers: "&&", def_value: None }]
constexpr FrameTimingManager(FrameTimingManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FrameTimingManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FrameTimingManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FrameTimingManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FrameTimingManager& operator=(FrameTimingManager&& o) noexcept = default;
  constexpr FrameTimingManager& operator=(FrameTimingManager const& o) noexcept = default;
                


// Methods

/// @brief Method CaptureFrameTimings addr 0x2b4cfc8 size 0x28 virtual false final false
static void CaptureFrameTimings() ;

/// @brief Method GetLatestTimings addr 0x2b4cff0 size 0x44 virtual false final false
static uint32_t GetLatestTimings(uint32_t numFrames, ::ArrayW<::UnityEngine::FrameTiming> timings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::FrameTimingManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTimingManager, "UnityEngine", "FrameTimingManager");
