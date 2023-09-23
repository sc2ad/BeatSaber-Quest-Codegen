#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
class ProfilerUnsafeUtility;
}
// Type: Unity.Profiling.LowLevel.Unsafe::ProfilerUnsafeUtility
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9910))
// CS Name: Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility
class CORDL_TYPE ProfilerUnsafeUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProfilerUnsafeUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: " const&", def_value: None }]
constexpr ProfilerUnsafeUtility(ProfilerUnsafeUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "&&", def_value: None }]
constexpr ProfilerUnsafeUtility(ProfilerUnsafeUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProfilerUnsafeUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProfilerUnsafeUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProfilerUnsafeUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProfilerUnsafeUtility& operator=(ProfilerUnsafeUtility&& o) noexcept = default;
  constexpr ProfilerUnsafeUtility& operator=(ProfilerUnsafeUtility const& o) noexcept = default;
                


// Methods

/// @brief Method CreateMarker addr 0x2b27b74 size 0x5c virtual false final false
static ::cordl_internals::intptr_t CreateMarker(::StringW name, uint16_t categoryId, Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount) ;

/// @brief Method BeginSample addr 0x2b27cf8 size 0x3c virtual false final false
static void BeginSample(::cordl_internals::intptr_t markerPtr) ;

/// @brief Method EndSample addr 0x2b27dc4 size 0x3c virtual false final false
static void EndSample(::cordl_internals::intptr_t markerPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Profiling::LowLevel::Unsafe
NEED_NO_BOX(Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility, "Unity.Profiling.LowLevel.Unsafe", "ProfilerUnsafeUtility");
