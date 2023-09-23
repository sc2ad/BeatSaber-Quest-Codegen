#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::IO {
class StreamReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text {
class Encoding;
}
namespace System::Security::Util {
class TokenizerStream;
}
// Forward declare root types
namespace System::Security::Util {
struct System__Security__Util__Tokenizer__TokenSource;
}
namespace System::Security::Util {
class System__Security__Util__Tokenizer__ITokenReader;
}
namespace System::Security::Util {
class System__Security__Util__Tokenizer__StreamTokenReader;
}
namespace System::Security::Util {
class System__Security__Util__Tokenizer__StringMaker;
}
namespace System::Security::Util {
class Tokenizer;
}
// Type: ::TokenSource
namespace System::Security::Util {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2888))
// CS Name: System.Security.Util.Tokenizer::TokenSource
struct CORDL_TYPE System__Security__Util__Tokenizer__TokenSource : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Security__Util__Tokenizer__TokenSource(int32_t value__) noexcept;


                    constexpr System__Security__Util__Tokenizer__TokenSource(System__Security__Util__Tokenizer__TokenSource const&) = default;
                    constexpr System__Security__Util__Tokenizer__TokenSource(System__Security__Util__Tokenizer__TokenSource&&) = default;
                    constexpr System__Security__Util__Tokenizer__TokenSource& operator=(System__Security__Util__Tokenizer__TokenSource const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Security__Util__Tokenizer__TokenSource& operator=(System__Security__Util__Tokenizer__TokenSource&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Security__Util__Tokenizer__TokenSource(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Security__Util__Tokenizer__TokenSource_Unwrapped : int32_t {
__UnicodeByteArray = 0,
__UTF8ByteArray = 1,
__ASCIIByteArray = 2,
__CharArray = 3,
__String = 4,
__NestedStrings = 5,
__Other = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Security__Util__Tokenizer__TokenSource_Unwrapped () const noexcept {
return std::bit_cast<__System__Security__Util__Tokenizer__TokenSource_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UnicodeByteArray offset 0
static System::Security::Util::System__Security__Util__Tokenizer__TokenSource const UnicodeByteArray;

/// @brief Field UTF8ByteArray offset 0
static System::Security::Util::System__Security__Util__Tokenizer__TokenSource const UTF8ByteArray;

/// @brief Field ASCIIByteArray offset 0
static System::Security::Util::System__Security__Util__Tokenizer__TokenSource const ASCIIByteArray;

/// @brief Field CharArray offset 0
static System::Security::Util::System__Security__Util__Tokenizer__TokenSource const CharArray;

/// @brief Field String offset 0
static System::Security::Util::System__Security__Util__Tokenizer__TokenSource const String;

/// @brief Field NestedStrings offset 0
static System::Security::Util::System__Security__Util__Tokenizer__TokenSource const NestedStrings;

/// @brief Field Other offset 0
static System::Security::Util::System__Security__Util__Tokenizer__TokenSource const Other;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Util
// Type: ::StringMaker
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2889))
// CS Name: System.Security.Util.Tokenizer::StringMaker
class CORDL_TYPE System__Security__Util__Tokenizer__StringMaker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Security__Util__Tokenizer__StringMaker() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Util__Tokenizer__StringMaker", modifiers: " const&", def_value: None }]
constexpr System__Security__Util__Tokenizer__StringMaker(System__Security__Util__Tokenizer__StringMaker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Util__Tokenizer__StringMaker", modifiers: "&&", def_value: None }]
constexpr System__Security__Util__Tokenizer__StringMaker(System__Security__Util__Tokenizer__StringMaker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__Util__Tokenizer__StringMaker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Security__Util__Tokenizer__StringMaker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__Util__Tokenizer__StringMaker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__Util__Tokenizer__StringMaker& operator=(System__Security__Util__Tokenizer__StringMaker&& o) noexcept = default;
  constexpr System__Security__Util__Tokenizer__StringMaker& operator=(System__Security__Util__Tokenizer__StringMaker const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_aStrings, put=__set_aStrings))  aStrings;

constexpr void __set_aStrings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_aStrings() const;

 uint32_t __declspec(property(get=__get_cStringsMax, put=__set_cStringsMax))  cStringsMax;

constexpr void __set_cStringsMax(uint32_t value) ;

constexpr uint32_t __get_cStringsMax() const;

 uint32_t __declspec(property(get=__get_cStringsUsed, put=__set_cStringsUsed))  cStringsUsed;

constexpr void __set_cStringsUsed(uint32_t value) ;

constexpr uint32_t __get_cStringsUsed() const;

 System::Text::StringBuilder __declspec(property(get=__get__outStringBuilder, put=__set__outStringBuilder))  _outStringBuilder;

constexpr void __set__outStringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__outStringBuilder() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__outChars, put=__set__outChars))  _outChars;

constexpr void __set__outChars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__outChars() const;

 int32_t __declspec(property(get=__get__outIndex, put=__set__outIndex))  _outIndex;

constexpr void __set__outIndex(int32_t value) ;

constexpr int32_t __get__outIndex() const;


// Methods

/// @brief Method HashString addr 0x22ea08c size 0x6c virtual false final false
static uint32_t HashString(::StringW str) ;

/// @brief Method HashCharArray addr 0x22ea0f8 size 0x5c virtual false final false
static uint32_t HashCharArray(::ArrayW<char16_t> a, int32_t l) ;

// Ctor Parameters []
explicit System__Security__Util__Tokenizer__StringMaker() ;

/// @brief Method .ctor addr 0x22ea154 size 0x94 virtual false final false
 void _ctor() ;

/// @brief Method CompareStringAndChars addr 0x22ea1e8 size 0x94 virtual false final false
 bool CompareStringAndChars(::StringW str, ::ArrayW<char16_t> a, int32_t l) ;

/// @brief Method MakeString addr 0x22e475c size 0x26c virtual false final false
 ::StringW MakeString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
// Type: ::ITokenReader
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2890))
// CS Name: System.Security.Util.Tokenizer::ITokenReader
class CORDL_TYPE System__Security__Util__Tokenizer__ITokenReader : public ::cordl_internals::InterfaceW {
public:
// Declarations
~System__Security__Util__Tokenizer__ITokenReader() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__Util__Tokenizer__ITokenReader(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Read() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
// Type: ::StreamTokenReader
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2891))
// CS Name: System.Security.Util.Tokenizer::StreamTokenReader
class CORDL_TYPE System__Security__Util__Tokenizer__StreamTokenReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Security::Util::System__Security__Util__Tokenizer__ITokenReader
constexpr operator  System::Security::Util::System__Security__Util__Tokenizer__ITokenReader() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Security__Util__Tokenizer__StreamTokenReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Util__Tokenizer__StreamTokenReader", modifiers: " const&", def_value: None }]
constexpr System__Security__Util__Tokenizer__StreamTokenReader(System__Security__Util__Tokenizer__StreamTokenReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Util__Tokenizer__StreamTokenReader", modifiers: "&&", def_value: None }]
constexpr System__Security__Util__Tokenizer__StreamTokenReader(System__Security__Util__Tokenizer__StreamTokenReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__Util__Tokenizer__StreamTokenReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Security__Util__Tokenizer__StreamTokenReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__Util__Tokenizer__StreamTokenReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__Util__Tokenizer__StreamTokenReader& operator=(System__Security__Util__Tokenizer__StreamTokenReader&& o) noexcept = default;
  constexpr System__Security__Util__Tokenizer__StreamTokenReader& operator=(System__Security__Util__Tokenizer__StreamTokenReader const& o) noexcept = default;
                


// Fields

 System::IO::StreamReader __declspec(property(get=__get__in, put=__set__in))  _in;

constexpr void __set__in(System::IO::StreamReader value) ;

constexpr System::IO::StreamReader __get__in() const;

 int32_t __declspec(property(get=__get__numCharRead, put=__set__numCharRead))  _numCharRead;

constexpr void __set__numCharRead(int32_t value) ;

constexpr int32_t __get__numCharRead() const;


// Properties

 int32_t __declspec(property(get=get_NumCharEncountered))  NumCharEncountered;


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::StreamReader", modifiers: "", def_value: None }]
explicit System__Security__Util__Tokenizer__StreamTokenReader(System::IO::StreamReader input) ;

/// @brief Method .ctor addr 0x22e9e70 size 0x2c virtual false final false
 void _ctor(System::IO::StreamReader input) ;

/// @brief Method Read addr 0x22ea27c size 0x3c virtual true final false
 int32_t Read() ;

/// @brief Method get_NumCharEncountered addr 0x22ea2b8 size 0x8 virtual false final false
 int32_t get_NumCharEncountered() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
// Type: System.Security.Util::Tokenizer
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2892))
// CS Name: System.Security.Util.Tokenizer
class CORDL_TYPE Tokenizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StreamTokenReader = System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader;

using ITokenReader = System::Security::Util::System__Security__Util__Tokenizer__ITokenReader;

using StringMaker = System::Security::Util::System__Security__Util__Tokenizer__StringMaker;

using TokenSource = System::Security::Util::System__Security__Util__Tokenizer__TokenSource;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~Tokenizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tokenizer", modifiers: " const&", def_value: None }]
constexpr Tokenizer(Tokenizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tokenizer", modifiers: "&&", def_value: None }]
constexpr Tokenizer(Tokenizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tokenizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tokenizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tokenizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tokenizer& operator=(Tokenizer&& o) noexcept = default;
  constexpr Tokenizer& operator=(Tokenizer const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_LineNo, put=__set_LineNo))  LineNo;

constexpr void __set_LineNo(int32_t value) ;

constexpr int32_t __get_LineNo() const;

 int32_t __declspec(property(get=__get__inProcessingTag, put=__set__inProcessingTag))  _inProcessingTag;

constexpr void __set__inProcessingTag(int32_t value) ;

constexpr int32_t __get__inProcessingTag() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__inBytes, put=__set__inBytes))  _inBytes;

constexpr void __set__inBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__inBytes() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__inChars, put=__set__inChars))  _inChars;

constexpr void __set__inChars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__inChars() const;

 ::StringW __declspec(property(get=__get__inString, put=__set__inString))  _inString;

constexpr void __set__inString(::StringW value) ;

constexpr ::StringW __get__inString() const;

 int32_t __declspec(property(get=__get__inIndex, put=__set__inIndex))  _inIndex;

constexpr void __set__inIndex(int32_t value) ;

constexpr int32_t __get__inIndex() const;

 int32_t __declspec(property(get=__get__inSize, put=__set__inSize))  _inSize;

constexpr void __set__inSize(int32_t value) ;

constexpr int32_t __get__inSize() const;

 int32_t __declspec(property(get=__get__inSavedCharacter, put=__set__inSavedCharacter))  _inSavedCharacter;

constexpr void __set__inSavedCharacter(int32_t value) ;

constexpr int32_t __get__inSavedCharacter() const;

 System::Security::Util::System__Security__Util__Tokenizer__TokenSource __declspec(property(get=__get__inTokenSource, put=__set__inTokenSource))  _inTokenSource;

constexpr void __set__inTokenSource(System::Security::Util::System__Security__Util__Tokenizer__TokenSource value) ;

constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource __get__inTokenSource() const;

 System::Security::Util::System__Security__Util__Tokenizer__ITokenReader __declspec(property(get=__get__inTokenReader, put=__set__inTokenReader))  _inTokenReader;

constexpr void __set__inTokenReader(System::Security::Util::System__Security__Util__Tokenizer__ITokenReader value) ;

constexpr System::Security::Util::System__Security__Util__Tokenizer__ITokenReader __get__inTokenReader() const;

 System::Security::Util::System__Security__Util__Tokenizer__StringMaker __declspec(property(get=__get__maker, put=__set__maker))  _maker;

constexpr void __set__maker(System::Security::Util::System__Security__Util__Tokenizer__StringMaker value) ;

constexpr System::Security::Util::System__Security__Util__Tokenizer__StringMaker __get__maker() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__searchStrings, put=__set__searchStrings))  _searchStrings;

constexpr void __set__searchStrings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__searchStrings() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__replaceStrings, put=__set__replaceStrings))  _replaceStrings;

constexpr void __set__replaceStrings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__replaceStrings() const;

 int32_t __declspec(property(get=__get__inNestedIndex, put=__set__inNestedIndex))  _inNestedIndex;

constexpr void __set__inNestedIndex(int32_t value) ;

constexpr int32_t __get__inNestedIndex() const;

 int32_t __declspec(property(get=__get__inNestedSize, put=__set__inNestedSize))  _inNestedSize;

constexpr void __set__inNestedSize(int32_t value) ;

constexpr int32_t __get__inNestedSize() const;

 ::StringW __declspec(property(get=__get__inNestedString, put=__set__inNestedString))  _inNestedString;

constexpr void __set__inNestedString(::StringW value) ;

constexpr ::StringW __get__inNestedString() const;


// Methods

/// @brief Method BasicInitialization addr 0x22e9d9c size 0x78 virtual false final false
 void BasicInitialization() ;

/// @brief Method Recycle addr 0x22e9e14 size 0x5c virtual false final false
 void Recycle() ;

// Ctor Parameters [CppParam { name: "input", ty: "::StringW", modifiers: "", def_value: None }]
explicit Tokenizer(::StringW input) ;

/// @brief Method .ctor addr 0x22e9d54 size 0x48 virtual false final false
 void _ctor(::StringW input) ;

/// @brief Method ChangeFormat addr 0x22e95e0 size 0x224 virtual false final false
 void ChangeFormat(System::Text::Encoding encoding) ;

/// @brief Method GetTokens addr 0x22e8da0 size 0x7e0 virtual false final false
 void GetTokens(System::Security::Util::TokenizerStream stream, int32_t maxNum, bool endAfterKet) ;

/// @brief Method GetStringToken addr 0x22e9f84 size 0x18 virtual false final false
 ::StringW GetStringToken() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::System__Security__Util__Tokenizer__TokenSource, "System.Security.Util", "Tokenizer/TokenSource");
NEED_NO_BOX(System::Security::Util::System__Security__Util__Tokenizer__ITokenReader);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::System__Security__Util__Tokenizer__ITokenReader, "System.Security.Util", "Tokenizer/ITokenReader");
NEED_NO_BOX(System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader, "System.Security.Util", "Tokenizer/StreamTokenReader");
NEED_NO_BOX(System::Security::Util::System__Security__Util__Tokenizer__StringMaker);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::System__Security__Util__Tokenizer__StringMaker, "System.Security.Util", "Tokenizer/StringMaker");
NEED_NO_BOX(System::Security::Util::Tokenizer);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Tokenizer, "System.Security.Util", "Tokenizer");
