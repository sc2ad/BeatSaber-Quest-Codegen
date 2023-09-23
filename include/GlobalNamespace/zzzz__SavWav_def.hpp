#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SavWav;
}
// Type: ::SavWav
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5464))
// CS Name: SavWav
class CORDL_TYPE SavWav : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SavWav() = default;

// Ctor Parameters [CppParam { name: "", ty: "SavWav", modifiers: " const&", def_value: None }]
constexpr SavWav(SavWav const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SavWav", modifiers: "&&", def_value: None }]
constexpr SavWav(SavWav&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SavWav(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SavWav& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SavWav& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SavWav& operator=(SavWav&& o) noexcept = default;
  constexpr SavWav& operator=(SavWav const& o) noexcept = default;
                


// Fields

/// @brief Field HeaderSize offset 0
static constexpr uint32_t  HeaderSize{44u};

/// @brief Field RescaleFactor offset 0
static constexpr float_t  RescaleFactor{32767};


// Methods

/// @brief Method Save addr 0x2116168 size 0x3a8 virtual false final false
static void Save(::StringW filepath, UnityEngine::AudioClip clip, float_t start, float_t duration) ;

/// @brief Method GetWav addr 0x2116510 size 0x40 virtual false final false
static ::ArrayW<uint8_t> GetWav(UnityEngine::AudioClip clip, ByRef<uint32_t> length, float_t start, float_t duration) ;

/// @brief Method ConvertAndWrite addr 0x2116550 size 0x268 virtual false final false
static ::ArrayW<uint8_t> ConvertAndWrite(UnityEngine::AudioClip clip, ByRef<uint32_t> length, ByRef<uint32_t> samplesAfterTrimming, float_t start, float_t duration) ;

/// @brief Method AddDataToBuffer addr 0x2116a68 size 0x70 virtual false final false
static void AddDataToBuffer(::ArrayW<uint8_t> buffer, ByRef<uint32_t> offset, ::ArrayW<uint8_t> addBytes) ;

/// @brief Method WriteHeader addr 0x21167b8 size 0x2b0 virtual false final false
static void WriteHeader(::ArrayW<uint8_t> stream, UnityEngine::AudioClip clip, uint32_t length, uint32_t samples) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SavWav);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SavWav, "", "SavWav");
