#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpVersion;
}
// Type: System.Net::HttpVersion
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7879))
// CS Name: System.Net.HttpVersion
class CORDL_TYPE HttpVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HttpVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: " const&", def_value: None }]
constexpr HttpVersion(HttpVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: "&&", def_value: None }]
constexpr HttpVersion(HttpVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpVersion& operator=(HttpVersion&& o) noexcept = default;
  constexpr HttpVersion& operator=(HttpVersion const& o) noexcept = default;
                


// Fields

static ::System::Version __declspec(property(get=__get_Unknown, put=__set_Unknown))  Unknown;

static void __set_Unknown(::System::Version value) ;

static ::System::Version __get_Unknown() ;

static ::System::Version __declspec(property(get=__get_Version10, put=__set_Version10))  Version10;

static void __set_Version10(::System::Version value) ;

static ::System::Version __get_Version10() ;

static ::System::Version __declspec(property(get=__get_Version11, put=__set_Version11))  Version11;

static void __set_Version11(::System::Version value) ;

static ::System::Version __get_Version11() ;

static ::System::Version __declspec(property(get=__get_Version20, put=__set_Version20))  Version20;

static void __set_Version20(::System::Version value) ;

static ::System::Version __get_Version20() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::HttpVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpVersion, "System.Net", "HttpVersion");
