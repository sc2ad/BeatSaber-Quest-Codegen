#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
// Type: Oculus.Platform.Models::LivestreamingStartResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13434))
// CS Name: Oculus.Platform.Models.LivestreamingStartResult
class CORDL_TYPE LivestreamingStartResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LivestreamingStartResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingStartResult", modifiers: " const&", def_value: None }]
constexpr LivestreamingStartResult(LivestreamingStartResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingStartResult", modifiers: "&&", def_value: None }]
constexpr LivestreamingStartResult(LivestreamingStartResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LivestreamingStartResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LivestreamingStartResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LivestreamingStartResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LivestreamingStartResult& operator=(LivestreamingStartResult&& o) noexcept = default;
  constexpr LivestreamingStartResult& operator=(LivestreamingStartResult const& o) noexcept = default;
                


// Fields

 Oculus::Platform::LivestreamingStartStatus __declspec(property(get=__get_StreamingResult, put=__set_StreamingResult))  StreamingResult;

constexpr void __set_StreamingResult(Oculus::Platform::LivestreamingStartStatus value) ;

constexpr Oculus::Platform::LivestreamingStartStatus __get_StreamingResult() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LivestreamingStartResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259fffc size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingStartResult, "Oculus.Platform.Models", "LivestreamingStartResult");
