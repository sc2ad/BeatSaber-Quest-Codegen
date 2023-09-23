#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
// Type: UnityEngine.InputSystem.LowLevel::InputStateBlock
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6649))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateBlock
struct CORDL_TYPE InputStateBlock : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_format_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "_byteOffset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_bitOffset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputStateBlock(UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField, uint32_t _byteOffset_k__BackingField, uint32_t _bitOffset_k__BackingField, uint32_t _sizeInBits_k__BackingField) noexcept;


                    constexpr InputStateBlock(InputStateBlock const&) = default;
                    constexpr InputStateBlock(InputStateBlock&&) = default;
                    constexpr InputStateBlock& operator=(InputStateBlock const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputStateBlock& operator=(InputStateBlock&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputStateBlock(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field InvalidOffset offset 0
static constexpr uint32_t  InvalidOffset{4294967295u};

/// @brief Field AutomaticOffset offset 0
static constexpr uint32_t  AutomaticOffset{4294967294u};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatBit, put=__set_FormatBit))  FormatBit;

static void __set_FormatBit(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatBit() ;

/// @brief Field kFormatBit offset 0
static constexpr int32_t  kFormatBit{1112101920};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatSBit, put=__set_FormatSBit))  FormatSBit;

static void __set_FormatSBit(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatSBit() ;

/// @brief Field kFormatSBit offset 0
static constexpr int32_t  kFormatSBit{1396853076};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatInt, put=__set_FormatInt))  FormatInt;

static void __set_FormatInt(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatInt() ;

/// @brief Field kFormatInt offset 0
static constexpr int32_t  kFormatInt{1229870112};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatUInt, put=__set_FormatUInt))  FormatUInt;

static void __set_FormatUInt(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatUInt() ;

/// @brief Field kFormatUInt offset 0
static constexpr int32_t  kFormatUInt{1430867540};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatShort, put=__set_FormatShort))  FormatShort;

static void __set_FormatShort(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatShort() ;

/// @brief Field kFormatShort offset 0
static constexpr int32_t  kFormatShort{1397248596};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatUShort, put=__set_FormatUShort))  FormatUShort;

static void __set_FormatUShort(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatUShort() ;

/// @brief Field kFormatUShort offset 0
static constexpr int32_t  kFormatUShort{1431521364};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatByte, put=__set_FormatByte))  FormatByte;

static void __set_FormatByte(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatByte() ;

/// @brief Field kFormatByte offset 0
static constexpr int32_t  kFormatByte{1113150533};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatSByte, put=__set_FormatSByte))  FormatSByte;

static void __set_FormatSByte(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatSByte() ;

/// @brief Field kFormatSByte offset 0
static constexpr int32_t  kFormatSByte{1396857172};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatLong, put=__set_FormatLong))  FormatLong;

static void __set_FormatLong(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatLong() ;

/// @brief Field kFormatLong offset 0
static constexpr int32_t  kFormatLong{1280198432};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatULong, put=__set_FormatULong))  FormatULong;

static void __set_FormatULong(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatULong() ;

/// @brief Field kFormatULong offset 0
static constexpr int32_t  kFormatULong{1431064135};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatFloat, put=__set_FormatFloat))  FormatFloat;

static void __set_FormatFloat(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatFloat() ;

/// @brief Field kFormatFloat offset 0
static constexpr int32_t  kFormatFloat{1179407392};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatDouble, put=__set_FormatDouble))  FormatDouble;

static void __set_FormatDouble(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatDouble() ;

/// @brief Field kFormatDouble offset 0
static constexpr int32_t  kFormatDouble{1145195552};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatVector2, put=__set_FormatVector2))  FormatVector2;

static void __set_FormatVector2(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatVector2() ;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatVector3, put=__set_FormatVector3))  FormatVector3;

static void __set_FormatVector3(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatVector3() ;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatQuaternion, put=__set_FormatQuaternion))  FormatQuaternion;

static void __set_FormatQuaternion(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatQuaternion() ;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatVector2Short, put=__set_FormatVector2Short))  FormatVector2Short;

static void __set_FormatVector2Short(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatVector2Short() ;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatVector3Short, put=__set_FormatVector3Short))  FormatVector3Short;

static void __set_FormatVector3Short(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatVector3Short() ;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatVector2Byte, put=__set_FormatVector2Byte))  FormatVector2Byte;

static void __set_FormatVector2Byte(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatVector2Byte() ;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_FormatVector3Byte, put=__set_FormatVector3Byte))  FormatVector3Byte;

static void __set_FormatVector3Byte(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_FormatVector3Byte() ;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get__format_k__BackingField, put=__set__format_k__BackingField))  _format_k__BackingField;

constexpr void __set__format_k__BackingField(UnityEngine::InputSystem::Utilities::FourCC value) ;

constexpr UnityEngine::InputSystem::Utilities::FourCC __get__format_k__BackingField() const;

 uint32_t __declspec(property(get=__get__byteOffset_k__BackingField, put=__set__byteOffset_k__BackingField))  _byteOffset_k__BackingField;

constexpr void __set__byteOffset_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__byteOffset_k__BackingField() const;

 uint32_t __declspec(property(get=__get__bitOffset_k__BackingField, put=__set__bitOffset_k__BackingField))  _bitOffset_k__BackingField;

constexpr void __set__bitOffset_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__bitOffset_k__BackingField() const;

 uint32_t __declspec(property(get=__get__sizeInBits_k__BackingField, put=__set__sizeInBits_k__BackingField))  _sizeInBits_k__BackingField;

constexpr void __set__sizeInBits_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__sizeInBits_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format, put=set_format))  format;

 uint32_t __declspec(property(get=get_byteOffset, put=set_byteOffset))  byteOffset;

 uint32_t __declspec(property(get=get_bitOffset, put=set_bitOffset))  bitOffset;

 uint32_t __declspec(property(get=get_sizeInBits, put=set_sizeInBits))  sizeInBits;

 uint32_t __declspec(property(get=get_alignedSizeInBytes))  alignedSizeInBytes;

 uint32_t __declspec(property(get=get_effectiveByteOffset))  effectiveByteOffset;

 uint32_t __declspec(property(get=get_effectiveBitOffset))  effectiveBitOffset;


// Methods

/// @brief Method GetSizeOfPrimitiveFormatInBits addr 0x295fd1c size 0x3d0 virtual false final false
static int32_t GetSizeOfPrimitiveFormatInBits(UnityEngine::InputSystem::Utilities::FourCC type) ;

/// @brief Method GetPrimitiveFormatFromType addr 0x29600ec size 0x4dc virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC GetPrimitiveFormatFromType(System::Type type) ;

/// @brief Method get_format addr 0x29605c8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method set_format addr 0x29605d0 size 0x8 virtual false final false
 void set_format(UnityEngine::InputSystem::Utilities::FourCC value) ;

/// @brief Method get_byteOffset addr 0x29605d8 size 0x8 virtual false final false
 uint32_t get_byteOffset() ;

/// @brief Method set_byteOffset addr 0x29605e0 size 0x8 virtual false final false
 void set_byteOffset(uint32_t value) ;

/// @brief Method get_bitOffset addr 0x29605e8 size 0x8 virtual false final false
 uint32_t get_bitOffset() ;

/// @brief Method set_bitOffset addr 0x29605f0 size 0x8 virtual false final false
 void set_bitOffset(uint32_t value) ;

/// @brief Method get_sizeInBits addr 0x29605f8 size 0x8 virtual false final false
 uint32_t get_sizeInBits() ;

/// @brief Method set_sizeInBits addr 0x2960600 size 0x8 virtual false final false
 void set_sizeInBits(uint32_t value) ;

/// @brief Method get_alignedSizeInBytes addr 0x2957084 size 0x10 virtual false final false
 uint32_t get_alignedSizeInBytes() ;

/// @brief Method get_effectiveByteOffset addr 0x2960608 size 0xc virtual false final false
 uint32_t get_effectiveByteOffset() ;

/// @brief Method get_effectiveBitOffset addr 0x2960614 size 0xc virtual false final false
 uint32_t get_effectiveBitOffset() ;

/// @brief Method ReadInt addr 0x2960620 size 0x1d0 virtual false final false
 int32_t ReadInt(void* statePtr) ;

/// @brief Method WriteInt addr 0x29607f0 size 0x1bc virtual false final false
 void WriteInt(void* statePtr, int32_t value) ;

/// @brief Method ReadFloat addr 0x29609ac size 0x2fc virtual false final false
 float_t ReadFloat(void* statePtr) ;

/// @brief Method WriteFloat addr 0x2960ca8 size 0x400 virtual false final false
 void WriteFloat(void* statePtr, float_t value) ;

/// @brief Method FloatToPrimitiveValue addr 0x29610a8 size 0x4a0 virtual false final false
 UnityEngine::InputSystem::Utilities::PrimitiveValue FloatToPrimitiveValue(float_t value) ;

/// @brief Method ReadDouble addr 0x2961548 size 0x2fc virtual false final false
 double_t ReadDouble(void* statePtr) ;

/// @brief Method WriteDouble addr 0x2961844 size 0x424 virtual false final false
 void WriteDouble(void* statePtr, double_t value) ;

/// @brief Method Write addr 0x2961c68 size 0x2c0 virtual false final false
 void Write(void* statePtr, UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method CopyToFrom addr 0x2961f28 size 0x8c virtual false final false
 void CopyToFrom(void* toStatePtr, void* fromStatePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputStateBlock, "UnityEngine.InputSystem.LowLevel", "InputStateBlock");
