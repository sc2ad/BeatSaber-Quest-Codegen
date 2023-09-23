#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System {
class Uri;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace System::Net {
class IWebRequestCreate;
}
// Type: System.Net::IWebRequestCreate
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7923))
// CS Name: System.Net.IWebRequestCreate
class CORDL_TYPE IWebRequestCreate : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IWebRequestCreate() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IWebRequestCreate(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::WebRequest Create(System::Uri uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::IWebRequestCreate);
DEFINE_IL2CPP_ARG_TYPE(System::Net::IWebRequestCreate, "System.Net", "IWebRequestCreate");
