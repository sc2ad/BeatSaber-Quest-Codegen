#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class MemoryHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
struct ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion;
}
// Type: ::BitRegion
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6760))
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers::BitRegion
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sizeInBits", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion(uint32_t bitOffset, uint32_t sizeInBits) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion(____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion(____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion& operator=(____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion& operator=(____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_bitOffset, put=__set_bitOffset))  bitOffset;

constexpr void __set_bitOffset(uint32_t value) ;

constexpr uint32_t __get_bitOffset() const;

 uint32_t __declspec(property(get=__get_sizeInBits, put=__set_sizeInBits))  sizeInBits;

constexpr void __set_sizeInBits(uint32_t value) ;

constexpr uint32_t __get_sizeInBits() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_isEmpty addr 0x2981388 size 0x10 virtual false final false
 bool get_isEmpty() ;

/// @brief Method .ctor addr 0x2981398 size 0x8 virtual false final false
 void _ctor(uint32_t bitOffset, uint32_t sizeInBits) ;

/// @brief Method .ctor addr 0x29813a0 size 0xc virtual false final false
 void _ctor(uint32_t byteOffset, uint32_t bitOffset, uint32_t sizeInBits) ;

/// @brief Method Overlap addr 0x29813ac size 0xc8 virtual false final false
 ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion Overlap(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::MemoryHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6761))
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers
class CORDL_TYPE MemoryHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BitRegion = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemoryHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryHelpers", modifiers: " const&", def_value: None }]
constexpr MemoryHelpers(MemoryHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryHelpers", modifiers: "&&", def_value: None }]
constexpr MemoryHelpers(MemoryHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryHelpers& operator=(MemoryHelpers&& o) noexcept = default;
  constexpr MemoryHelpers& operator=(MemoryHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x2980adc size 0x44 virtual false final false
static bool Compare(void* ptr1, void* ptr2, ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion region) ;

/// @brief Method ComputeFollowingByteOffset addr 0x2980c90 size 0x10 virtual false final false
static uint32_t ComputeFollowingByteOffset(uint32_t byteOffset, uint32_t sizeInBits) ;

/// @brief Method WriteSingleBit addr 0x2980ca0 size 0x30 virtual false final false
static void WriteSingleBit(void* ptr, uint32_t bitOffset, bool value) ;

/// @brief Method ReadSingleBit addr 0x2980b20 size 0x24 virtual false final false
static bool ReadSingleBit(void* ptr, uint32_t bitOffset) ;

/// @brief Method MemCpyBitRegion addr 0x2980cd0 size 0xec virtual false final false
static void MemCpyBitRegion(void* destination, void* source, uint32_t bitOffset, uint32_t bitCount) ;

/// @brief Method MemCmpBitRegion addr 0x2980b44 size 0x14c virtual false final false
static bool MemCmpBitRegion(void* ptr1, void* ptr2, uint32_t bitOffset, uint32_t bitCount, void* mask) ;

/// @brief Method MemSet addr 0x2980dbc size 0x64 virtual false final false
static void MemSet(void* destination, int32_t numBytes, uint8_t value) ;

/// @brief Method MemCpyMasked addr 0x2980e20 size 0x8c virtual false final false
static void MemCpyMasked(void* destination, void* source, int32_t numBytes, void* mask) ;

/// @brief Method ReadMultipleBitsAsUInt addr 0x2979418 size 0x194 virtual false final false
static uint32_t ReadMultipleBitsAsUInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) ;

/// @brief Method WriteUIntAsMultipleBits addr 0x2980eac size 0x1b8 virtual false final false
static void WriteUIntAsMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, uint32_t value) ;

/// @brief Method ReadTwosComplementMultipleBitsAsInt addr 0x2977d54 size 0x4 virtual false final false
static int32_t ReadTwosComplementMultipleBitsAsInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) ;

/// @brief Method WriteIntAsTwosComplementMultipleBits addr 0x2977e40 size 0x4 virtual false final false
static void WriteIntAsTwosComplementMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value) ;

/// @brief Method ReadExcessKMultipleBitsAsInt addr 0x2981064 size 0x24 virtual false final false
static int32_t ReadExcessKMultipleBitsAsInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) ;

/// @brief Method WriteIntAsExcessKMultipleBits addr 0x2981088 size 0x14 virtual false final false
static void WriteIntAsExcessKMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value) ;

/// @brief Method ReadMultipleBitsAsNormalizedUInt addr 0x298109c size 0x4c virtual false final false
static float_t ReadMultipleBitsAsNormalizedUInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) ;

/// @brief Method WriteNormalizedUIntAsMultipleBits addr 0x29810e8 size 0x50 virtual false final false
static void WriteNormalizedUIntAsMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, float_t value) ;

/// @brief Method SetBitsInBuffer addr 0x2981138 size 0x1cc virtual false final false
static void SetBitsInBuffer(void* buffer, int32_t byteOffset, int32_t bitOffset, int32_t sizeInBits, bool value) ;

/// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void Swap(ByRef<TValue> a, ByRef<TValue> b) ;

/// @brief Method AlignNatural addr 0x2981304 size 0x84 virtual false final false
static uint32_t AlignNatural(uint32_t offset, uint32_t sizeInBytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::MemoryHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::MemoryHelpers, "UnityEngine.InputSystem.Utilities", "MemoryHelpers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion, "UnityEngine.InputSystem.Utilities", "MemoryHelpers/BitRegion");
