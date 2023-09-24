#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
// Type: Oculus.Platform.Models::LivestreamingVideoStats
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13436))
// CS Name: Oculus.Platform.Models.LivestreamingVideoStats
class CORDL_TYPE LivestreamingVideoStats : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LivestreamingVideoStats() = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingVideoStats", modifiers: " const&", def_value: None }]
constexpr LivestreamingVideoStats(LivestreamingVideoStats const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingVideoStats", modifiers: "&&", def_value: None }]
constexpr LivestreamingVideoStats(LivestreamingVideoStats&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LivestreamingVideoStats(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LivestreamingVideoStats& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LivestreamingVideoStats& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LivestreamingVideoStats& operator=(LivestreamingVideoStats&& o) noexcept = default;
  constexpr LivestreamingVideoStats& operator=(LivestreamingVideoStats const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_CommentCount, put=__set_CommentCount))  CommentCount;

constexpr void __set_CommentCount(int32_t value) ;

constexpr int32_t __get_CommentCount() const;

 int32_t __declspec(property(get=__get_ReactionCount, put=__set_ReactionCount))  ReactionCount;

constexpr void __set_ReactionCount(int32_t value) ;

constexpr int32_t __get_ReactionCount() const;

 ::StringW __declspec(property(get=__get_TotalViews, put=__set_TotalViews))  TotalViews;

constexpr void __set_TotalViews(::StringW value) ;

constexpr ::StringW __get_TotalViews() const;


// Methods

static Oculus::Platform::Models::LivestreamingVideoStats New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a013c size 0x98 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LivestreamingVideoStats);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingVideoStats, "Oculus.Platform.Models", "LivestreamingVideoStats");
