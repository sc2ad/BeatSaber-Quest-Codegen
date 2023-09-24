#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class HeaderParser;
}
// Forward declare root types
namespace System::Net {
class HeaderInfo;
}
// Type: System.Net::HeaderInfo
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7953))
// CS Name: System.Net.HeaderInfo
class CORDL_TYPE HeaderInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HeaderInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: " const&", def_value: None }]
constexpr HeaderInfo(HeaderInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: "&&", def_value: None }]
constexpr HeaderInfo(HeaderInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeaderInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HeaderInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeaderInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeaderInfo& operator=(HeaderInfo&& o) noexcept = default;
  constexpr HeaderInfo& operator=(HeaderInfo const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_IsRequestRestricted, put=__set_IsRequestRestricted))  IsRequestRestricted;

constexpr void __set_IsRequestRestricted(bool value) ;

constexpr bool __get_IsRequestRestricted() const;

 bool __declspec(property(get=__get_IsResponseRestricted, put=__set_IsResponseRestricted))  IsResponseRestricted;

constexpr void __set_IsResponseRestricted(bool value) ;

constexpr bool __get_IsResponseRestricted() const;

 System::Net::HeaderParser __declspec(property(get=__get_Parser, put=__set_Parser))  Parser;

constexpr void __set_Parser(System::Net::HeaderParser value) ;

constexpr System::Net::HeaderParser __get_Parser() const;

 ::StringW __declspec(property(get=__get_HeaderName, put=__set_HeaderName))  HeaderName;

constexpr void __set_HeaderName(::StringW value) ;

constexpr ::StringW __get_HeaderName() const;

 bool __declspec(property(get=__get_AllowMultiValues, put=__set_AllowMultiValues))  AllowMultiValues;

constexpr void __set_AllowMultiValues(bool value) ;

constexpr bool __get_AllowMultiValues() const;


// Methods

static System::Net::HeaderInfo New_ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, System::Net::HeaderParser p) ;

/// @brief Method .ctor addr 0x281483c size 0x54 virtual false final false
 void _ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, System::Net::HeaderParser p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HeaderInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HeaderInfo, "System.Net", "HeaderInfo");
