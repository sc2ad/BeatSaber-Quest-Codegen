#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class Header;
}
// Type: System.Runtime.Remoting.Messaging::Header
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3161))
// CS Name: System.Runtime.Remoting.Messaging.Header
class CORDL_TYPE Header : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Header() = default;

// Ctor Parameters [CppParam { name: "", ty: "Header", modifiers: " const&", def_value: None }]
constexpr Header(Header const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Header", modifiers: "&&", def_value: None }]
constexpr Header(Header&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Header(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Header& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Header& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Header& operator=(Header&& o) noexcept = default;
  constexpr Header& operator=(Header const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_HeaderNamespace, put=__set_HeaderNamespace))  HeaderNamespace;

constexpr void __set_HeaderNamespace(::StringW value) ;

constexpr ::StringW __get_HeaderNamespace() const;

 bool __declspec(property(get=__get_MustUnderstand, put=__set_MustUnderstand))  MustUnderstand;

constexpr void __set_MustUnderstand(bool value) ;

constexpr bool __get_MustUnderstand() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::Header);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::Header, "System.Runtime.Remoting.Messaging", "Header");
