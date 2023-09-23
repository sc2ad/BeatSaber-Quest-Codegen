#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__Base64Encoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Xml {
class XmlRawWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlRawWriterBase64Encoder;
}
// Type: System.Xml::XmlRawWriterBase64Encoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11346))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11347))
// CS Name: System.Xml.XmlRawWriterBase64Encoder
class CORDL_TYPE XmlRawWriterBase64Encoder : public System::Xml::Base64Encoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlRawWriterBase64Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlRawWriterBase64Encoder", modifiers: " const&", def_value: None }]
constexpr XmlRawWriterBase64Encoder(XmlRawWriterBase64Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlRawWriterBase64Encoder", modifiers: "&&", def_value: None }]
constexpr XmlRawWriterBase64Encoder(XmlRawWriterBase64Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlRawWriterBase64Encoder(void* ptr) noexcept : System::Xml::Base64Encoder(ptr) {
}


  constexpr XmlRawWriterBase64Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlRawWriterBase64Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlRawWriterBase64Encoder& operator=(XmlRawWriterBase64Encoder&& o) noexcept = default;
  constexpr XmlRawWriterBase64Encoder& operator=(XmlRawWriterBase64Encoder const& o) noexcept = default;
                


// Fields

 System::Xml::XmlRawWriter __declspec(property(get=__get_rawWriter, put=__set_rawWriter))  rawWriter;

constexpr void __set_rawWriter(System::Xml::XmlRawWriter value) ;

constexpr System::Xml::XmlRawWriter __get_rawWriter() const;


// Methods

// Ctor Parameters [CppParam { name: "rawWriter", ty: "System::Xml::XmlRawWriter", modifiers: "", def_value: None }]
explicit XmlRawWriterBase64Encoder(System::Xml::XmlRawWriter rawWriter) ;

/// @brief Method .ctor addr 0x26bb260 size 0x24 virtual false final false
 void _ctor(System::Xml::XmlRawWriter rawWriter) ;

/// @brief Method WriteChars addr 0x26bb284 size 0x24 virtual true final false
 void WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlRawWriterBase64Encoder);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlRawWriterBase64Encoder, "System.Xml", "XmlRawWriterBase64Encoder");
