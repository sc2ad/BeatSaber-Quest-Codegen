#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml::Linq {
class XProcessingInstruction;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XProcessingInstructionWrapper;
}
// Type: Newtonsoft.Json.Converters::XProcessingInstructionWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12007))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12005))
// CS Name: Newtonsoft.Json.Converters.XProcessingInstructionWrapper
class CORDL_TYPE XProcessingInstructionWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XProcessingInstructionWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XProcessingInstructionWrapper", modifiers: " const&", def_value: None }]
constexpr XProcessingInstructionWrapper(XProcessingInstructionWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XProcessingInstructionWrapper", modifiers: "&&", def_value: None }]
constexpr XProcessingInstructionWrapper(XProcessingInstructionWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XProcessingInstructionWrapper(void* ptr) noexcept : ::Newtonsoft::Json::Converters::XObjectWrapper(ptr) {
}


  constexpr XProcessingInstructionWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XProcessingInstructionWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XProcessingInstructionWrapper& operator=(XProcessingInstructionWrapper&& o) noexcept = default;
  constexpr XProcessingInstructionWrapper& operator=(XProcessingInstructionWrapper const& o) noexcept = default;
                


// Properties

 ::System::Xml::Linq::XProcessingInstruction __declspec(property(get=get_ProcessingInstruction))  ProcessingInstruction;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

/// @brief Method get_ProcessingInstruction addr 0x254486c size 0x78 virtual false final false
 ::System::Xml::Linq::XProcessingInstruction get_ProcessingInstruction() ;

// Ctor Parameters [CppParam { name: "processingInstruction", ty: "::System::Xml::Linq::XProcessingInstruction", modifiers: "", def_value: None }]
explicit XProcessingInstructionWrapper(::System::Xml::Linq::XProcessingInstruction processingInstruction) ;

/// @brief Method .ctor addr 0x2543b48 size 0x6c virtual false final false
 void _ctor(::System::Xml::Linq::XProcessingInstruction processingInstruction) ;

/// @brief Method get_LocalName addr 0x25448e4 size 0x1c virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_Value addr 0x2544900 size 0x1c virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x254491c size 0x24 virtual true final false
 void set_Value(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper, "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper");
