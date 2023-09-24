#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg {
class LiteralDataPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpLiteralData;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpLiteralData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1650))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpLiteralData
class CORDL_TYPE PgpLiteralData : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpLiteralData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpLiteralData", modifiers: " const&", def_value: None }]
constexpr PgpLiteralData(PgpLiteralData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpLiteralData", modifiers: "&&", def_value: None }]
constexpr PgpLiteralData(PgpLiteralData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpLiteralData(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpLiteralData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpLiteralData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpLiteralData& operator=(PgpLiteralData&& o) noexcept = default;
  constexpr PgpLiteralData& operator=(PgpLiteralData const& o) noexcept = default;
                


// Fields

/// @brief Field Binary offset 0
static constexpr char16_t  Binary{b};

/// @brief Field Text offset 0
static constexpr char16_t  Text{t};

/// @brief Field Utf8 offset 0
static constexpr char16_t  Utf8{u};

/// @brief Field Console offset 0
static constexpr ::ConstString  Console{u"_CONSOLE"};

 Org::BouncyCastle::Bcpg::LiteralDataPacket __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Bcpg::LiteralDataPacket value) ;

constexpr Org::BouncyCastle::Bcpg::LiteralDataPacket __get_data() const;


// Properties

 int32_t __declspec(property(get=get_Format))  Format;

 ::StringW __declspec(property(get=get_FileName))  FileName;

 System::DateTime __declspec(property(get=get_ModificationTime))  ModificationTime;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method .ctor addr 0x1023d80 size 0x120 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method get_Format addr 0x1023ea0 size 0x1c virtual false final false
 int32_t get_Format() ;

/// @brief Method get_FileName addr 0x1023ebc size 0x1c virtual false final false
 ::StringW get_FileName() ;

/// @brief Method GetRawFileName addr 0x1023ed8 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetRawFileName() ;

/// @brief Method get_ModificationTime addr 0x1023ef4 size 0x68 virtual false final false
 System::DateTime get_ModificationTime() ;

/// @brief Method GetInputStream addr 0x1023f5c size 0x1c virtual false final false
 System::IO::Stream GetInputStream() ;

/// @brief Method GetDataStream addr 0x1023f78 size 0x1c virtual false final false
 System::IO::Stream GetDataStream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpLiteralData");
