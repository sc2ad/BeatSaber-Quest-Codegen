#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
// Type: Oculus.Platform.Models::LaunchBlockFlowResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13421))
// CS Name: Oculus.Platform.Models.LaunchBlockFlowResult
class CORDL_TYPE LaunchBlockFlowResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LaunchBlockFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: " const&", def_value: None }]
constexpr LaunchBlockFlowResult(LaunchBlockFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: "&&", def_value: None }]
constexpr LaunchBlockFlowResult(LaunchBlockFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LaunchBlockFlowResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LaunchBlockFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LaunchBlockFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LaunchBlockFlowResult& operator=(LaunchBlockFlowResult&& o) noexcept = default;
  constexpr LaunchBlockFlowResult& operator=(LaunchBlockFlowResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_DidBlock, put=__set_DidBlock))  DidBlock;

constexpr void __set_DidBlock(bool value) ;

constexpr bool __get_DidBlock() const;

 bool __declspec(property(get=__get_DidCancel, put=__set_DidCancel))  DidCancel;

constexpr void __set_DidCancel(bool value) ;

constexpr bool __get_DidCancel() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LaunchBlockFlowResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f164 size 0x90 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchBlockFlowResult, "Oculus.Platform.Models", "LaunchBlockFlowResult");
