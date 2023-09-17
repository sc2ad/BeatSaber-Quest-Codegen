#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Specialized {
class ListDictionary;
}
// Forward declare root types
namespace System::Net {
class KnownHttpVerb;
}
// Type: System.Net::KnownHttpVerb
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7930))
// CS Name: System.Net.KnownHttpVerb
class CORDL_TYPE KnownHttpVerb : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KnownHttpVerb() = default;

// Ctor Parameters [CppParam { name: "", ty: "KnownHttpVerb", modifiers: " const&", def_value: None }]
constexpr KnownHttpVerb(KnownHttpVerb const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KnownHttpVerb", modifiers: "&&", def_value: None }]
constexpr KnownHttpVerb(KnownHttpVerb&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KnownHttpVerb(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KnownHttpVerb& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KnownHttpVerb& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KnownHttpVerb& operator=(KnownHttpVerb&& o) noexcept = default;
  constexpr KnownHttpVerb& operator=(KnownHttpVerb const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 bool __declspec(property(get=__get_RequireContentBody, put=__set_RequireContentBody))  RequireContentBody;

constexpr void __set_RequireContentBody(bool value) ;

constexpr bool __get_RequireContentBody() const;

 bool __declspec(property(get=__get_ContentBodyNotAllowed, put=__set_ContentBodyNotAllowed))  ContentBodyNotAllowed;

constexpr void __set_ContentBodyNotAllowed(bool value) ;

constexpr bool __get_ContentBodyNotAllowed() const;

 bool __declspec(property(get=__get_ConnectRequest, put=__set_ConnectRequest))  ConnectRequest;

constexpr void __set_ConnectRequest(bool value) ;

constexpr bool __get_ConnectRequest() const;

 bool __declspec(property(get=__get_ExpectNoContentResponse, put=__set_ExpectNoContentResponse))  ExpectNoContentResponse;

constexpr void __set_ExpectNoContentResponse(bool value) ;

constexpr bool __get_ExpectNoContentResponse() const;

static ::System::Collections::Specialized::ListDictionary __declspec(property(get=__get_NamedHeaders, put=__set_NamedHeaders))  NamedHeaders;

static void __set_NamedHeaders(::System::Collections::Specialized::ListDictionary value) ;

static ::System::Collections::Specialized::ListDictionary __get_NamedHeaders() ;

static ::System::Net::KnownHttpVerb __declspec(property(get=__get_Get, put=__set_Get))  Get;

static void __set_Get(::System::Net::KnownHttpVerb value) ;

static ::System::Net::KnownHttpVerb __get_Get() ;

static ::System::Net::KnownHttpVerb __declspec(property(get=__get_Connect, put=__set_Connect))  Connect;

static void __set_Connect(::System::Net::KnownHttpVerb value) ;

static ::System::Net::KnownHttpVerb __get_Connect() ;

static ::System::Net::KnownHttpVerb __declspec(property(get=__get_Head, put=__set_Head))  Head;

static void __set_Head(::System::Net::KnownHttpVerb value) ;

static ::System::Net::KnownHttpVerb __get_Head() ;

static ::System::Net::KnownHttpVerb __declspec(property(get=__get_Put, put=__set_Put))  Put;

static void __set_Put(::System::Net::KnownHttpVerb value) ;

static ::System::Net::KnownHttpVerb __get_Put() ;

static ::System::Net::KnownHttpVerb __declspec(property(get=__get_Post, put=__set_Post))  Post;

static void __set_Post(::System::Net::KnownHttpVerb value) ;

static ::System::Net::KnownHttpVerb __get_Post() ;

static ::System::Net::KnownHttpVerb __declspec(property(get=__get_MkCol, put=__set_MkCol))  MkCol;

static void __set_MkCol(::System::Net::KnownHttpVerb value) ;

static ::System::Net::KnownHttpVerb __get_MkCol() ;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "requireContentBody", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "contentBodyNotAllowed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "connectRequest", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "expectNoContentResponse", ty: "bool", modifiers: "", def_value: None }]
explicit KnownHttpVerb(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) ;

/// @brief Method .ctor addr 0x280cef8 size 0x58 virtual false final false
 void _ctor(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) ;

/// @brief Method Parse addr 0x280d268 size 0xc8 virtual false final false
static ::System::Net::KnownHttpVerb Parse(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::KnownHttpVerb);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::KnownHttpVerb, "System.Net", "KnownHttpVerb");
