#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
namespace Org::BouncyCastle::Bcpg {
class CompressedDataPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedData;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpCompressedData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1629))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedData
class CORDL_TYPE PgpCompressedData : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpCompressedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpCompressedData", modifiers: " const&", def_value: None }]
constexpr PgpCompressedData(PgpCompressedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpCompressedData", modifiers: "&&", def_value: None }]
constexpr PgpCompressedData(PgpCompressedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpCompressedData(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpCompressedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpCompressedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpCompressedData& operator=(PgpCompressedData&& o) noexcept = default;
  constexpr PgpCompressedData& operator=(PgpCompressedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::CompressedDataPacket __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Bcpg::CompressedDataPacket value) ;

constexpr Org::BouncyCastle::Bcpg::CompressedDataPacket __get_data() const;


// Properties

 Org::BouncyCastle::Bcpg::CompressionAlgorithmTag __declspec(property(get=get_Algorithm))  Algorithm;


// Methods

// Ctor Parameters [CppParam { name: "bcpgInput", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit PgpCompressedData(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method .ctor addr 0x1019104 size 0x120 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method get_Algorithm addr 0x1019224 size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::CompressionAlgorithmTag get_Algorithm() ;

/// @brief Method GetInputStream addr 0x1019240 size 0x1c virtual false final false
 System::IO::Stream GetInputStream() ;

/// @brief Method GetDataStream addr 0x101925c size 0x178 virtual false final false
 System::IO::Stream GetDataStream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedData");
