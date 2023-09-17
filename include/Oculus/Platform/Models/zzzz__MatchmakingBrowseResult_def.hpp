#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
namespace Oculus::Platform::Models {
class RoomList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingBrowseResult;
}
// Type: Oculus.Platform.Models::MatchmakingBrowseResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13440))
// CS Name: Oculus.Platform.Models.MatchmakingBrowseResult
class CORDL_TYPE MatchmakingBrowseResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MatchmakingBrowseResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingBrowseResult", modifiers: " const&", def_value: None }]
constexpr MatchmakingBrowseResult(MatchmakingBrowseResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingBrowseResult", modifiers: "&&", def_value: None }]
constexpr MatchmakingBrowseResult(MatchmakingBrowseResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingBrowseResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingBrowseResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingBrowseResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingBrowseResult& operator=(MatchmakingBrowseResult&& o) noexcept = default;
  constexpr MatchmakingBrowseResult& operator=(MatchmakingBrowseResult const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::Models::MatchmakingEnqueueResult __declspec(property(get=__get_EnqueueResult, put=__set_EnqueueResult))  EnqueueResult;

constexpr void __set_EnqueueResult(::Oculus::Platform::Models::MatchmakingEnqueueResult value) ;

constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResult __get_EnqueueResult() const;

 ::Oculus::Platform::Models::RoomList __declspec(property(get=__get_Rooms, put=__set_Rooms))  Rooms;

constexpr void __set_Rooms(::Oculus::Platform::Models::RoomList value) ;

constexpr ::Oculus::Platform::Models::RoomList __get_Rooms() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingBrowseResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a058c size 0xf4 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingBrowseResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingBrowseResult, "Oculus.Platform.Models", "MatchmakingBrowseResult");
