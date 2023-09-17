#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__Ucs4Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding1234;
}
// Type: System.Xml::Ucs4Encoding1234
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11500))
// CS Name: System.Xml.Ucs4Encoding1234
class CORDL_TYPE Ucs4Encoding1234 : public ::System::Xml::Ucs4Encoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Ucs4Encoding1234() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding1234", modifiers: " const&", def_value: None }]
constexpr Ucs4Encoding1234(Ucs4Encoding1234 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding1234", modifiers: "&&", def_value: None }]
constexpr Ucs4Encoding1234(Ucs4Encoding1234&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ucs4Encoding1234(void* ptr) noexcept : ::System::Xml::Ucs4Encoding(ptr) {
}


  constexpr Ucs4Encoding1234& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ucs4Encoding1234& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ucs4Encoding1234& operator=(Ucs4Encoding1234&& o) noexcept = default;
  constexpr Ucs4Encoding1234& operator=(Ucs4Encoding1234 const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_EncodingName))  EncodingName;


// Methods

// Ctor Parameters []
explicit Ucs4Encoding1234() ;

/// @brief Method .ctor addr 0x2712468 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method get_EncodingName addr 0x271265c size 0x40 virtual true final false
 ::StringW get_EncodingName() ;

/// @brief Method GetPreamble addr 0x271269c size 0x78 virtual true final false
 ::ArrayW<uint8_t> GetPreamble() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Ucs4Encoding1234);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding1234, "System.Xml", "Ucs4Encoding1234");
