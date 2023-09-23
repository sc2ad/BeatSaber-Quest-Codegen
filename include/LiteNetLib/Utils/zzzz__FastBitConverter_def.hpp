#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LiteNetLib::Utils {
class FastBitConverter;
}
namespace LiteNetLib::Utils {
struct LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble;
}
namespace LiteNetLib::Utils {
struct LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat;
}
// Type: ::ConverterHelperDouble
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14470))
// CS Name: LiteNetLib.Utils.FastBitConverter::ConverterHelperDouble
struct CORDL_TYPE LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Along", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Adouble", ty: "double_t", modifiers: "", def_value: None }]
constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble(uint64_t Along, double_t Adouble) noexcept;


                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble(LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble const&) = default;
                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble(LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble&&) = default;
                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble& operator=(LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble& operator=(LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_Along, put=__set_Along))  Along;

constexpr void __set_Along(uint64_t value) ;

constexpr uint64_t __get_Along() const;

 double_t __declspec(property(get=__get_Adouble, put=__set_Adouble))  Adouble;

constexpr void __set_Adouble(double_t value) ;

constexpr double_t __get_Adouble() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::ConverterHelperFloat
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14471))
// CS Name: LiteNetLib.Utils.FastBitConverter::ConverterHelperFloat
struct CORDL_TYPE LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Aint", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Afloat", ty: "float_t", modifiers: "", def_value: None }]
constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat(int32_t Aint, float_t Afloat) noexcept;


                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat(LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat const&) = default;
                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat(LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat&&) = default;
                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat& operator=(LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat& operator=(LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Aint, put=__set_Aint))  Aint;

constexpr void __set_Aint(int32_t value) ;

constexpr int32_t __get_Aint() const;

 float_t __declspec(property(get=__get_Afloat, put=__set_Afloat))  Afloat;

constexpr void __set_Afloat(float_t value) ;

constexpr float_t __get_Afloat() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: LiteNetLib.Utils::FastBitConverter
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14472))
// CS Name: LiteNetLib.Utils.FastBitConverter
class CORDL_TYPE FastBitConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ConverterHelperFloat = LiteNetLib::Utils::LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat;

using ConverterHelperDouble = LiteNetLib::Utils::LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FastBitConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastBitConverter", modifiers: " const&", def_value: None }]
constexpr FastBitConverter(FastBitConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastBitConverter", modifiers: "&&", def_value: None }]
constexpr FastBitConverter(FastBitConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastBitConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastBitConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastBitConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastBitConverter& operator=(FastBitConverter&& o) noexcept = default;
  constexpr FastBitConverter& operator=(FastBitConverter const& o) noexcept = default;
                


// Methods

/// @brief Method WriteLittleEndian addr 0x2094fa0 size 0xf0 virtual false final false
static void WriteLittleEndian(::ArrayW<uint8_t> buffer, int32_t offset, uint64_t data) ;

/// @brief Method WriteLittleEndian addr 0x2095090 size 0x80 virtual false final false
static void WriteLittleEndian(::ArrayW<uint8_t> buffer, int32_t offset, int32_t data) ;

/// @brief Method WriteLittleEndian addr 0x2095110 size 0x48 virtual false final false
static void WriteLittleEndian(::ArrayW<uint8_t> buffer, int32_t offset, int16_t data) ;

/// @brief Method GetBytes addr 0x2095158 size 0x8 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, double_t value) ;

/// @brief Method GetBytes addr 0x2095160 size 0x8 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, float_t value) ;

/// @brief Method GetBytes addr 0x2095168 size 0x4 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, int16_t value) ;

/// @brief Method GetBytes addr 0x208f464 size 0x4 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, uint16_t value) ;

/// @brief Method GetBytes addr 0x208fa48 size 0x4 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, int32_t value) ;

/// @brief Method GetBytes addr 0x209516c size 0x4 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, uint32_t value) ;

/// @brief Method GetBytes addr 0x208b9f8 size 0x4 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, int64_t value) ;

/// @brief Method GetBytes addr 0x2095170 size 0x4 virtual false final false
static void GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, uint64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::FastBitConverter);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::FastBitConverter, "LiteNetLib.Utils", "FastBitConverter");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::LiteNetLib__Utils__FastBitConverter__ConverterHelperDouble, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperDouble");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::LiteNetLib__Utils__FastBitConverter__ConverterHelperFloat, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperFloat");
