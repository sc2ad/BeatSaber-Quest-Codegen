#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class SocketAddress;
}
// Forward declare root types
namespace System::Net {
class EndPoint;
}
// Type: System.Net::EndPoint
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7912))
// CS Name: System.Net.EndPoint
class CORDL_TYPE EndPoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EndPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "EndPoint", modifiers: " const&", def_value: None }]
constexpr EndPoint(EndPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EndPoint", modifiers: "&&", def_value: None }]
constexpr EndPoint(EndPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EndPoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EndPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EndPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EndPoint& operator=(EndPoint&& o) noexcept = default;
  constexpr EndPoint& operator=(EndPoint const& o) noexcept = default;
                


// Properties

 ::System::Net::Sockets::AddressFamily __declspec(property(get=get_AddressFamily))  AddressFamily;


// Methods

/// @brief Method get_AddressFamily addr 0x280a00c size 0x28 virtual true final false
 ::System::Net::Sockets::AddressFamily get_AddressFamily() ;

/// @brief Method Serialize addr 0x280a034 size 0x28 virtual true final false
 ::System::Net::SocketAddress Serialize() ;

/// @brief Method Create addr 0x280a05c size 0x28 virtual true final false
 ::System::Net::EndPoint Create(::System::Net::SocketAddress socketAddress) ;

// Ctor Parameters []
explicit EndPoint() ;

/// @brief Method .ctor addr 0x27fb050 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::EndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndPoint, "System.Net", "EndPoint");
