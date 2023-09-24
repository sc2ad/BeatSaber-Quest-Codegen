#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class WrappedGeneratorStream;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::WrappedGeneratorStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1678))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.WrappedGeneratorStream
class CORDL_TYPE WrappedGeneratorStream : public Org::BouncyCastle::Utilities::IO::FilterStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~WrappedGeneratorStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "WrappedGeneratorStream", modifiers: " const&", def_value: None }]
constexpr WrappedGeneratorStream(WrappedGeneratorStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WrappedGeneratorStream", modifiers: "&&", def_value: None }]
constexpr WrappedGeneratorStream(WrappedGeneratorStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WrappedGeneratorStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::FilterStream(ptr) {
}


  constexpr WrappedGeneratorStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WrappedGeneratorStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WrappedGeneratorStream& operator=(WrappedGeneratorStream&& o) noexcept = default;
  constexpr WrappedGeneratorStream& operator=(WrappedGeneratorStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator __declspec(property(get=__get_gen, put=__set_gen))  gen;

constexpr void __set_gen(Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator __get_gen() const;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream New_ctor(Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator gen, System::IO::Stream str) ;

/// @brief Method .ctor addr 0x1043b8c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator gen, System::IO::Stream str) ;

/// @brief Method Close addr 0x1043bb8 size 0xa0 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream, "Org.BouncyCastle.Bcpg.OpenPgp", "WrappedGeneratorStream");
