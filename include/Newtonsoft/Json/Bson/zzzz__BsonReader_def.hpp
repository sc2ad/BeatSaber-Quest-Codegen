#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
struct DateTimeKind;
}
namespace Newtonsoft::Json::Bson {
struct Newtonsoft__Json__Bson__BsonReader__BsonReaderState;
}
namespace Newtonsoft::Json::Bson {
class Newtonsoft__Json__Bson__BsonReader__ContainerContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class Stream;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System::IO {
class BinaryReader;
}
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
struct Newtonsoft__Json__Bson__BsonReader__BsonReaderState;
}
namespace Newtonsoft::Json::Bson {
class BsonReader;
}
namespace Newtonsoft::Json::Bson {
class Newtonsoft__Json__Bson__BsonReader__ContainerContext;
}
// Type: ::BsonReaderState
namespace Newtonsoft::Json::Bson {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12013))
// CS Name: Newtonsoft.Json.Bson.BsonReader::BsonReaderState
struct CORDL_TYPE Newtonsoft__Json__Bson__BsonReader__BsonReaderState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__Bson__BsonReader__BsonReaderState(int32_t value__) noexcept;


                    constexpr Newtonsoft__Json__Bson__BsonReader__BsonReaderState(Newtonsoft__Json__Bson__BsonReader__BsonReaderState const&) = default;
                    constexpr Newtonsoft__Json__Bson__BsonReader__BsonReaderState(Newtonsoft__Json__Bson__BsonReader__BsonReaderState&&) = default;
                    constexpr Newtonsoft__Json__Bson__BsonReader__BsonReaderState& operator=(Newtonsoft__Json__Bson__BsonReader__BsonReaderState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__Bson__BsonReader__BsonReaderState& operator=(Newtonsoft__Json__Bson__BsonReader__BsonReaderState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Bson__BsonReader__BsonReaderState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Newtonsoft__Json__Bson__BsonReader__BsonReaderState_Unwrapped : int32_t {
__Normal = 0,
__ReferenceStart = 1,
__ReferenceRef = 2,
__ReferenceId = 3,
__CodeWScopeStart = 4,
__CodeWScopeCode = 5,
__CodeWScopeScope = 6,
__CodeWScopeScopeObject = 7,
__CodeWScopeScopeEnd = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Newtonsoft__Json__Bson__BsonReader__BsonReaderState_Unwrapped () const noexcept {
return std::bit_cast<__Newtonsoft__Json__Bson__BsonReader__BsonReaderState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const Normal;

/// @brief Field ReferenceStart offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const ReferenceStart;

/// @brief Field ReferenceRef offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const ReferenceRef;

/// @brief Field ReferenceId offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const ReferenceId;

/// @brief Field CodeWScopeStart offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const CodeWScopeStart;

/// @brief Field CodeWScopeCode offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const CodeWScopeCode;

/// @brief Field CodeWScopeScope offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const CodeWScopeScope;

/// @brief Field CodeWScopeScopeObject offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const CodeWScopeScopeObject;

/// @brief Field CodeWScopeScopeEnd offset 0
static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState const CodeWScopeScopeEnd;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
// Type: ::ContainerContext
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12014))
// CS Name: Newtonsoft.Json.Bson.BsonReader::ContainerContext
class CORDL_TYPE Newtonsoft__Json__Bson__BsonReader__ContainerContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Newtonsoft__Json__Bson__BsonReader__ContainerContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Bson__BsonReader__ContainerContext", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Bson__BsonReader__ContainerContext(Newtonsoft__Json__Bson__BsonReader__ContainerContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Bson__BsonReader__ContainerContext", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Bson__BsonReader__ContainerContext(Newtonsoft__Json__Bson__BsonReader__ContainerContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Bson__BsonReader__ContainerContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Bson__BsonReader__ContainerContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Bson__BsonReader__ContainerContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Bson__BsonReader__ContainerContext& operator=(Newtonsoft__Json__Bson__BsonReader__ContainerContext&& o) noexcept = default;
  constexpr Newtonsoft__Json__Bson__BsonReader__ContainerContext& operator=(Newtonsoft__Json__Bson__BsonReader__ContainerContext const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Bson::BsonType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(Newtonsoft::Json::Bson::BsonType value) ;

constexpr Newtonsoft::Json::Bson::BsonType __get_Type() const;

 int32_t __declspec(property(get=__get_Length, put=__set_Length))  Length;

constexpr void __set_Length(int32_t value) ;

constexpr int32_t __get_Length() const;

 int32_t __declspec(property(get=__get_Position, put=__set_Position))  Position;

constexpr void __set_Position(int32_t value) ;

constexpr int32_t __get_Position() const;


// Methods

static Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext New_ctor(Newtonsoft::Json::Bson::BsonType type) ;

/// @brief Method .ctor addr 0x254f174 size 0x28 virtual false final false
 void _ctor(Newtonsoft::Json::Bson::BsonType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
// Type: Newtonsoft.Json.Bson::BsonReader
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11775))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12015))
// CS Name: Newtonsoft.Json.Bson.BsonReader
class CORDL_TYPE BsonReader : public Newtonsoft::Json::JsonReader {
public:
// Declarations
using ContainerContext = Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext;

using BsonReaderState = Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~BsonReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonReader", modifiers: " const&", def_value: None }]
constexpr BsonReader(BsonReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonReader", modifiers: "&&", def_value: None }]
constexpr BsonReader(BsonReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonReader(void* ptr) noexcept : Newtonsoft::Json::JsonReader(ptr) {
}


  constexpr BsonReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonReader& operator=(BsonReader&& o) noexcept = default;
  constexpr BsonReader& operator=(BsonReader const& o) noexcept = default;
                


// Fields

/// @brief Field MaxCharBytesSize offset 0
static constexpr int32_t  MaxCharBytesSize{128};

static ::ArrayW<uint8_t> __declspec(property(get=__get_SeqRange1, put=__set_SeqRange1))  SeqRange1;

static void __set_SeqRange1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SeqRange1() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_SeqRange2, put=__set_SeqRange2))  SeqRange2;

static void __set_SeqRange2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SeqRange2() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_SeqRange3, put=__set_SeqRange3))  SeqRange3;

static void __set_SeqRange3(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SeqRange3() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_SeqRange4, put=__set_SeqRange4))  SeqRange4;

static void __set_SeqRange4(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SeqRange4() ;

 System::IO::BinaryReader __declspec(property(get=__get__reader, put=__set__reader))  _reader;

constexpr void __set__reader(System::IO::BinaryReader value) ;

constexpr System::IO::BinaryReader __get__reader() const;

 System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext> __get__stack() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__byteBuffer, put=__set__byteBuffer))  _byteBuffer;

constexpr void __set__byteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__byteBuffer() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__charBuffer, put=__set__charBuffer))  _charBuffer;

constexpr void __set__charBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__charBuffer() const;

 Newtonsoft::Json::Bson::BsonType __declspec(property(get=__get__currentElementType, put=__set__currentElementType))  _currentElementType;

constexpr void __set__currentElementType(Newtonsoft::Json::Bson::BsonType value) ;

constexpr Newtonsoft::Json::Bson::BsonType __get__currentElementType() const;

 Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState __declspec(property(get=__get__bsonReaderState, put=__set__bsonReaderState))  _bsonReaderState;

constexpr void __set__bsonReaderState(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState value) ;

constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState __get__bsonReaderState() const;

 Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext __declspec(property(get=__get__currentContext, put=__set__currentContext))  _currentContext;

constexpr void __set__currentContext(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext value) ;

constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext __get__currentContext() const;

 bool __declspec(property(get=__get__readRootValueAsArray, put=__set__readRootValueAsArray))  _readRootValueAsArray;

constexpr void __set__readRootValueAsArray(bool value) ;

constexpr bool __get__readRootValueAsArray() const;

 bool __declspec(property(get=__get__jsonNet35BinaryCompatibility, put=__set__jsonNet35BinaryCompatibility))  _jsonNet35BinaryCompatibility;

constexpr void __set__jsonNet35BinaryCompatibility(bool value) ;

constexpr bool __get__jsonNet35BinaryCompatibility() const;

 System::DateTimeKind __declspec(property(get=__get__dateTimeKindHandling, put=__set__dateTimeKindHandling))  _dateTimeKindHandling;

constexpr void __set__dateTimeKindHandling(System::DateTimeKind value) ;

constexpr System::DateTimeKind __get__dateTimeKindHandling() const;


// Properties

 bool __declspec(property(get=get_JsonNet35BinaryCompatibility, put=set_JsonNet35BinaryCompatibility))  JsonNet35BinaryCompatibility;

 bool __declspec(property(get=get_ReadRootValueAsArray, put=set_ReadRootValueAsArray))  ReadRootValueAsArray;

 System::DateTimeKind __declspec(property(get=get_DateTimeKindHandling, put=set_DateTimeKindHandling))  DateTimeKindHandling;


// Methods

/// @brief Method get_JsonNet35BinaryCompatibility addr 0x254e494 size 0x8 virtual false final false
 bool get_JsonNet35BinaryCompatibility() ;

/// @brief Method set_JsonNet35BinaryCompatibility addr 0x254e49c size 0xc virtual false final false
 void set_JsonNet35BinaryCompatibility(bool value) ;

/// @brief Method get_ReadRootValueAsArray addr 0x254e4a8 size 0x8 virtual false final false
 bool get_ReadRootValueAsArray() ;

/// @brief Method set_ReadRootValueAsArray addr 0x254e4b0 size 0xc virtual false final false
 void set_ReadRootValueAsArray(bool value) ;

/// @brief Method get_DateTimeKindHandling addr 0x254e4bc size 0x8 virtual false final false
 System::DateTimeKind get_DateTimeKindHandling() ;

/// @brief Method set_DateTimeKindHandling addr 0x254e4c4 size 0x8 virtual false final false
 void set_DateTimeKindHandling(System::DateTimeKind value) ;

static Newtonsoft::Json::Bson::BsonReader New_ctor(System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x254e4cc size 0xc virtual false final false
 void _ctor(System::IO::Stream stream) ;

static Newtonsoft::Json::Bson::BsonReader New_ctor(System::IO::BinaryReader reader) ;

/// @brief Method .ctor addr 0x254e5d8 size 0xc virtual false final false
 void _ctor(System::IO::BinaryReader reader) ;

static Newtonsoft::Json::Bson::BsonReader New_ctor(System::IO::Stream stream, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling) ;

/// @brief Method .ctor addr 0x254e4d8 size 0x100 virtual false final false
 void _ctor(System::IO::Stream stream, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling) ;

static Newtonsoft::Json::Bson::BsonReader New_ctor(System::IO::BinaryReader reader, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling) ;

/// @brief Method .ctor addr 0x254e5e4 size 0xd0 virtual false final false
 void _ctor(System::IO::BinaryReader reader, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling) ;

/// @brief Method ReadElement addr 0x254e6b4 size 0x1c virtual false final false
 ::StringW ReadElement() ;

/// @brief Method Read addr 0x254e974 size 0x1a8 virtual true final false
 bool Read() ;

/// @brief Method Close addr 0x254f0ac size 0x38 virtual true final false
 void Close() ;

/// @brief Method ReadCodeWScope addr 0x254eecc size 0x1e0 virtual false final false
 bool ReadCodeWScope() ;

/// @brief Method ReadReference addr 0x254ed10 size 0x1bc virtual false final false
 bool ReadReference() ;

/// @brief Method ReadNormal addr 0x254eb1c size 0x1f4 virtual false final false
 bool ReadNormal() ;

/// @brief Method PopContext addr 0x254f7e4 size 0xa4 virtual false final false
 void PopContext() ;

/// @brief Method PushContext addr 0x254f19c size 0xa8 virtual false final false
 void PushContext(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext newContext) ;

/// @brief Method ReadByte addr 0x254f7b0 size 0x34 virtual false final false
 uint8_t ReadByte() ;

/// @brief Method ReadType addr 0x254f27c size 0x534 virtual false final false
 void ReadType(Newtonsoft::Json::Bson::BsonType type) ;

/// @brief Method ReadBinary addr 0x254f8e4 size 0x58 virtual false final false
 ::ArrayW<uint8_t> ReadBinary(ByRef<Newtonsoft::Json::Bson::BsonBinaryType> binaryType) ;

/// @brief Method ReadString addr 0x254e704 size 0x270 virtual false final false
 ::StringW ReadString() ;

/// @brief Method ReadLengthString addr 0x254f11c size 0x58 virtual false final false
 ::StringW ReadLengthString() ;

/// @brief Method GetString addr 0x254faa4 size 0x274 virtual false final false
 ::StringW GetString(int32_t length) ;

/// @brief Method GetLastFullCharStop addr 0x254fa20 size 0x84 virtual false final false
 int32_t GetLastFullCharStop(int32_t start) ;

/// @brief Method BytesInSequence addr 0x254fd18 size 0x1d0 virtual false final false
 int32_t BytesInSequence(uint8_t b) ;

/// @brief Method EnsureBuffers addr 0x254f974 size 0xac virtual false final false
 void EnsureBuffers() ;

/// @brief Method ReadDouble addr 0x254f8ac size 0x38 virtual false final false
 double_t ReadDouble() ;

/// @brief Method ReadInt32 addr 0x254f0e4 size 0x38 virtual false final false
 int32_t ReadInt32() ;

/// @brief Method ReadInt64 addr 0x254f93c size 0x38 virtual false final false
 int64_t ReadInt64() ;

/// @brief Method ReadType addr 0x254e6d0 size 0x34 virtual false final false
 Newtonsoft::Json::Bson::BsonType ReadType() ;

/// @brief Method MovePosition addr 0x254f888 size 0x24 virtual false final false
 void MovePosition(int32_t count) ;

/// @brief Method ReadBytes addr 0x254f244 size 0x38 virtual false final false
 ::ArrayW<uint8_t> ReadBytes(int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState, "Newtonsoft.Json.Bson", "BsonReader/BsonReaderState");
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonReader);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonReader, "Newtonsoft.Json.Bson", "BsonReader");
NEED_NO_BOX(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext, "Newtonsoft.Json.Bson", "BsonReader/ContainerContext");
