#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
// Type: Oculus.Platform.Models::LaunchReportFlowResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13425))
// CS Name: Oculus.Platform.Models.LaunchReportFlowResult
class CORDL_TYPE LaunchReportFlowResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LaunchReportFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchReportFlowResult", modifiers: " const&", def_value: None }]
constexpr LaunchReportFlowResult(LaunchReportFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchReportFlowResult", modifiers: "&&", def_value: None }]
constexpr LaunchReportFlowResult(LaunchReportFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LaunchReportFlowResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LaunchReportFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LaunchReportFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LaunchReportFlowResult& operator=(LaunchReportFlowResult&& o) noexcept = default;
  constexpr LaunchReportFlowResult& operator=(LaunchReportFlowResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_DidCancel, put=__set_DidCancel))  DidCancel;

constexpr void __set_DidCancel(bool value) ;

constexpr bool __get_DidCancel() const;

 uint64_t __declspec(property(get=__get_UserReportId, put=__set_UserReportId))  UserReportId;

constexpr void __set_UserReportId(uint64_t value) ;

constexpr uint64_t __get_UserReportId() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LaunchReportFlowResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f484 size 0x8c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::LaunchReportFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchReportFlowResult, "Oculus.Platform.Models", "LaunchReportFlowResult");
