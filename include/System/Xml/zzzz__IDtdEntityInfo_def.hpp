#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class IDtdEntityInfo;
}
// Type: System.Xml::IDtdEntityInfo
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11367))
// CS Name: System.Xml.IDtdEntityInfo
class CORDL_TYPE IDtdEntityInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDtdEntityInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdEntityInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 bool __declspec(property(get=get_IsExternal))  IsExternal;

 bool __declspec(property(get=get_IsDeclaredInExternal))  IsDeclaredInExternal;

 bool __declspec(property(get=get_IsUnparsedEntity))  IsUnparsedEntity;

 bool __declspec(property(get=get_IsParameterEntity))  IsParameterEntity;

 ::StringW __declspec(property(get=get_BaseUriString))  BaseUriString;

 ::StringW __declspec(property(get=get_DeclaredUriString))  DeclaredUriString;

 ::StringW __declspec(property(get=get_SystemId))  SystemId;

 ::StringW __declspec(property(get=get_PublicId))  PublicId;

 ::StringW __declspec(property(get=get_Text))  Text;

 int32_t __declspec(property(get=get_LineNumber))  LineNumber;

 int32_t __declspec(property(get=get_LinePosition))  LinePosition;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_IsExternal addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsExternal() ;

/// @brief Method get_IsDeclaredInExternal addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsDeclaredInExternal() ;

/// @brief Method get_IsUnparsedEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsUnparsedEntity() ;

/// @brief Method get_IsParameterEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsParameterEntity() ;

/// @brief Method get_BaseUriString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_BaseUriString() ;

/// @brief Method get_DeclaredUriString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DeclaredUriString() ;

/// @brief Method get_SystemId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_SystemId() ;

/// @brief Method get_PublicId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_PublicId() ;

/// @brief Method get_Text addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Text() ;

/// @brief Method get_LineNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LineNumber() ;

/// @brief Method get_LinePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_LinePosition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::IDtdEntityInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdEntityInfo, "System.Xml", "IDtdEntityInfo");
