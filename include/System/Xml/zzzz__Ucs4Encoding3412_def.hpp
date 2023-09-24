#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__Ucs4Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding3412;
}
// Type: System.Xml::Ucs4Encoding3412
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11503))
// CS Name: System.Xml.Ucs4Encoding3412
class CORDL_TYPE Ucs4Encoding3412 : public System::Xml::Ucs4Encoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Ucs4Encoding3412() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding3412", modifiers: " const&", def_value: None }]
constexpr Ucs4Encoding3412(Ucs4Encoding3412 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding3412", modifiers: "&&", def_value: None }]
constexpr Ucs4Encoding3412(Ucs4Encoding3412&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ucs4Encoding3412(void* ptr) noexcept : System::Xml::Ucs4Encoding(ptr) {
}


  constexpr Ucs4Encoding3412& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ucs4Encoding3412& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ucs4Encoding3412& operator=(Ucs4Encoding3412&& o) noexcept = default;
  constexpr Ucs4Encoding3412& operator=(Ucs4Encoding3412 const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_EncodingName))  EncodingName;


// Methods

static System::Xml::Ucs4Encoding3412 New_ctor() ;

/// @brief Method .ctor addr 0x27125e8 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method get_EncodingName addr 0x271288c size 0x40 virtual true final false
 ::StringW get_EncodingName() ;

/// @brief Method GetPreamble addr 0x27128cc size 0x74 virtual true final false
 ::ArrayW<uint8_t> GetPreamble() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::Ucs4Encoding3412);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Ucs4Encoding3412, "System.Xml", "Ucs4Encoding3412");
