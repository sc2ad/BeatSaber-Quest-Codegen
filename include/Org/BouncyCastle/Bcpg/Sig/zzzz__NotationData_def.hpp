#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class NotationData;
}
// Type: Org.BouncyCastle.Bcpg.Sig::NotationData
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(538))
// CS Name: Org.BouncyCastle.Bcpg.Sig.NotationData
class CORDL_TYPE NotationData : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NotationData() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotationData", modifiers: " const&", def_value: None }]
constexpr NotationData(NotationData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotationData", modifiers: "&&", def_value: None }]
constexpr NotationData(NotationData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotationData(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr NotationData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotationData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotationData& operator=(NotationData&& o) noexcept = default;
  constexpr NotationData& operator=(NotationData const& o) noexcept = default;
                


// Fields

/// @brief Field HeaderFlagLength offset 0
static constexpr int32_t  HeaderFlagLength{4};

/// @brief Field HeaderNameLength offset 0
static constexpr int32_t  HeaderNameLength{2};

/// @brief Field HeaderValueLength offset 0
static constexpr int32_t  HeaderValueLength{2};


// Properties

 bool __declspec(property(get=get_IsHumanReadable))  IsHumanReadable;


// Methods

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit NotationData(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113dd3c size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "humanReadable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "notationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "notationValue", ty: "::StringW", modifiers: "", def_value: None }]
explicit NotationData(bool critical, bool humanReadable, ::StringW notationName, ::StringW notationValue) ;

/// @brief Method .ctor addr 0x113dd84 size 0x54 virtual false final false
 void _ctor(bool critical, bool humanReadable, ::StringW notationName, ::StringW notationValue) ;

/// @brief Method CreateData addr 0x113ddd8 size 0x220 virtual false final false
static ::ArrayW<uint8_t> CreateData(bool humanReadable, ::StringW notationName, ::StringW notationValue) ;

/// @brief Method get_IsHumanReadable addr 0x113dff8 size 0x30 virtual false final false
 bool get_IsHumanReadable() ;

/// @brief Method GetNotationName addr 0x113e028 size 0x6c virtual false final false
 ::StringW GetNotationName() ;

/// @brief Method GetNotationValue addr 0x113e094 size 0x90 virtual false final false
 ::StringW GetNotationValue() ;

/// @brief Method GetNotationValueBytes addr 0x113e124 size 0xc4 virtual false final false
 ::ArrayW<uint8_t> GetNotationValueBytes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::NotationData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::NotationData, "Org.BouncyCastle.Bcpg.Sig", "NotationData");
