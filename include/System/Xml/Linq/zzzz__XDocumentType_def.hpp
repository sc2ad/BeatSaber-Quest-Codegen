#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml::Linq {
class XNode;
}
// Forward declare root types
namespace System::Xml::Linq {
class XDocumentType;
}
// Type: System.Xml.Linq::XDocumentType
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15415))
// CS Name: System.Xml.Linq.XDocumentType
class CORDL_TYPE XDocumentType : public ::System::Xml::Linq::XNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~XDocumentType() = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentType", modifiers: " const&", def_value: None }]
constexpr XDocumentType(XDocumentType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentType", modifiers: "&&", def_value: None }]
constexpr XDocumentType(XDocumentType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XDocumentType(void* ptr) noexcept : ::System::Xml::Linq::XNode(ptr) {
}


  constexpr XDocumentType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XDocumentType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XDocumentType& operator=(XDocumentType&& o) noexcept = default;
  constexpr XDocumentType& operator=(XDocumentType const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::StringW __declspec(property(get=__get__publicId, put=__set__publicId))  _publicId;

constexpr void __set__publicId(::StringW value) ;

constexpr ::StringW __get__publicId() const;

 ::StringW __declspec(property(get=__get__systemId, put=__set__systemId))  _systemId;

constexpr void __set__systemId(::StringW value) ;

constexpr ::StringW __get__systemId() const;

 ::StringW __declspec(property(get=__get__internalSubset, put=__set__internalSubset))  _internalSubset;

constexpr void __set__internalSubset(::StringW value) ;

constexpr ::StringW __get__internalSubset() const;


// Properties

 ::StringW __declspec(property(get=get_InternalSubset))  InternalSubset;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_PublicId))  PublicId;

 ::StringW __declspec(property(get=get_SystemId))  SystemId;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "publicId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "systemId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "internalSubset", ty: "::StringW", modifiers: "", def_value: None }]
explicit XDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) ;

/// @brief Method .ctor addr 0x26cbfcc size 0x90 virtual false final false
 void _ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) ;

// Ctor Parameters [CppParam { name: "other", ty: "::System::Xml::Linq::XDocumentType", modifiers: "", def_value: None }]
explicit XDocumentType(::System::Xml::Linq::XDocumentType other) ;

/// @brief Method .ctor addr 0x26cc05c size 0x84 virtual false final false
 void _ctor(::System::Xml::Linq::XDocumentType other) ;

/// @brief Method get_InternalSubset addr 0x26cc0e0 size 0x8 virtual false final false
 ::StringW get_InternalSubset() ;

/// @brief Method get_Name addr 0x26cc0e8 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_NodeType addr 0x26cc0f0 size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_PublicId addr 0x26cc0f8 size 0x8 virtual false final false
 ::StringW get_PublicId() ;

/// @brief Method get_SystemId addr 0x26cc100 size 0x8 virtual false final false
 ::StringW get_SystemId() ;

/// @brief Method WriteTo addr 0x26cc108 size 0x74 virtual true final false
 void WriteTo(::System::Xml::XmlWriter writer) ;

/// @brief Method CloneNode addr 0x26cc17c size 0x60 virtual true final false
 ::System::Xml::Linq::XNode CloneNode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Linq::XDocumentType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XDocumentType, "System.Xml.Linq", "XDocumentType");
