#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::IO {
class TextWriter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemWriter;
}
// Type: Org.BouncyCastle.OpenSsl::PemWriter
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1690))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1691))
// CS Name: Org.BouncyCastle.OpenSsl.PemWriter
class CORDL_TYPE PemWriter : public Org::BouncyCastle::Utilities::IO::Pem::PemWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PemWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: " const&", def_value: None }]
constexpr PemWriter(PemWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "&&", def_value: None }]
constexpr PemWriter(PemWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemWriter(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::Pem::PemWriter(ptr) {
}


  constexpr PemWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemWriter& operator=(PemWriter&& o) noexcept = default;
  constexpr PemWriter& operator=(PemWriter const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::OpenSsl::PemWriter New_ctor(System::IO::TextWriter writer) ;

/// @brief Method .ctor addr 0x1048c0c size 0x4 virtual false final false
 void _ctor(System::IO::TextWriter writer) ;

/// @brief Method WriteObject addr 0x1048c10 size 0x170 virtual false final false
 void WriteObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method WriteObject addr 0x1048d80 size 0x8c virtual false final false
 void WriteObject(::bs_hook::Il2CppWrapperType obj, ::StringW algorithm, ::ArrayW<char16_t> password, Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
NEED_NO_BOX(Org::BouncyCastle::OpenSsl::PemWriter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::OpenSsl::PemWriter, "Org.BouncyCastle.OpenSsl", "PemWriter");
