#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
// Type: Oculus.Platform.Models::LaunchUnblockFlowResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13426))
// CS Name: Oculus.Platform.Models.LaunchUnblockFlowResult
class CORDL_TYPE LaunchUnblockFlowResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LaunchUnblockFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchUnblockFlowResult", modifiers: " const&", def_value: None }]
constexpr LaunchUnblockFlowResult(LaunchUnblockFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchUnblockFlowResult", modifiers: "&&", def_value: None }]
constexpr LaunchUnblockFlowResult(LaunchUnblockFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LaunchUnblockFlowResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LaunchUnblockFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LaunchUnblockFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LaunchUnblockFlowResult& operator=(LaunchUnblockFlowResult&& o) noexcept = default;
  constexpr LaunchUnblockFlowResult& operator=(LaunchUnblockFlowResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_DidCancel, put=__set_DidCancel))  DidCancel;

constexpr void __set_DidCancel(bool value) ;

constexpr bool __get_DidCancel() const;

 bool __declspec(property(get=__get_DidUnblock, put=__set_DidUnblock))  DidUnblock;

constexpr void __set_DidUnblock(bool value) ;

constexpr bool __get_DidUnblock() const;


// Methods

static Oculus::Platform::Models::LaunchUnblockFlowResult New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f510 size 0x90 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LaunchUnblockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchUnblockFlowResult, "Oculus.Platform.Models", "LaunchUnblockFlowResult");
