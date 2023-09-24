#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Text {
class StringBuilder;
}
namespace Org::BouncyCastle::Asn1 {
class DerApplicationSpecific;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Utilities {
class Asn1Dump;
}
// Type: Org.BouncyCastle.Asn1.Utilities::Asn1Dump
namespace Org::BouncyCastle::Asn1::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(320))
// CS Name: Org.BouncyCastle.Asn1.Utilities.Asn1Dump
class CORDL_TYPE Asn1Dump : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Asn1Dump() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Dump", modifiers: " const&", def_value: None }]
constexpr Asn1Dump(Asn1Dump const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Dump", modifiers: "&&", def_value: None }]
constexpr Asn1Dump(Asn1Dump&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Dump(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1Dump& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Dump& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Dump& operator=(Asn1Dump&& o) noexcept = default;
  constexpr Asn1Dump& operator=(Asn1Dump const& o) noexcept = default;
                


// Fields

/// @brief Field Tab offset 0
static constexpr ::ConstString  Tab{u"    "};

/// @brief Field SampleSize offset 0
static constexpr int32_t  SampleSize{32};

static ::StringW __declspec(property(get=__get_NewLine, put=__set_NewLine))  NewLine;

static void __set_NewLine(::StringW value) ;

static ::StringW __get_NewLine() ;


// Methods

static Org::BouncyCastle::Asn1::Utilities::Asn1Dump New_ctor() ;

/// @brief Method .ctor addr 0xfedf64 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method AsString addr 0xfedf6c size 0x2664 virtual false final false
static void AsString(::StringW indent, bool verbose, Org::BouncyCastle::Asn1::Asn1Object obj, System::Text::StringBuilder buf) ;

/// @brief Method outputApplicationSpecific addr 0xff0838 size 0x8d4 virtual false final false
static ::StringW outputApplicationSpecific(::StringW type, ::StringW indent, bool verbose, Org::BouncyCastle::Asn1::DerApplicationSpecific app) ;

/// @brief Method DumpAsString addr 0xff110c size 0x184 virtual false final false
static ::StringW DumpAsString(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method DumpAsString addr 0xff1290 size 0x58 virtual false final false
static ::StringW DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method DumpAsString addr 0xff12e8 size 0xd8 virtual false final false
static ::StringW DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable obj, bool verbose) ;

/// @brief Method dumpBinaryDataAsString addr 0xff05d0 size 0x268 virtual false final false
static ::StringW dumpBinaryDataAsString(::StringW indent, ::ArrayW<uint8_t> bytes) ;

/// @brief Method calculateAscString addr 0xff13c0 size 0xb8 virtual false final false
static ::StringW calculateAscString(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Utilities
NEED_NO_BOX(Org::BouncyCastle::Asn1::Utilities::Asn1Dump);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Utilities::Asn1Dump, "Org.BouncyCastle.Asn1.Utilities", "Asn1Dump");
