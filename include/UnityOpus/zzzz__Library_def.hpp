#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct ErrorCode;
}
namespace UnityOpus {
struct OpusApplication;
}
namespace UnityOpus {
struct OpusSignal;
}
namespace UnityOpus {
struct SamplingFrequency;
}
// Forward declare root types
namespace UnityOpus {
class Library;
}
// Type: UnityOpus::Library
namespace UnityOpus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6158))
// CS Name: UnityOpus.Library
class CORDL_TYPE Library : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Library() = default;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: " const&", def_value: None }]
constexpr Library(Library const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "&&", def_value: None }]
constexpr Library(Library&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Library(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Library& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Library& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Library& operator=(Library&& o) noexcept = default;
  constexpr Library& operator=(Library const& o) noexcept = default;
                


// Fields

/// @brief Field maximumPacketDuration offset 0
static constexpr int32_t  maximumPacketDuration{5760};

/// @brief Field dllName offset 0
static constexpr ::ConstString  dllName{u"unityopus"};


// Methods

/// @brief Method OpusEncoderCreate addr 0x21d6b2c size 0x9c virtual false final false
static ::cordl_internals::intptr_t OpusEncoderCreate(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels, UnityOpus::OpusApplication application, ByRef<UnityOpus::ErrorCode> error) ;

/// @brief Method OpusEncode addr 0x21d6f40 size 0xbc virtual false final false
static int32_t OpusEncode(::cordl_internals::intptr_t encoder, ::ArrayW<int16_t> pcm, int32_t frameSize, ::ArrayW<uint8_t> data, int32_t maxDataBytes) ;

/// @brief Method OpusEncodeFloat addr 0x21d6c78 size 0xbc virtual false final false
static int32_t OpusEncodeFloat(::cordl_internals::intptr_t encoder, ::ArrayW<float_t> pcm, int32_t frameSize, ::ArrayW<uint8_t> data, int32_t maxDataBytes) ;

/// @brief Method OpusEncoderDestroy addr 0x21d6db8 size 0x7c virtual false final false
static void OpusEncoderDestroy(::cordl_internals::intptr_t encoder) ;

/// @brief Method OpusEncoderSetBitrate addr 0x21d6810 size 0x84 virtual false final false
static int32_t OpusEncoderSetBitrate(::cordl_internals::intptr_t encoder, int32_t bitrate) ;

/// @brief Method OpusEncoderSetComplexity addr 0x21d68c4 size 0x84 virtual false final false
static int32_t OpusEncoderSetComplexity(::cordl_internals::intptr_t encoder, int32_t complexity) ;

/// @brief Method OpusEncoderSetSignal addr 0x21d6978 size 0x84 virtual false final false
static int32_t OpusEncoderSetSignal(::cordl_internals::intptr_t encoder, UnityOpus::OpusSignal signal) ;

/// @brief Method OpusDecoderCreate addr 0x21d6304 size 0x94 virtual false final false
static ::cordl_internals::intptr_t OpusDecoderCreate(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels, ByRef<UnityOpus::ErrorCode> error) ;

/// @brief Method OpusDecode addr 0x21d6ffc size 0xc4 virtual false final false
static int32_t OpusDecode(::cordl_internals::intptr_t decoder, ::ArrayW<uint8_t> data, int32_t len, ::ArrayW<int16_t> pcm, int32_t frameSize, int32_t decodeFec) ;

/// @brief Method OpusDecodeFloat addr 0x21d6464 size 0xc4 virtual false final false
static int32_t OpusDecodeFloat(::cordl_internals::intptr_t decoder, ::ArrayW<uint8_t> data, int32_t len, ::ArrayW<float_t> pcm, int32_t frameSize, int32_t decodeFec) ;

/// @brief Method OpusDecoderDestroy addr 0x21d6658 size 0x7c virtual false final false
static void OpusDecoderDestroy(::cordl_internals::intptr_t decoder) ;

/// @brief Method OpusPcmSoftClip addr 0x21d6528 size 0xac virtual false final false
static void OpusPcmSoftClip(::ArrayW<float_t> pcm, int32_t frameSize, UnityOpus::NumChannels channels, ::ArrayW<float_t> softclipMem) ;

static UnityOpus::Library New_ctor() ;

/// @brief Method .ctor addr 0x21d70c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityOpus
NEED_NO_BOX(UnityOpus::Library);
DEFINE_IL2CPP_ARG_TYPE(UnityOpus::Library, "UnityOpus", "Library");
