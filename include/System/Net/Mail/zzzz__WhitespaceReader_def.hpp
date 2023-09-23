#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Mail {
class WhitespaceReader;
}
// Type: System.Net.Mail::WhitespaceReader
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8232))
// CS Name: System.Net.Mail.WhitespaceReader
class CORDL_TYPE WhitespaceReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WhitespaceReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "WhitespaceReader", modifiers: " const&", def_value: None }]
constexpr WhitespaceReader(WhitespaceReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WhitespaceReader", modifiers: "&&", def_value: None }]
constexpr WhitespaceReader(WhitespaceReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WhitespaceReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WhitespaceReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WhitespaceReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WhitespaceReader& operator=(WhitespaceReader&& o) noexcept = default;
  constexpr WhitespaceReader& operator=(WhitespaceReader const& o) noexcept = default;
                


// Methods

/// @brief Method ReadFwsReverse addr 0x276f030 size 0x20c virtual false final false
static int32_t ReadFwsReverse(::StringW data, int32_t index) ;

/// @brief Method ReadCfwsReverse addr 0x277006c size 0x2e0 virtual false final false
static int32_t ReadCfwsReverse(::StringW data, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mail
NEED_NO_BOX(System::Net::Mail::WhitespaceReader);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::WhitespaceReader, "System.Net.Mail", "WhitespaceReader");
