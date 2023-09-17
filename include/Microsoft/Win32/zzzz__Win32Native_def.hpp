#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Microsoft::Win32 {
class Win32Native;
}
// Type: Microsoft.Win32::Win32Native
namespace Microsoft::Win32 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2296))
// CS Name: Microsoft.Win32.Win32Native
class CORDL_TYPE Win32Native : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Win32Native() = default;

// Ctor Parameters [CppParam { name: "", ty: "Win32Native", modifiers: " const&", def_value: None }]
constexpr Win32Native(Win32Native const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Win32Native", modifiers: "&&", def_value: None }]
constexpr Win32Native(Win32Native&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Win32Native(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Win32Native& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Win32Native& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Win32Native& operator=(Win32Native&& o) noexcept = default;
  constexpr Win32Native& operator=(Win32Native const& o) noexcept = default;
                


// Methods

/// @brief Method GetMessage addr 0x22be7f0 size 0x5c virtual false final false
static ::StringW GetMessage(int32_t hr) ;

/// @brief Method MakeHRFromErrorCode addr 0x22be84c size 0xc virtual false final false
static int32_t MakeHRFromErrorCode(int32_t errorCode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32
} // end anonymous namespace
NEED_NO_BOX(::Microsoft::Win32::Win32Native);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::Win32Native, "Microsoft.Win32", "Win32Native");
