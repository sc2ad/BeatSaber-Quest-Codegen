#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Collections::Generic {
class IntrospectiveSortUtilities;
}
// Type: System.Collections.Generic::IntrospectiveSortUtilities
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3847))
// CS Name: System.Collections.Generic.IntrospectiveSortUtilities
class CORDL_TYPE IntrospectiveSortUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IntrospectiveSortUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntrospectiveSortUtilities", modifiers: " const&", def_value: None }]
constexpr IntrospectiveSortUtilities(IntrospectiveSortUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntrospectiveSortUtilities", modifiers: "&&", def_value: None }]
constexpr IntrospectiveSortUtilities(IntrospectiveSortUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntrospectiveSortUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntrospectiveSortUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntrospectiveSortUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntrospectiveSortUtilities& operator=(IntrospectiveSortUtilities&& o) noexcept = default;
  constexpr IntrospectiveSortUtilities& operator=(IntrospectiveSortUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method FloorLog2PlusOne addr 0x241df94 size 0x34 virtual false final false
static int32_t FloorLog2PlusOne(int32_t n) ;

/// @brief Method ThrowOrIgnoreBadComparer addr 0x241dfc8 size 0x68 virtual false final false
static void ThrowOrIgnoreBadComparer(::bs_hook::Il2CppWrapperType comparer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
NEED_NO_BOX(System::Collections::Generic::IntrospectiveSortUtilities);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::IntrospectiveSortUtilities, "System.Collections.Generic", "IntrospectiveSortUtilities");
