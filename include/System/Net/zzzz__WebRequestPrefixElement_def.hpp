#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace System::Net {
class IWebRequestCreate;
}
// Forward declare root types
namespace System::Net {
class WebRequestPrefixElement;
}
// Type: System.Net::WebRequestPrefixElement
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7928))
// CS Name: System.Net.WebRequestPrefixElement
class CORDL_TYPE WebRequestPrefixElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~WebRequestPrefixElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestPrefixElement", modifiers: " const&", def_value: None }]
constexpr WebRequestPrefixElement(WebRequestPrefixElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestPrefixElement", modifiers: "&&", def_value: None }]
constexpr WebRequestPrefixElement(WebRequestPrefixElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestPrefixElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebRequestPrefixElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestPrefixElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestPrefixElement& operator=(WebRequestPrefixElement&& o) noexcept = default;
  constexpr WebRequestPrefixElement& operator=(WebRequestPrefixElement const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Prefix, put=__set_Prefix))  Prefix;

constexpr void __set_Prefix(::StringW value) ;

constexpr ::StringW __get_Prefix() const;

 System::Net::IWebRequestCreate __declspec(property(get=__get_creator, put=__set_creator))  creator;

constexpr void __set_creator(System::Net::IWebRequestCreate value) ;

constexpr System::Net::IWebRequestCreate __get_creator() const;

 System::Type __declspec(property(get=__get_creatorType, put=__set_creatorType))  creatorType;

constexpr void __set_creatorType(System::Type value) ;

constexpr System::Type __get_creatorType() const;


// Properties

 System::Net::IWebRequestCreate __declspec(property(get=get_Creator, put=set_Creator))  Creator;


// Methods

/// @brief Method get_Creator addr 0x280cbf0 size 0x1fc virtual false final false
 System::Net::IWebRequestCreate get_Creator() ;

/// @brief Method set_Creator addr 0x280cdec size 0x8 virtual false final false
 void set_Creator(System::Net::IWebRequestCreate value) ;

static System::Net::WebRequestPrefixElement New_ctor(::StringW P, System::Net::IWebRequestCreate C) ;

/// @brief Method .ctor addr 0x280cdf4 size 0x2c virtual false final false
 void _ctor(::StringW P, System::Net::IWebRequestCreate C) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::WebRequestPrefixElement);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequestPrefixElement, "System.Net", "WebRequestPrefixElement");
