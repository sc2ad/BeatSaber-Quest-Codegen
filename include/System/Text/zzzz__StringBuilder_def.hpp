#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
struct ParamsArray;
}
// Forward declare root types
namespace System::Text {
class StringBuilder;
}
// Type: System.Text::StringBuilder
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2849))
// CS Name: System.Text.StringBuilder
class CORDL_TYPE StringBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StringBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: " const&", def_value: None }]
constexpr StringBuilder(StringBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: "&&", def_value: None }]
constexpr StringBuilder(StringBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringBuilder& operator=(StringBuilder&& o) noexcept = default;
  constexpr StringBuilder& operator=(StringBuilder const& o) noexcept = default;
                


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get_m_ChunkChars, put=__set_m_ChunkChars))  m_ChunkChars;

constexpr void __set_m_ChunkChars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_m_ChunkChars() const;

 System::Text::StringBuilder __declspec(property(get=__get_m_ChunkPrevious, put=__set_m_ChunkPrevious))  m_ChunkPrevious;

constexpr void __set_m_ChunkPrevious(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_m_ChunkPrevious() const;

 int32_t __declspec(property(get=__get_m_ChunkLength, put=__set_m_ChunkLength))  m_ChunkLength;

constexpr void __set_m_ChunkLength(int32_t value) ;

constexpr int32_t __get_m_ChunkLength() const;

 int32_t __declspec(property(get=__get_m_ChunkOffset, put=__set_m_ChunkOffset))  m_ChunkOffset;

constexpr void __set_m_ChunkOffset(int32_t value) ;

constexpr int32_t __get_m_ChunkOffset() const;

 int32_t __declspec(property(get=__get_m_MaxCapacity, put=__set_m_MaxCapacity))  m_MaxCapacity;

constexpr void __set_m_MaxCapacity(int32_t value) ;

constexpr int32_t __get_m_MaxCapacity() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{16};

/// @brief Field CapacityField offset 0
static constexpr ::ConstString  CapacityField{u"Capacity"};

/// @brief Field MaxCapacityField offset 0
static constexpr ::ConstString  MaxCapacityField{u"m_MaxCapacity"};

/// @brief Field StringValueField offset 0
static constexpr ::ConstString  StringValueField{u"m_StringValue"};

/// @brief Field ThreadIDField offset 0
static constexpr ::ConstString  ThreadIDField{u"m_currentThread"};

/// @brief Field MaxChunkSize offset 0
static constexpr int32_t  MaxChunkSize{8000};

/// @brief Field IndexLimit offset 0
static constexpr int32_t  IndexLimit{1000000};

/// @brief Field WidthLimit offset 0
static constexpr int32_t  WidthLimit{1000000};


// Properties

 int32_t __declspec(property(get=get_Capacity, put=set_Capacity))  Capacity;

 int32_t __declspec(property(get=get_MaxCapacity))  MaxCapacity;

 int32_t __declspec(property(get=get_Length, put=set_Length))  Length;

 char16_t __declspec(property(get=get_Chars, put=set_Chars))  Chars;

 System::Span_1<char16_t> __declspec(property(get=get_RemainingCurrentChunk))  RemainingCurrentChunk;


// Methods

// Ctor Parameters []
explicit StringBuilder() ;

/// @brief Method .ctor addr 0x22cc008 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit StringBuilder(int32_t capacity) ;

/// @brief Method .ctor addr 0x22cc06c size 0x8 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit StringBuilder(::StringW value) ;

/// @brief Method .ctor addr 0x22cc248 size 0x1c virtual false final false
 void _ctor(::StringW value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit StringBuilder(::StringW value, int32_t capacity) ;

/// @brief Method .ctor addr 0x22cc264 size 0x1c virtual false final false
 void _ctor(::StringW value, int32_t capacity) ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit StringBuilder(::StringW value, int32_t startIndex, int32_t length, int32_t capacity) ;

/// @brief Method .ctor addr 0x22cc280 size 0x25c virtual false final false
 void _ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit StringBuilder(int32_t capacity, int32_t maxCapacity) ;

/// @brief Method .ctor addr 0x22cc074 size 0x1d4 virtual false final false
 void _ctor(int32_t capacity, int32_t maxCapacity) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit StringBuilder(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22cc5a8 size 0x2fc virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22cc8a4 size 0x148 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Capacity addr 0x22cc9ec size 0x24 virtual false final false
 int32_t get_Capacity() ;

/// @brief Method set_Capacity addr 0x22cca10 size 0x17c virtual false final false
 void set_Capacity(int32_t value) ;

/// @brief Method get_MaxCapacity addr 0x22ccb98 size 0x8 virtual false final false
 int32_t get_MaxCapacity() ;

/// @brief Method EnsureCapacity addr 0x22ccba0 size 0xb8 virtual false final false
 int32_t EnsureCapacity(int32_t capacity) ;

/// @brief Method ToString addr 0x22ccc58 size 0x140 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x22ccd98 size 0x1d4 virtual false final false
 ::StringW ToString(int32_t startIndex, int32_t length) ;

/// @brief Method Clear addr 0x22cd144 size 0x1c virtual false final false
 System::Text::StringBuilder Clear() ;

/// @brief Method get_Length addr 0x22ccb8c size 0xc virtual false final false
 int32_t get_Length() ;

/// @brief Method set_Length addr 0x22cd160 size 0x250 virtual false final false
 void set_Length(int32_t value) ;

/// @brief Method get_Chars addr 0x22cd51c size 0x90 virtual false final false
 char16_t get_Chars(int32_t index) ;

/// @brief Method set_Chars addr 0x22cd5ac size 0xbc virtual false final false
 void set_Chars(int32_t index, char16_t value) ;

/// @brief Method Append addr 0x22cd3b0 size 0x144 virtual false final false
 System::Text::StringBuilder Append(char16_t value, int32_t repeatCount) ;

/// @brief Method Append addr 0x22cd808 size 0x14c virtual false final false
 System::Text::StringBuilder Append(::ArrayW<char16_t> value, int32_t startIndex, int32_t charCount) ;

/// @brief Method Append addr 0x22cdaac size 0x104 virtual false final false
 System::Text::StringBuilder Append(::StringW value) ;

/// @brief Method AppendHelper addr 0x22cdbb0 size 0x38 virtual false final false
 void AppendHelper(::StringW value) ;

/// @brief Method Append addr 0x22cdbe8 size 0x144 virtual false final false
 System::Text::StringBuilder Append(::StringW value, int32_t startIndex, int32_t count) ;

/// @brief Method Append addr 0x22cdd2c size 0x1c virtual false final false
 System::Text::StringBuilder Append(System::Text::StringBuilder value) ;

/// @brief Method AppendCore addr 0x22cdd48 size 0x254 virtual false final false
 System::Text::StringBuilder AppendCore(System::Text::StringBuilder value, int32_t startIndex, int32_t count) ;

/// @brief Method AppendLine addr 0x22cdf9c size 0x20 virtual false final false
 System::Text::StringBuilder AppendLine() ;

/// @brief Method AppendLine addr 0x22cdfbc size 0x24 virtual false final false
 System::Text::StringBuilder AppendLine(::StringW value) ;

/// @brief Method CopyTo addr 0x22ccf6c size 0x1d8 virtual false final false
 void CopyTo(int32_t sourceIndex, System::Span_1<char16_t> destination, int32_t count) ;

/// @brief Method Remove addr 0x22ce150 size 0x140 virtual false final false
 System::Text::StringBuilder Remove(int32_t startIndex, int32_t length) ;

/// @brief Method Append addr 0x22ce3e0 size 0x38 virtual false final false
 System::Text::StringBuilder Append(bool value) ;

/// @brief Method Append addr 0x22ce418 size 0x50 virtual false final false
 System::Text::StringBuilder Append(char16_t value) ;

/// @brief Method Append addr 0x22ce468 size 0x58 virtual false final false
 System::Text::StringBuilder Append(uint8_t value) ;

/// @brief Method Append addr 0x22ce4c0 size 0x58 virtual false final false
 System::Text::StringBuilder Append(int32_t value) ;

/// @brief Method Append addr 0x22ce518 size 0x58 virtual false final false
 System::Text::StringBuilder Append(int64_t value) ;

/// @brief Method Append addr 0x22ce570 size 0x58 virtual false final false
 System::Text::StringBuilder Append(double_t value) ;

/// @brief Method Append addr 0x22ce5c8 size 0x58 virtual false final false
 System::Text::StringBuilder Append(uint32_t value) ;

/// @brief Method AppendSpanFormattable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Text::StringBuilder AppendSpanFormattable(T value) ;

/// @brief Method Append addr 0x22ce620 size 0x38 virtual false final false
 System::Text::StringBuilder Append(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Append addr 0x22ce658 size 0x28 virtual false final false
 System::Text::StringBuilder Append(::ArrayW<char16_t> value) ;

/// @brief Method Append addr 0x22ce680 size 0x88 virtual false final false
 System::Text::StringBuilder Append(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method Insert addr 0x22ce708 size 0xb4 virtual false final false
 System::Text::StringBuilder Insert(int32_t index, ::StringW value) ;

/// @brief Method Insert addr 0x22ce890 size 0x2c virtual false final false
 System::Text::StringBuilder Insert(int32_t index, char16_t value) ;

/// @brief Method AppendFormat addr 0x22ce8bc size 0x58 virtual false final false
 System::Text::StringBuilder AppendFormat(::StringW format, ::bs_hook::Il2CppWrapperType arg0) ;

/// @brief Method AppendFormat addr 0x22cf420 size 0x5c virtual false final false
 System::Text::StringBuilder AppendFormat(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1) ;

/// @brief Method AppendFormat addr 0x22cf47c size 0x60 virtual false final false
 System::Text::StringBuilder AppendFormat(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method AppendFormat addr 0x22cf4dc size 0xbc virtual false final false
 System::Text::StringBuilder AppendFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method AppendFormat addr 0x22cf598 size 0x5c virtual false final false
 System::Text::StringBuilder AppendFormat(System::IFormatProvider provider, ::StringW format, ::bs_hook::Il2CppWrapperType arg0) ;

/// @brief Method AppendFormat addr 0x22cf5f4 size 0x64 virtual false final false
 System::Text::StringBuilder AppendFormat(System::IFormatProvider provider, ::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method FormatError addr 0x22cf658 size 0x50 virtual false final false
static void FormatError() ;

/// @brief Method AppendFormatHelper addr 0x22ce914 size 0xb0c virtual false final false
 System::Text::StringBuilder AppendFormatHelper(System::IFormatProvider provider, ::StringW format, System::ParamsArray args) ;

/// @brief Method Replace addr 0x22cf6a8 size 0x10 virtual false final false
 System::Text::StringBuilder Replace(::StringW oldValue, ::StringW newValue) ;

/// @brief Method Replace addr 0x22cf6b8 size 0x330 virtual false final false
 System::Text::StringBuilder Replace(::StringW oldValue, ::StringW newValue, int32_t startIndex, int32_t count) ;

/// @brief Method Append addr 0x22cd954 size 0x158 virtual false final false
 System::Text::StringBuilder Append(void* value, int32_t valueCount) ;

/// @brief Method Insert addr 0x22ce7bc size 0xd4 virtual false final false
 void Insert(int32_t index, void* value, int32_t valueCount) ;

/// @brief Method ReplaceAllInChunk addr 0x22cfac0 size 0x1bc virtual false final false
 void ReplaceAllInChunk(::ArrayW<int32_t> replacements, int32_t replacementsCount, System::Text::StringBuilder sourceChunk, int32_t removeCount, ::StringW value) ;

/// @brief Method StartsWith addr 0x22cf9e8 size 0xd8 virtual false final false
 bool StartsWith(System::Text::StringBuilder chunk, int32_t indexInChunk, int32_t count, ::StringW value) ;

/// @brief Method ReplaceInPlaceAtChunk addr 0x22cff2c size 0x108 virtual false final false
 void ReplaceInPlaceAtChunk(ByRef<System::Text::StringBuilder> chunk, ByRef<int32_t> indexInChunk, void* value, int32_t count) ;

/// @brief Method ThreadSafeCopy addr 0x22cc4dc size 0xcc virtual false final false
static void ThreadSafeCopy(void* sourcePtr, ::ArrayW<char16_t> destination, int32_t destinationIndex, int32_t count) ;

/// @brief Method ThreadSafeCopy addr 0x22cdfe0 size 0x170 virtual false final false
static void ThreadSafeCopy(::ArrayW<char16_t> source, int32_t sourceIndex, System::Span_1<char16_t> destination, int32_t destinationIndex, int32_t count) ;

/// @brief Method FindChunkForIndex addr 0x22cd4f4 size 0x28 virtual false final false
 System::Text::StringBuilder FindChunkForIndex(int32_t index) ;

/// @brief Method get_RemainingCurrentChunk addr 0x22d0074 size 0xac virtual false final false
 System::Span_1<char16_t> get_RemainingCurrentChunk() ;

/// @brief Method Next addr 0x22d0034 size 0x40 virtual false final false
 System::Text::StringBuilder Next(System::Text::StringBuilder chunk) ;

/// @brief Method ExpandByABlock addr 0x22cd668 size 0x1a0 virtual false final false
 void ExpandByABlock(int32_t minBlockCharCount) ;

// Ctor Parameters [CppParam { name: "from", ty: "System::Text::StringBuilder", modifiers: "", def_value: None }]
explicit StringBuilder(System::Text::StringBuilder from) ;

/// @brief Method .ctor addr 0x22d0120 size 0x44 virtual false final false
 void _ctor(System::Text::StringBuilder from) ;

/// @brief Method MakeRoom addr 0x22cfc7c size 0x2b0 virtual false final false
 void MakeRoom(int32_t index, int32_t count, ByRef<System::Text::StringBuilder> chunk, ByRef<int32_t> indexInChunk, bool doNotMoveFollowingChars) ;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "previousBlock", ty: "System::Text::StringBuilder", modifiers: "", def_value: None }]
explicit StringBuilder(int32_t size, int32_t maxCapacity, System::Text::StringBuilder previousBlock) ;

/// @brief Method .ctor addr 0x22d0164 size 0x8c virtual false final false
 void _ctor(int32_t size, int32_t maxCapacity, System::Text::StringBuilder previousBlock) ;

/// @brief Method Remove addr 0x22ce290 size 0x150 virtual false final false
 void Remove(int32_t startIndex, int32_t count, ByRef<System::Text::StringBuilder> chunk, ByRef<int32_t> indexInChunk) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::StringBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::StringBuilder, "System.Text", "StringBuilder");
