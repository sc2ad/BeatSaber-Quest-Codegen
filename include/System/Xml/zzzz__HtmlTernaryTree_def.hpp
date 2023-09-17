#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class HtmlTernaryTree;
}
// Type: System.Xml::HtmlTernaryTree
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11360))
// CS Name: System.Xml.HtmlTernaryTree
class CORDL_TYPE HtmlTernaryTree : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HtmlTernaryTree() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlTernaryTree", modifiers: " const&", def_value: None }]
constexpr HtmlTernaryTree(HtmlTernaryTree const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlTernaryTree", modifiers: "&&", def_value: None }]
constexpr HtmlTernaryTree(HtmlTernaryTree&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlTernaryTree(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HtmlTernaryTree& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlTernaryTree& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlTernaryTree& operator=(HtmlTernaryTree&& o) noexcept = default;
  constexpr HtmlTernaryTree& operator=(HtmlTernaryTree const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_htmlElements, put=__set_htmlElements))  htmlElements;

static void __set_htmlElements(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_htmlElements() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_htmlAttributes, put=__set_htmlAttributes))  htmlAttributes;

static void __set_htmlAttributes(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_htmlAttributes() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::HtmlTernaryTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlTernaryTree, "System.Xml", "HtmlTernaryTree");
