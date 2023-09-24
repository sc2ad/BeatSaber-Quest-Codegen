#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct SamplingFrequency;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityOpus {
class Decoder;
}
// Type: UnityOpus::Decoder
namespace UnityOpus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6151))
// CS Name: UnityOpus.Decoder
class CORDL_TYPE Decoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: " const&", def_value: None }]
constexpr Decoder(Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "&&", def_value: None }]
constexpr Decoder(Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Decoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Decoder& operator=(Decoder&& o) noexcept = default;
  constexpr Decoder& operator=(Decoder const& o) noexcept = default;
                


// Fields

/// @brief Field maximumPacketDuration offset 0
static constexpr int32_t  maximumPacketDuration{5760};

 ::cordl_internals::intptr_t __declspec(property(get=__get_decoder, put=__set_decoder))  decoder;

constexpr void __set_decoder(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_decoder() const;

 UnityOpus::NumChannels __declspec(property(get=__get_channels, put=__set_channels))  channels;

constexpr void __set_channels(UnityOpus::NumChannels value) ;

constexpr UnityOpus::NumChannels __get_channels() const;

 ::ArrayW<float_t> __declspec(property(get=__get_softclipMem, put=__set_softclipMem))  softclipMem;

constexpr void __set_softclipMem(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_softclipMem() const;

 bool __declspec(property(get=__get_disposedValue, put=__set_disposedValue))  disposedValue;

constexpr void __set_disposedValue(bool value) ;

constexpr bool __get_disposedValue() const;


// Methods

static UnityOpus::Decoder New_ctor(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels) ;

/// @brief Method .ctor addr 0x21d61b0 size 0x154 virtual false final false
 void _ctor(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels) ;

/// @brief Method Decode addr 0x21d6398 size 0xcc virtual false final false
 int32_t Decode(::ArrayW<uint8_t> data, int32_t dataLength, ::ArrayW<float_t> pcm, int32_t decodeFec) ;

/// @brief Method Dispose addr 0x21d65d4 size 0x84 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x21d66d4 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x21d6774 size 0x6c virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityOpus
NEED_NO_BOX(UnityOpus::Decoder);
DEFINE_IL2CPP_ARG_TYPE(UnityOpus::Decoder, "UnityOpus", "Decoder");
