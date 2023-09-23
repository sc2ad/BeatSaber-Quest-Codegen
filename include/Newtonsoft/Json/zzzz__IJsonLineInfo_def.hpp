#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
// Type: Newtonsoft.Json::IJsonLineInfo
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11755))
// CS Name: Newtonsoft.Json.IJsonLineInfo
class CORDL_TYPE IJsonLineInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IJsonLineInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IJsonLineInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_LineNumber))  LineNumber;

 int32_t __declspec(property(get=get_LinePosition))  LinePosition;


// Methods

/// @brief Method HasLineInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 bool HasLineInfo() ;

/// @brief Method get_LineNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LineNumber() ;

/// @brief Method get_LinePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LinePosition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::IJsonLineInfo);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::IJsonLineInfo, "Newtonsoft.Json", "IJsonLineInfo");
