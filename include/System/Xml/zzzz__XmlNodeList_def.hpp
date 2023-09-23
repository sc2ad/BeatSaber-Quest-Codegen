#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeList;
}
// Type: System.Xml::XmlNodeList
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11465))
// CS Name: System.Xml.XmlNodeList
class CORDL_TYPE XmlNodeList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlNodeList() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeList", modifiers: " const&", def_value: None }]
constexpr XmlNodeList(XmlNodeList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeList", modifiers: "&&", def_value: None }]
constexpr XmlNodeList(XmlNodeList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNodeList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlNodeList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNodeList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNodeList& operator=(XmlNodeList&& o) noexcept = default;
  constexpr XmlNodeList& operator=(XmlNodeList const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method System.IDisposable.Dispose addr 0x26fe000 size 0xc virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method PrivateDisposeNodeList addr 0x26fe00c size 0x4 virtual true final false
 void PrivateDisposeNodeList() ;

// Ctor Parameters []
explicit XmlNodeList() ;

/// @brief Method .ctor addr 0x26fe010 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlNodeList);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlNodeList, "System.Xml", "XmlNodeList");
