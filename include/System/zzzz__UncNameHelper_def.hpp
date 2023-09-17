#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
class UncNameHelper;
}
// Type: System::UncNameHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7740))
// CS Name: System.UncNameHelper
class CORDL_TYPE UncNameHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UncNameHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "UncNameHelper", modifiers: " const&", def_value: None }]
constexpr UncNameHelper(UncNameHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UncNameHelper", modifiers: "&&", def_value: None }]
constexpr UncNameHelper(UncNameHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UncNameHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UncNameHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UncNameHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UncNameHelper& operator=(UncNameHelper&& o) noexcept = default;
  constexpr UncNameHelper& operator=(UncNameHelper const& o) noexcept = default;
                


// Methods

/// @brief Method ParseCanonicalName addr 0x27bb76c size 0x4 virtual false final false
static ::StringW ParseCanonicalName(::StringW str, int32_t start, int32_t end, ByRef<bool> loopback) ;

/// @brief Method IsValid addr 0x27bb770 size 0x2d8 virtual false final false
static bool IsValid(void* name, uint16_t start, ByRef<int32_t> returnedEnd, bool notImplicitFile) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::UncNameHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::UncNameHelper, "System", "UncNameHelper");
