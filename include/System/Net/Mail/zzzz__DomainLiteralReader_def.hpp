#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Mail {
class DomainLiteralReader;
}
// Type: System.Net.Mail::DomainLiteralReader
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8227))
// CS Name: System.Net.Mail.DomainLiteralReader
class CORDL_TYPE DomainLiteralReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DomainLiteralReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "DomainLiteralReader", modifiers: " const&", def_value: None }]
constexpr DomainLiteralReader(DomainLiteralReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DomainLiteralReader", modifiers: "&&", def_value: None }]
constexpr DomainLiteralReader(DomainLiteralReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DomainLiteralReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DomainLiteralReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DomainLiteralReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DomainLiteralReader& operator=(DomainLiteralReader&& o) noexcept = default;
  constexpr DomainLiteralReader& operator=(DomainLiteralReader const& o) noexcept = default;
                


// Methods

/// @brief Method ReadReverse addr 0x276ee08 size 0x228 virtual false final false
static int32_t ReadReverse(::StringW data, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mail
NEED_NO_BOX(System::Net::Mail::DomainLiteralReader);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::DomainLiteralReader, "System.Net.Mail", "DomainLiteralReader");
