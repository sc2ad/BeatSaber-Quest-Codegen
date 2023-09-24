#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeChangedEventHandler;
}
// Type: System.Xml::XmlNodeChangedEventHandler
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11464))
// CS Name: System.Xml.XmlNodeChangedEventHandler
class CORDL_TYPE XmlNodeChangedEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~XmlNodeChangedEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventHandler", modifiers: " const&", def_value: None }]
constexpr XmlNodeChangedEventHandler(XmlNodeChangedEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventHandler", modifiers: "&&", def_value: None }]
constexpr XmlNodeChangedEventHandler(XmlNodeChangedEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNodeChangedEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr XmlNodeChangedEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNodeChangedEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNodeChangedEventHandler& operator=(XmlNodeChangedEventHandler&& o) noexcept = default;
  constexpr XmlNodeChangedEventHandler& operator=(XmlNodeChangedEventHandler const& o) noexcept = default;
                


// Methods

static System::Xml::XmlNodeChangedEventHandler New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26fdebc size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26fdfec size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::Xml::XmlNodeChangedEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlNodeChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlNodeChangedEventHandler, "System.Xml", "XmlNodeChangedEventHandler");
