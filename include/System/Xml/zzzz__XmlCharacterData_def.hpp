#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlCharacterData;
}
// Type: System.Xml::XmlCharacterData
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11442))
// CS Name: System.Xml.XmlCharacterData
class CORDL_TYPE XmlCharacterData : public System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlCharacterData() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlCharacterData", modifiers: " const&", def_value: None }]
constexpr XmlCharacterData(XmlCharacterData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlCharacterData", modifiers: "&&", def_value: None }]
constexpr XmlCharacterData(XmlCharacterData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlCharacterData(void* ptr) noexcept : System::Xml::XmlLinkedNode(ptr) {
}


  constexpr XmlCharacterData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlCharacterData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlCharacterData& operator=(XmlCharacterData&& o) noexcept = default;
  constexpr XmlCharacterData& operator=(XmlCharacterData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::StringW value) ;

constexpr ::StringW __get_data() const;


// Properties

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_InnerText, put=set_InnerText))  InnerText;

 ::StringW __declspec(property(get=get_Data, put=set_Data))  Data;


// Methods

// Ctor Parameters [CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlCharacterData(::StringW data, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f0138 size 0x2c virtual false final false
 void _ctor(::StringW data, System::Xml::XmlDocument doc) ;

/// @brief Method get_Value addr 0x26f02a4 size 0x10 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26f02b4 size 0x10 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_InnerText addr 0x26f02c4 size 0xc virtual true final false
 ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x26f02d0 size 0xc virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method get_Data addr 0x26f02dc size 0x54 virtual true final false
 ::StringW get_Data() ;

/// @brief Method set_Data addr 0x26f0330 size 0xa0 virtual true final false
 void set_Data(::StringW value) ;

/// @brief Method CheckOnData addr 0x26f03d0 size 0x38 virtual false final false
 bool CheckOnData(::StringW data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlCharacterData);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlCharacterData, "System.Xml", "XmlCharacterData");
