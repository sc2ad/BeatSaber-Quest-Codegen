#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResultAndRoom;
}
// Type: Oculus.Platform.Models::MatchmakingEnqueueResultAndRoom
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13444))
// CS Name: Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
class CORDL_TYPE MatchmakingEnqueueResultAndRoom : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MatchmakingEnqueueResultAndRoom() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResultAndRoom", modifiers: " const&", def_value: None }]
constexpr MatchmakingEnqueueResultAndRoom(MatchmakingEnqueueResultAndRoom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResultAndRoom", modifiers: "&&", def_value: None }]
constexpr MatchmakingEnqueueResultAndRoom(MatchmakingEnqueueResultAndRoom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingEnqueueResultAndRoom(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchmakingEnqueueResultAndRoom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingEnqueueResultAndRoom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingEnqueueResultAndRoom& operator=(MatchmakingEnqueueResultAndRoom&& o) noexcept = default;
  constexpr MatchmakingEnqueueResultAndRoom& operator=(MatchmakingEnqueueResultAndRoom const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::Models::MatchmakingEnqueueResult __declspec(property(get=__get_MatchmakingEnqueueResult, put=__set_MatchmakingEnqueueResult))  MatchmakingEnqueueResult;

constexpr void __set_MatchmakingEnqueueResult(::Oculus::Platform::Models::MatchmakingEnqueueResult value) ;

constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResult __get_MatchmakingEnqueueResult() const;

 ::Oculus::Platform::Models::Room __declspec(property(get=__get_Room, put=__set_Room))  Room;

constexpr void __set_Room(::Oculus::Platform::Models::Room value) ;

constexpr ::Oculus::Platform::Models::Room __get_Room() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingEnqueueResultAndRoom(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a0d88 size 0xf4 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom, "Oculus.Platform.Models", "MatchmakingEnqueueResultAndRoom");
