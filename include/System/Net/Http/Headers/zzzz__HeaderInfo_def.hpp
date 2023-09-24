#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
template<typename T,typename U>
class System__Net__Http__Headers__HeaderInfo__CollectionHeaderTypeInfo_2;
}
namespace System::Net::Http::Headers {
template<typename T>
class TryParseListDelegate_1;
}
namespace System::Net::Http::Headers {
template<typename T>
class TryParseDelegate_1;
}
namespace System::Net::Http::Headers {
template<typename T,typename U>
class System__Net__Http__Headers__HeaderInfo__HeaderTypeInfo_2;
}
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HeaderInfo;
}
// Type: System.Net.Http.Headers::HeaderInfo
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14831))
// CS Name: System.Net.Http.Headers.HeaderInfo
class CORDL_TYPE HeaderInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T,typename U>
using CollectionHeaderTypeInfo_2 = System::Net::Http::Headers::System__Net__Http__Headers__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>;

template<typename T,typename U>
using HeaderTypeInfo_2 = System::Net::Http::Headers::System__Net__Http__Headers__HeaderInfo__HeaderTypeInfo_2<T, U>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

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

 bool __declspec(property(get=__get_AllowsMany, put=__set_AllowsMany))  AllowsMany;

constexpr void __set_AllowsMany(bool value) ;

constexpr bool __get_AllowsMany() const;

 System::Net::Http::Headers::HttpHeaderKind __declspec(property(get=__get_HeaderKind, put=__set_HeaderKind))  HeaderKind;

constexpr void __set_HeaderKind(System::Net::Http::Headers::HttpHeaderKind value) ;

constexpr System::Net::Http::Headers::HttpHeaderKind __get_HeaderKind() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __declspec(property(get=__get__CustomToString_k__BackingField, put=__set__CustomToString_k__BackingField))  _CustomToString_k__BackingField;

constexpr void __set__CustomToString_k__BackingField(System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> value) ;

constexpr System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __get__CustomToString_k__BackingField() const;


// Properties

 System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __declspec(property(get=get_CustomToString, put=set_CustomToString))  CustomToString;

 ::StringW __declspec(property(get=get_Separator))  Separator;


// Methods

static System::Net::Http::Headers::HeaderInfo New_ctor(::StringW name, System::Net::Http::Headers::HttpHeaderKind headerKind) ;

/// @brief Method .ctor addr 0x26a757c size 0x30 virtual false final false
 void _ctor(::StringW name, System::Net::Http::Headers::HttpHeaderKind headerKind) ;

/// @brief Method CreateSingle addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Net::Http::Headers::HeaderInfo CreateSingle(::StringW name, System::Net::Http::Headers::TryParseDelegate_1<T> parser, System::Net::Http::Headers::HttpHeaderKind headerKind, System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> toString) ;

/// @brief Method CreateMulti addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Net::Http::Headers::HeaderInfo CreateMulti(::StringW name, System::Net::Http::Headers::TryParseListDelegate_1<T> elementParser, System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator) ;

/// @brief Method CreateCollection addr 0x26a75ac size 0x10 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateCollection(System::Net::Http::Headers::HttpHeaders headers) ;

/// @brief Method get_CustomToString addr 0x26a75bc size 0x8 virtual false final false
 System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> get_CustomToString() ;

/// @brief Method set_CustomToString addr 0x26a75c4 size 0x8 virtual false final false
 void set_CustomToString(System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> value) ;

/// @brief Method get_Separator addr 0x26a75cc size 0x40 virtual true final false
 ::StringW get_Separator() ;

/// @brief Method AddToCollection addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddToCollection(::bs_hook::Il2CppWrapperType collection, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CreateCollection addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType CreateCollection(System::Net::Http::Headers::HttpHeaders headers, System::Net::Http::Headers::HeaderInfo headerInfo) ;

/// @brief Method ToStringCollection addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::List_1<::StringW> ToStringCollection(::bs_hook::Il2CppWrapperType collection) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryParse(::StringW value, ByRef<::bs_hook::Il2CppWrapperType> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::HeaderInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HeaderInfo, "System.Net.Http.Headers", "HeaderInfo");
