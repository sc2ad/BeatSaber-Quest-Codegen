#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__Ucs4Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding2143;
}
// Type: System.Xml::Ucs4Encoding2143
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11502))
// CS Name: System.Xml.Ucs4Encoding2143
class CORDL_TYPE Ucs4Encoding2143 : public ::System::Xml::Ucs4Encoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Ucs4Encoding2143() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding2143", modifiers: " const&", def_value: None }]
constexpr Ucs4Encoding2143(Ucs4Encoding2143 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding2143", modifiers: "&&", def_value: None }]
constexpr Ucs4Encoding2143(Ucs4Encoding2143&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ucs4Encoding2143(void* ptr) noexcept : ::System::Xml::Ucs4Encoding(ptr) {
}


  constexpr Ucs4Encoding2143& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ucs4Encoding2143& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ucs4Encoding2143& operator=(Ucs4Encoding2143&& o) noexcept = default;
  constexpr Ucs4Encoding2143& operator=(Ucs4Encoding2143 const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_EncodingName))  EncodingName;


// Methods

// Ctor Parameters []
explicit Ucs4Encoding2143() ;

/// @brief Method .ctor addr 0x2712528 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method get_EncodingName addr 0x27127d0 size 0x40 virtual true final false
 ::StringW get_EncodingName() ;

/// @brief Method GetPreamble addr 0x2712810 size 0x78 virtual true final false
 ::ArrayW<uint8_t> GetPreamble() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Ucs4Encoding2143);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding2143, "System.Xml", "Ucs4Encoding2143");
