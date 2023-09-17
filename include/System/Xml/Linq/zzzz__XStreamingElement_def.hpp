#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Xml::Linq {
class XName;
}
// Forward declare root types
namespace System::Xml::Linq {
class XStreamingElement;
}
// Type: System.Xml.Linq::XStreamingElement
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15434))
// CS Name: System.Xml.Linq.XStreamingElement
class CORDL_TYPE XStreamingElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XStreamingElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "XStreamingElement", modifiers: " const&", def_value: None }]
constexpr XStreamingElement(XStreamingElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XStreamingElement", modifiers: "&&", def_value: None }]
constexpr XStreamingElement(XStreamingElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XStreamingElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XStreamingElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XStreamingElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XStreamingElement& operator=(XStreamingElement&& o) noexcept = default;
  constexpr XStreamingElement& operator=(XStreamingElement const& o) noexcept = default;
                


// Fields

 ::System::Xml::Linq::XName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::System::Xml::Linq::XName value) ;

constexpr ::System::Xml::Linq::XName __get_name() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_content() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Linq::XStreamingElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XStreamingElement, "System.Xml.Linq", "XStreamingElement");
