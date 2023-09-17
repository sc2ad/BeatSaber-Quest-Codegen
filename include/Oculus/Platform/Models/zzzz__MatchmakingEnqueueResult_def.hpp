#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
// Type: Oculus.Platform.Models::MatchmakingEnqueueResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13443))
// CS Name: Oculus.Platform.Models.MatchmakingEnqueueResult
class CORDL_TYPE MatchmakingEnqueueResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MatchmakingEnqueueResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResult", modifiers: " const&", def_value: None }]
constexpr MatchmakingEnqueueResult(MatchmakingEnqueueResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResult", modifiers: "&&", def_value: None }]
constexpr MatchmakingEnqueueResult(MatchmakingEnqueueResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingEnqueueResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingEnqueueResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingEnqueueResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingEnqueueResult& operator=(MatchmakingEnqueueResult&& o) noexcept = default;
  constexpr MatchmakingEnqueueResult& operator=(MatchmakingEnqueueResult const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::Models::MatchmakingAdminSnapshot __declspec(property(get=__get_AdminSnapshotOptional, put=__set_AdminSnapshotOptional))  AdminSnapshotOptional;

constexpr void __set_AdminSnapshotOptional(::Oculus::Platform::Models::MatchmakingAdminSnapshot value) ;

constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot __get_AdminSnapshotOptional() const;

 ::Oculus::Platform::Models::MatchmakingAdminSnapshot __declspec(property(get=__get_AdminSnapshot, put=__set_AdminSnapshot))  AdminSnapshot;

constexpr void __set_AdminSnapshot(::Oculus::Platform::Models::MatchmakingAdminSnapshot value) ;

constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot __get_AdminSnapshot() const;

 uint32_t __declspec(property(get=__get_AverageWait, put=__set_AverageWait))  AverageWait;

constexpr void __set_AverageWait(uint32_t value) ;

constexpr uint32_t __get_AverageWait() const;

 uint32_t __declspec(property(get=__get_MatchesInLastHourCount, put=__set_MatchesInLastHourCount))  MatchesInLastHourCount;

constexpr void __set_MatchesInLastHourCount(uint32_t value) ;

constexpr uint32_t __get_MatchesInLastHourCount() const;

 uint32_t __declspec(property(get=__get_MaxExpectedWait, put=__set_MaxExpectedWait))  MaxExpectedWait;

constexpr void __set_MaxExpectedWait(uint32_t value) ;

constexpr uint32_t __get_MaxExpectedWait() const;

 ::StringW __declspec(property(get=__get_Pool, put=__set_Pool))  Pool;

constexpr void __set_Pool(::StringW value) ;

constexpr ::StringW __get_Pool() const;

 uint32_t __declspec(property(get=__get_RecentMatchPercentage, put=__set_RecentMatchPercentage))  RecentMatchPercentage;

constexpr void __set_RecentMatchPercentage(uint32_t value) ;

constexpr uint32_t __get_RecentMatchPercentage() const;

 ::StringW __declspec(property(get=__get_RequestHash, put=__set_RequestHash))  RequestHash;

constexpr void __set_RequestHash(::StringW value) ;

constexpr ::StringW __get_RequestHash() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingEnqueueResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a0680 size 0x168 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingEnqueueResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingEnqueueResult, "Oculus.Platform.Models", "MatchmakingEnqueueResult");
