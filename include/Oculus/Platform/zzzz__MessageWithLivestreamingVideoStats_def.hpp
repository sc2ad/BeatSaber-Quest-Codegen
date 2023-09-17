#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingVideoStats;
}
// Type: Oculus.Platform::MessageWithLivestreamingVideoStats
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13436)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4455 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13251))
// CS Name: Oculus.Platform.MessageWithLivestreamingVideoStats
class CORDL_TYPE MessageWithLivestreamingVideoStats : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingVideoStats> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLivestreamingVideoStats() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingVideoStats", modifiers: " const&", def_value: None }]
constexpr MessageWithLivestreamingVideoStats(MessageWithLivestreamingVideoStats const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingVideoStats", modifiers: "&&", def_value: None }]
constexpr MessageWithLivestreamingVideoStats(MessageWithLivestreamingVideoStats&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLivestreamingVideoStats(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingVideoStats>(ptr) {
}


  constexpr MessageWithLivestreamingVideoStats& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLivestreamingVideoStats& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLivestreamingVideoStats& operator=(MessageWithLivestreamingVideoStats&& o) noexcept = default;
  constexpr MessageWithLivestreamingVideoStats& operator=(MessageWithLivestreamingVideoStats const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLivestreamingVideoStats(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2582130 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLivestreamingVideoStats addr 0x2582188 size 0x3c virtual true final false
 ::Oculus::Platform::Models::LivestreamingVideoStats GetLivestreamingVideoStats() ;

/// @brief Method GetDataFromMessage addr 0x25821c4 size 0x9c virtual true final false
 ::Oculus::Platform::Models::LivestreamingVideoStats GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingVideoStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingVideoStats, "Oculus.Platform", "MessageWithLivestreamingVideoStats");
