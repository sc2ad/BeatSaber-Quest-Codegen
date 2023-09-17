#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Collections::Generic {
class KeyValuePair;
}
// Type: System.Collections.Generic::KeyValuePair
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3825))
// CS Name: System.Collections.Generic.KeyValuePair
class CORDL_TYPE KeyValuePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KeyValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyValuePair", modifiers: " const&", def_value: None }]
constexpr KeyValuePair(KeyValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyValuePair", modifiers: "&&", def_value: None }]
constexpr KeyValuePair(KeyValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyValuePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyValuePair& operator=(KeyValuePair&& o) noexcept = default;
  constexpr KeyValuePair& operator=(KeyValuePair const& o) noexcept = default;
                


// Methods

/// @brief Method PairToString addr 0x241ded4 size 0xc0 virtual false final false
static ::StringW PairToString(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Generic::KeyValuePair);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::KeyValuePair, "System.Collections.Generic", "KeyValuePair");
