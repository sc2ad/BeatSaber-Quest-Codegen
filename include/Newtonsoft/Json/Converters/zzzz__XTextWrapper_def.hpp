#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Linq {
class XText;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XTextWrapper;
}
// Type: Newtonsoft.Json.Converters::XTextWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12007))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12003))
// CS Name: Newtonsoft.Json.Converters.XTextWrapper
class CORDL_TYPE XTextWrapper : public Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XTextWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XTextWrapper", modifiers: " const&", def_value: None }]
constexpr XTextWrapper(XTextWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XTextWrapper", modifiers: "&&", def_value: None }]
constexpr XTextWrapper(XTextWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XTextWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XObjectWrapper(ptr) {
}


  constexpr XTextWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XTextWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XTextWrapper& operator=(XTextWrapper&& o) noexcept = default;
  constexpr XTextWrapper& operator=(XTextWrapper const& o) noexcept = default;
                


// Properties

 System::Xml::Linq::XText __declspec(property(get=get_Text))  Text;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 Newtonsoft::Json::Converters::IXmlNode __declspec(property(get=get_ParentNode))  ParentNode;


// Methods

/// @brief Method get_Text addr 0x254410c size 0x78 virtual false final false
 System::Xml::Linq::XText get_Text() ;

static Newtonsoft::Json::Converters::XTextWrapper New_ctor(System::Xml::Linq::XText text) ;

/// @brief Method .ctor addr 0x2544184 size 0x6c virtual false final false
 void _ctor(System::Xml::Linq::XText text) ;

/// @brief Method get_Value addr 0x25441f0 size 0x1c virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x254420c size 0x24 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_ParentNode addr 0x2544230 size 0x44 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode get_ParentNode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XTextWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XTextWrapper, "Newtonsoft.Json.Converters", "XTextWrapper");
