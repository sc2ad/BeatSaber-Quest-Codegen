#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HashCodeCalculator;
}
// Type: System.Net.Http.Headers::HashCodeCalculator
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14826))
// CS Name: System.Net.Http.Headers.HashCodeCalculator
class CORDL_TYPE HashCodeCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashCodeCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashCodeCalculator", modifiers: " const&", def_value: None }]
constexpr HashCodeCalculator(HashCodeCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashCodeCalculator", modifiers: "&&", def_value: None }]
constexpr HashCodeCalculator(HashCodeCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashCodeCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashCodeCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashCodeCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashCodeCalculator& operator=(HashCodeCalculator&& o) noexcept = default;
  constexpr HashCodeCalculator& operator=(HashCodeCalculator const& o) noexcept = default;
                


// Methods

/// @brief Method Calculate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t Calculate(::System::Collections::Generic::ICollection_1<T> list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::HashCodeCalculator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HashCodeCalculator, "System.Net.Http.Headers", "HashCodeCalculator");
