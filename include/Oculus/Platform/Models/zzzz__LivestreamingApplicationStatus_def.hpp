#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
// Type: Oculus.Platform.Models::LivestreamingApplicationStatus
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13433))
// CS Name: Oculus.Platform.Models.LivestreamingApplicationStatus
class CORDL_TYPE LivestreamingApplicationStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LivestreamingApplicationStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingApplicationStatus", modifiers: " const&", def_value: None }]
constexpr LivestreamingApplicationStatus(LivestreamingApplicationStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingApplicationStatus", modifiers: "&&", def_value: None }]
constexpr LivestreamingApplicationStatus(LivestreamingApplicationStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LivestreamingApplicationStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LivestreamingApplicationStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LivestreamingApplicationStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LivestreamingApplicationStatus& operator=(LivestreamingApplicationStatus&& o) noexcept = default;
  constexpr LivestreamingApplicationStatus& operator=(LivestreamingApplicationStatus const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_StreamingEnabled, put=__set_StreamingEnabled))  StreamingEnabled;

constexpr void __set_StreamingEnabled(bool value) ;

constexpr bool __get_StreamingEnabled() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LivestreamingApplicationStatus(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259ff80 size 0x7c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingApplicationStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingApplicationStatus, "Oculus.Platform.Models", "LivestreamingApplicationStatus");
