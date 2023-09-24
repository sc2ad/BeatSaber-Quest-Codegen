#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityOpus {
struct OpusSignal;
}
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct OpusApplication;
}
namespace System {
class IDisposable;
}
namespace UnityOpus {
struct SamplingFrequency;
}
// Forward declare root types
namespace UnityOpus {
class Encoder;
}
// Type: UnityOpus::Encoder
namespace UnityOpus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6152))
// CS Name: UnityOpus.Encoder
class CORDL_TYPE Encoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: " const&", def_value: None }]
constexpr Encoder(Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "&&", def_value: None }]
constexpr Encoder(Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Encoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Encoder& operator=(Encoder&& o) noexcept = default;
  constexpr Encoder& operator=(Encoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_bitrate, put=__set_bitrate))  bitrate;

constexpr void __set_bitrate(int32_t value) ;

constexpr int32_t __get_bitrate() const;

 int32_t __declspec(property(get=__get_complexity, put=__set_complexity))  complexity;

constexpr void __set_complexity(int32_t value) ;

constexpr int32_t __get_complexity() const;

 UnityOpus::OpusSignal __declspec(property(get=__get_signal, put=__set_signal))  signal;

constexpr void __set_signal(UnityOpus::OpusSignal value) ;

constexpr UnityOpus::OpusSignal __get_signal() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_encoder, put=__set_encoder))  encoder;

constexpr void __set_encoder(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_encoder() const;

 UnityOpus::NumChannels __declspec(property(get=__get_channels, put=__set_channels))  channels;

constexpr void __set_channels(UnityOpus::NumChannels value) ;

constexpr UnityOpus::NumChannels __get_channels() const;

 bool __declspec(property(get=__get_disposedValue, put=__set_disposedValue))  disposedValue;

constexpr void __set_disposedValue(bool value) ;

constexpr bool __get_disposedValue() const;


// Properties

 int32_t __declspec(property(get=get_Bitrate, put=set_Bitrate))  Bitrate;

 int32_t __declspec(property(get=get_Complexity, put=set_Complexity))  Complexity;

 UnityOpus::OpusSignal __declspec(property(get=get_Signal, put=set_Signal))  Signal;


// Methods

/// @brief Method get_Bitrate addr 0x21d67e0 size 0x8 virtual false final false
 int32_t get_Bitrate() ;

/// @brief Method set_Bitrate addr 0x21d67e8 size 0x28 virtual false final false
 void set_Bitrate(int32_t value) ;

/// @brief Method get_Complexity addr 0x21d6894 size 0x8 virtual false final false
 int32_t get_Complexity() ;

/// @brief Method set_Complexity addr 0x21d689c size 0x28 virtual false final false
 void set_Complexity(int32_t value) ;

/// @brief Method get_Signal addr 0x21d6948 size 0x8 virtual false final false
 UnityOpus::OpusSignal get_Signal() ;

/// @brief Method set_Signal addr 0x21d6950 size 0x28 virtual false final false
 void set_Signal(UnityOpus::OpusSignal value) ;

static UnityOpus::Encoder New_ctor(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels, UnityOpus::OpusApplication application) ;

/// @brief Method .ctor addr 0x21d69fc size 0x130 virtual false final false
 void _ctor(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels, UnityOpus::OpusApplication application) ;

/// @brief Method Encode addr 0x21d6bc8 size 0xb0 virtual false final false
 int32_t Encode(::ArrayW<float_t> pcm, int32_t count, ::ArrayW<uint8_t> output) ;

/// @brief Method Dispose addr 0x21d6d34 size 0x84 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x21d6e34 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x21d6ed4 size 0x6c virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityOpus
NEED_NO_BOX(UnityOpus::Encoder);
DEFINE_IL2CPP_ARG_TYPE(UnityOpus::Encoder, "UnityOpus", "Encoder");
