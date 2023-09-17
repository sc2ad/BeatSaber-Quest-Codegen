#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
// Type: Oculus.Platform.Models::LaunchFriendRequestFlowResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13423))
// CS Name: Oculus.Platform.Models.LaunchFriendRequestFlowResult
class CORDL_TYPE LaunchFriendRequestFlowResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LaunchFriendRequestFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchFriendRequestFlowResult", modifiers: " const&", def_value: None }]
constexpr LaunchFriendRequestFlowResult(LaunchFriendRequestFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchFriendRequestFlowResult", modifiers: "&&", def_value: None }]
constexpr LaunchFriendRequestFlowResult(LaunchFriendRequestFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LaunchFriendRequestFlowResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LaunchFriendRequestFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LaunchFriendRequestFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LaunchFriendRequestFlowResult& operator=(LaunchFriendRequestFlowResult&& o) noexcept = default;
  constexpr LaunchFriendRequestFlowResult& operator=(LaunchFriendRequestFlowResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_DidCancel, put=__set_DidCancel))  DidCancel;

constexpr void __set_DidCancel(bool value) ;

constexpr bool __get_DidCancel() const;

 bool __declspec(property(get=__get_DidSendRequest, put=__set_DidSendRequest))  DidSendRequest;

constexpr void __set_DidSendRequest(bool value) ;

constexpr bool __get_DidSendRequest() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LaunchFriendRequestFlowResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f344 size 0x90 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::LaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchFriendRequestFlowResult, "Oculus.Platform.Models", "LaunchFriendRequestFlowResult");
