#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace MidiParser {
class MidiTrack;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace MidiParser {
class MidiFile;
}
namespace MidiParser {
class ____MidiParser__MidiFile__Reader;
}
// Type: ::Reader
namespace MidiParser {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16043))
// CS Name: MidiParser.MidiFile::Reader
class CORDL_TYPE ____MidiParser__MidiFile__Reader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____MidiParser__MidiFile__Reader() = default;

// Ctor Parameters [CppParam { name: "", ty: "____MidiParser__MidiFile__Reader", modifiers: " const&", def_value: None }]
constexpr ____MidiParser__MidiFile__Reader(____MidiParser__MidiFile__Reader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____MidiParser__MidiFile__Reader", modifiers: "&&", def_value: None }]
constexpr ____MidiParser__MidiFile__Reader(____MidiParser__MidiFile__Reader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____MidiParser__MidiFile__Reader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____MidiParser__MidiFile__Reader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____MidiParser__MidiFile__Reader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____MidiParser__MidiFile__Reader& operator=(____MidiParser__MidiFile__Reader&& o) noexcept = default;
  constexpr ____MidiParser__MidiFile__Reader& operator=(____MidiParser__MidiFile__Reader const& o) noexcept = default;
                


// Methods

/// @brief Method Read16 addr 0x2278830 size 0x54 virtual false final false
static int32_t Read16(::ArrayW<uint8_t> data, ByRef<int32_t> i) ;

/// @brief Method Read32 addr 0x22787a0 size 0x90 virtual false final false
static int32_t Read32(::ArrayW<uint8_t> data, ByRef<int32_t> i) ;

/// @brief Method Read8 addr 0x2278dac size 0x38 virtual false final false
static uint8_t Read8(::ArrayW<uint8_t> data, ByRef<int32_t> i) ;

/// @brief Method ReadAllBytesFromStream addr 0x2278de4 size 0x228 virtual false final false
static ::ArrayW<uint8_t> ReadAllBytesFromStream(::System::IO::Stream input) ;

/// @brief Method ReadString addr 0x2278748 size 0x58 virtual false final false
static ::StringW ReadString(::ArrayW<uint8_t> data, ByRef<int32_t> i, int32_t length) ;

/// @brief Method ReadVarInt addr 0x2278cac size 0x84 virtual false final false
static int32_t ReadVarInt(::ArrayW<uint8_t> data, ByRef<int32_t> i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MidiParser
// Type: MidiParser::MidiFile
namespace MidiParser {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16044))
// CS Name: MidiParser.MidiFile
class CORDL_TYPE MidiFile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Reader = ::MidiParser::____MidiParser__MidiFile__Reader;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MidiFile() = default;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: " const&", def_value: None }]
constexpr MidiFile(MidiFile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "&&", def_value: None }]
constexpr MidiFile(MidiFile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MidiFile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MidiFile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MidiFile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MidiFile& operator=(MidiFile&& o) noexcept = default;
  constexpr MidiFile& operator=(MidiFile const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(int32_t value) ;

constexpr int32_t __get_format() const;

 int32_t __declspec(property(get=__get_ticksPerQuarterNote, put=__set_ticksPerQuarterNote))  ticksPerQuarterNote;

constexpr void __set_ticksPerQuarterNote(int32_t value) ;

constexpr int32_t __get_ticksPerQuarterNote() const;

 ::ArrayW<::MidiParser::MidiTrack> __declspec(property(get=__get_tracks, put=__set_tracks))  tracks;

constexpr void __set_tracks(::ArrayW<::MidiParser::MidiTrack> value) ;

constexpr ::ArrayW<::MidiParser::MidiTrack> __get_tracks() const;

 int32_t __declspec(property(get=__get_tracksCount, put=__set_tracksCount))  tracksCount;

constexpr void __set_tracksCount(int32_t value) ;

constexpr int32_t __get_tracksCount() const;


// Methods

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
explicit MidiFile(::StringW path) ;

/// @brief Method .ctor addr 0x2278430 size 0x24 virtual false final false
 void _ctor(::StringW path) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit MidiFile(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x2278454 size 0x2f4 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

/// @brief Method ParseMetaEvent addr 0x2278bc8 size 0xe4 virtual false final false
static bool ParseMetaEvent(::ArrayW<uint8_t> data, ByRef<int32_t> position, uint8_t metaEventType, ByRef<int32_t> data1, ByRef<int32_t> data2) ;

/// @brief Method ParseTrack addr 0x2278884 size 0x344 virtual false final false
static ::MidiParser::MidiTrack ParseTrack(int32_t index, ::ArrayW<uint8_t> data, ByRef<int32_t> position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MidiParser
} // end anonymous namespace
NEED_NO_BOX(::MidiParser::MidiFile);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiFile, "MidiParser", "MidiFile");
NEED_NO_BOX(::MidiParser::____MidiParser__MidiFile__Reader);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::____MidiParser__MidiFile__Reader, "MidiParser", "MidiFile/Reader");
