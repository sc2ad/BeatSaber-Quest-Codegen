#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class IDtdAttributeInfo;
}
// Forward declare root types
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
// Type: System.Xml::IDtdDefaultAttributeInfo
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11366))
// CS Name: System.Xml.IDtdDefaultAttributeInfo
class CORDL_TYPE IDtdDefaultAttributeInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Xml::IDtdAttributeInfo
constexpr operator  ::System::Xml::IDtdAttributeInfo() const noexcept;

~IDtdDefaultAttributeInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdDefaultAttributeInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_DefaultValueExpanded))  DefaultValueExpanded;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_DefaultValueTyped))  DefaultValueTyped;

 int32_t __declspec(property(get=get_ValueLineNumber))  ValueLineNumber;

 int32_t __declspec(property(get=get_ValueLinePosition))  ValueLinePosition;


// Methods

/// @brief Method get_DefaultValueExpanded addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DefaultValueExpanded() ;

/// @brief Method get_DefaultValueTyped addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_DefaultValueTyped() ;

/// @brief Method get_ValueLineNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ValueLineNumber() ;

/// @brief Method get_ValueLinePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ValueLinePosition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::IDtdDefaultAttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdDefaultAttributeInfo, "System.Xml", "IDtdDefaultAttributeInfo");
