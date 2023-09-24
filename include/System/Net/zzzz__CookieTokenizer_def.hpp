#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
struct System__Net__CookieTokenizer__RecognizedAttribute;
}
namespace System::Net {
struct CookieToken;
}
// Forward declare root types
namespace System::Net {
class CookieTokenizer;
}
namespace System::Net {
struct System__Net__CookieTokenizer__RecognizedAttribute;
}
// Type: ::RecognizedAttribute
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7973))
// CS Name: System.Net.CookieTokenizer::RecognizedAttribute
struct CORDL_TYPE System__Net__CookieTokenizer__RecognizedAttribute : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_token", ty: "System::Net::CookieToken", modifiers: "", def_value: None }]
constexpr System__Net__CookieTokenizer__RecognizedAttribute(::StringW m_name, System::Net::CookieToken m_token) noexcept;


                    constexpr System__Net__CookieTokenizer__RecognizedAttribute(System__Net__CookieTokenizer__RecognizedAttribute const&) = default;
                    constexpr System__Net__CookieTokenizer__RecognizedAttribute(System__Net__CookieTokenizer__RecognizedAttribute&&) = default;
                    constexpr System__Net__CookieTokenizer__RecognizedAttribute& operator=(System__Net__CookieTokenizer__RecognizedAttribute const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__CookieTokenizer__RecognizedAttribute& operator=(System__Net__CookieTokenizer__RecognizedAttribute&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__CookieTokenizer__RecognizedAttribute(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 System::Net::CookieToken __declspec(property(get=__get_m_token, put=__set_m_token))  m_token;

constexpr void __set_m_token(System::Net::CookieToken value) ;

constexpr System::Net::CookieToken __get_m_token() const;


// Properties

 System::Net::CookieToken __declspec(property(get=get_Token))  Token;


// Methods

/// @brief Method .ctor addr 0x281bf68 size 0xc virtual false final false
 void _ctor(::StringW name, System::Net::CookieToken token) ;

/// @brief Method get_Token addr 0x281bf74 size 0x8 virtual false final false
 System::Net::CookieToken get_Token() ;

/// @brief Method IsEqualTo addr 0x281bc34 size 0x24 virtual false final false
 bool IsEqualTo(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::CookieTokenizer
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7974))
// CS Name: System.Net.CookieTokenizer
class CORDL_TYPE CookieTokenizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RecognizedAttribute = System::Net::System__Net__CookieTokenizer__RecognizedAttribute;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CookieTokenizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieTokenizer", modifiers: " const&", def_value: None }]
constexpr CookieTokenizer(CookieTokenizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieTokenizer", modifiers: "&&", def_value: None }]
constexpr CookieTokenizer(CookieTokenizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CookieTokenizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CookieTokenizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CookieTokenizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CookieTokenizer& operator=(CookieTokenizer&& o) noexcept = default;
  constexpr CookieTokenizer& operator=(CookieTokenizer const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_eofCookie, put=__set_m_eofCookie))  m_eofCookie;

constexpr void __set_m_eofCookie(bool value) ;

constexpr bool __get_m_eofCookie() const;

 int32_t __declspec(property(get=__get_m_index, put=__set_m_index))  m_index;

constexpr void __set_m_index(int32_t value) ;

constexpr int32_t __get_m_index() const;

 int32_t __declspec(property(get=__get_m_length, put=__set_m_length))  m_length;

constexpr void __set_m_length(int32_t value) ;

constexpr int32_t __get_m_length() const;

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 bool __declspec(property(get=__get_m_quoted, put=__set_m_quoted))  m_quoted;

constexpr void __set_m_quoted(bool value) ;

constexpr bool __get_m_quoted() const;

 int32_t __declspec(property(get=__get_m_start, put=__set_m_start))  m_start;

constexpr void __set_m_start(int32_t value) ;

constexpr int32_t __get_m_start() const;

 System::Net::CookieToken __declspec(property(get=__get_m_token, put=__set_m_token))  m_token;

constexpr void __set_m_token(System::Net::CookieToken value) ;

constexpr System::Net::CookieToken __get_m_token() const;

 int32_t __declspec(property(get=__get_m_tokenLength, put=__set_m_tokenLength))  m_tokenLength;

constexpr void __set_m_tokenLength(int32_t value) ;

constexpr int32_t __get_m_tokenLength() const;

 ::StringW __declspec(property(get=__get_m_tokenStream, put=__set_m_tokenStream))  m_tokenStream;

constexpr void __set_m_tokenStream(::StringW value) ;

constexpr ::StringW __get_m_tokenStream() const;

 ::StringW __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(::StringW value) ;

constexpr ::StringW __get_m_value() const;

static ::ArrayW<System::Net::System__Net__CookieTokenizer__RecognizedAttribute> __declspec(property(get=__get_RecognizedAttributes, put=__set_RecognizedAttributes))  RecognizedAttributes;

static void __set_RecognizedAttributes(::ArrayW<System::Net::System__Net__CookieTokenizer__RecognizedAttribute> value) ;

static ::ArrayW<System::Net::System__Net__CookieTokenizer__RecognizedAttribute> __get_RecognizedAttributes() ;

static ::ArrayW<System::Net::System__Net__CookieTokenizer__RecognizedAttribute> __declspec(property(get=__get_RecognizedServerAttributes, put=__set_RecognizedServerAttributes))  RecognizedServerAttributes;

static void __set_RecognizedServerAttributes(::ArrayW<System::Net::System__Net__CookieTokenizer__RecognizedAttribute> value) ;

static ::ArrayW<System::Net::System__Net__CookieTokenizer__RecognizedAttribute> __get_RecognizedServerAttributes() ;


// Properties

 bool __declspec(property(get=get_EndOfCookie, put=set_EndOfCookie))  EndOfCookie;

 bool __declspec(property(get=get_Eof))  Eof;

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;

 bool __declspec(property(get=get_Quoted, put=set_Quoted))  Quoted;

 System::Net::CookieToken __declspec(property(get=get_Token, put=set_Token))  Token;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

static System::Net::CookieTokenizer New_ctor(::StringW tokenStream) ;

/// @brief Method .ctor addr 0x281b544 size 0x38 virtual false final false
 void _ctor(::StringW tokenStream) ;

/// @brief Method get_EndOfCookie addr 0x281b57c size 0x8 virtual false final false
 bool get_EndOfCookie() ;

/// @brief Method set_EndOfCookie addr 0x281b584 size 0xc virtual false final false
 void set_EndOfCookie(bool value) ;

/// @brief Method get_Eof addr 0x281b590 size 0x10 virtual false final false
 bool get_Eof() ;

/// @brief Method get_Name addr 0x281b5a0 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x281b5a8 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method get_Quoted addr 0x281b5b0 size 0x8 virtual false final false
 bool get_Quoted() ;

/// @brief Method set_Quoted addr 0x281b5b8 size 0xc virtual false final false
 void set_Quoted(bool value) ;

/// @brief Method get_Token addr 0x281b5c4 size 0x8 virtual false final false
 System::Net::CookieToken get_Token() ;

/// @brief Method set_Token addr 0x281b5cc size 0x8 virtual false final false
 void set_Token(System::Net::CookieToken value) ;

/// @brief Method get_Value addr 0x281b5d4 size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x281b5dc size 0x8 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method Extract addr 0x281b5e4 size 0x88 virtual false final false
 ::StringW Extract() ;

/// @brief Method FindNext addr 0x281b66c size 0x2a4 virtual false final false
 System::Net::CookieToken FindNext(bool ignoreComma, bool ignoreEquals) ;

/// @brief Method Next addr 0x281b910 size 0x100 virtual false final false
 System::Net::CookieToken Next(bool first, bool parseResponseCookies) ;

/// @brief Method Reset addr 0x281ba10 size 0x68 virtual false final false
 void Reset() ;

/// @brief Method TokenFromName addr 0x281ba78 size 0x1bc virtual false final false
 System::Net::CookieToken TokenFromName(bool parseResponseCookies) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::CookieTokenizer);
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieTokenizer, "System.Net", "CookieTokenizer");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__CookieTokenizer__RecognizedAttribute, "System.Net", "CookieTokenizer/RecognizedAttribute");
