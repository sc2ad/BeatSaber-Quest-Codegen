#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Mail {
class DotAtomReader;
}
// Type: System.Net.Mail::DotAtomReader
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8228))
// CS Name: System.Net.Mail.DotAtomReader
class CORDL_TYPE DotAtomReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DotAtomReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "DotAtomReader", modifiers: " const&", def_value: None }]
constexpr DotAtomReader(DotAtomReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DotAtomReader", modifiers: "&&", def_value: None }]
constexpr DotAtomReader(DotAtomReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DotAtomReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DotAtomReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DotAtomReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DotAtomReader& operator=(DotAtomReader&& o) noexcept = default;
  constexpr DotAtomReader& operator=(DotAtomReader const& o) noexcept = default;
                


// Methods

/// @brief Method ReadReverse addr 0x276f3d0 size 0x254 virtual false final false
static int32_t ReadReverse(::StringW data, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mail
NEED_NO_BOX(System::Net::Mail::DotAtomReader);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::DotAtomReader, "System.Net.Mail", "DotAtomReader");
