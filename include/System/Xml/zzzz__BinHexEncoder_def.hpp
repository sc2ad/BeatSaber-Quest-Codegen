#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class BinHexEncoder;
}
// Type: System.Xml::BinHexEncoder
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11349))
// CS Name: System.Xml.BinHexEncoder
class CORDL_TYPE BinHexEncoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BinHexEncoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinHexEncoder", modifiers: " const&", def_value: None }]
constexpr BinHexEncoder(BinHexEncoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinHexEncoder", modifiers: "&&", def_value: None }]
constexpr BinHexEncoder(BinHexEncoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinHexEncoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinHexEncoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinHexEncoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinHexEncoder& operator=(BinHexEncoder&& o) noexcept = default;
  constexpr BinHexEncoder& operator=(BinHexEncoder const& o) noexcept = default;
                


// Methods

/// @brief Method Encode addr 0x26bb7c4 size 0x1a8 virtual false final false
static void Encode(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, ::System::Xml::XmlWriter writer) ;

/// @brief Method Encode addr 0x26bba90 size 0x14c virtual false final false
static ::StringW Encode(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t count) ;

/// @brief Method Encode addr 0x26bb96c size 0x124 virtual false final false
static int32_t Encode(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t count, ::ArrayW<char16_t> outArray) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::BinHexEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinHexEncoder, "System.Xml", "BinHexEncoder");
