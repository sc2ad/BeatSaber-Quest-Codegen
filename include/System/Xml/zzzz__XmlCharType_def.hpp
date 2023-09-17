#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
struct XmlCharType;
}
// Type: System.Xml::XmlCharType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11486))
// CS Name: System.Xml.XmlCharType
struct CORDL_TYPE XmlCharType : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "charProperties", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr XmlCharType(::ArrayW<uint8_t> charProperties) noexcept;


                    constexpr XmlCharType(XmlCharType const&) = default;
                    constexpr XmlCharType(XmlCharType&&) = default;
                    constexpr XmlCharType& operator=(XmlCharType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlCharType& operator=(XmlCharType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlCharType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_Lock, put=__set_s_Lock))  s_Lock;

static void __set_s_Lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_Lock() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_CharProperties, put=__set_s_CharProperties))  s_CharProperties;

static void __set_s_CharProperties(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_CharProperties() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_charProperties, put=__set_charProperties))  charProperties;

constexpr void __set_charProperties(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_charProperties() const;


// Properties

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_StaticLock))  StaticLock;

static ::System::Xml::XmlCharType __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_StaticLock addr 0x2709d58 size 0x9c virtual false final false
static ::bs_hook::Il2CppWrapperType get_StaticLock() ;

/// @brief Method InitInstance addr 0x2709df4 size 0x260 virtual false final false
static void InitInstance() ;

/// @brief Method SetProperties addr 0x270a054 size 0xc4 virtual false final false
static void SetProperties(::ArrayW<uint8_t> chProps, ::StringW ranges, uint8_t value) ;

/// @brief Method .ctor addr 0x270a118 size 0x8 virtual false final false
 void _ctor(::ArrayW<uint8_t> charProperties) ;

/// @brief Method get_Instance addr 0x27099f8 size 0x68 virtual false final false
static ::System::Xml::XmlCharType get_Instance() ;

/// @brief Method IsWhiteSpace addr 0x270a120 size 0x34 virtual false final false
 bool IsWhiteSpace(char16_t ch) ;

/// @brief Method IsNCNameSingleChar addr 0x27099c4 size 0x34 virtual false final false
 bool IsNCNameSingleChar(char16_t ch) ;

/// @brief Method IsStartNCNameSingleChar addr 0x2709a60 size 0x34 virtual false final false
 bool IsStartNCNameSingleChar(char16_t ch) ;

/// @brief Method IsNameSingleChar addr 0x270a154 size 0x24 virtual false final false
 bool IsNameSingleChar(char16_t ch) ;

/// @brief Method IsCharData addr 0x270a178 size 0x34 virtual false final false
 bool IsCharData(char16_t ch) ;

/// @brief Method IsPubidChar addr 0x270a1ac size 0x84 virtual false final false
 bool IsPubidChar(char16_t ch) ;

/// @brief Method IsTextChar addr 0x270a230 size 0x34 virtual false final false
 bool IsTextChar(char16_t ch) ;

/// @brief Method IsLetter addr 0x270a264 size 0x34 virtual false final false
 bool IsLetter(char16_t ch) ;

/// @brief Method IsNCNameCharXml4e addr 0x270a298 size 0x34 virtual false final false
 bool IsNCNameCharXml4e(char16_t ch) ;

/// @brief Method IsStartNCNameCharXml4e addr 0x270a2cc size 0x24 virtual false final false
 bool IsStartNCNameCharXml4e(char16_t ch) ;

/// @brief Method IsNameCharXml4e addr 0x270a2f0 size 0x24 virtual false final false
 bool IsNameCharXml4e(char16_t ch) ;

/// @brief Method IsDigit addr 0x270a314 size 0x14 virtual false final false
static bool IsDigit(char16_t ch) ;

/// @brief Method IsHighSurrogate addr 0x270a33c size 0x10 virtual false final false
static bool IsHighSurrogate(int32_t ch) ;

/// @brief Method IsLowSurrogate addr 0x270a34c size 0x10 virtual false final false
static bool IsLowSurrogate(int32_t ch) ;

/// @brief Method IsSurrogate addr 0x270a35c size 0x10 virtual false final false
static bool IsSurrogate(int32_t ch) ;

/// @brief Method CombineSurrogateChar addr 0x270a36c size 0x18 virtual false final false
static int32_t CombineSurrogateChar(int32_t lowChar, int32_t highChar) ;

/// @brief Method SplitSurrogateChar addr 0x270a384 size 0x38 virtual false final false
static void SplitSurrogateChar(int32_t combinedChar, ByRef<char16_t> lowChar, ByRef<char16_t> highChar) ;

/// @brief Method IsOnlyWhitespace addr 0x270a3bc size 0x18 virtual false final false
 bool IsOnlyWhitespace(::StringW str) ;

/// @brief Method IsOnlyWhitespaceWithPos addr 0x270a3d4 size 0x88 virtual false final false
 int32_t IsOnlyWhitespaceWithPos(::StringW str) ;

/// @brief Method IsOnlyCharData addr 0x270a45c size 0xd8 virtual false final false
 int32_t IsOnlyCharData(::StringW str) ;

/// @brief Method IsOnlyDigits addr 0x270a534 size 0x6c virtual false final false
static bool IsOnlyDigits(::StringW str, int32_t startPos, int32_t len) ;

/// @brief Method IsPublicId addr 0x270a5a0 size 0x60 virtual false final false
 int32_t IsPublicId(::StringW str) ;

/// @brief Method InRange addr 0x270a328 size 0x14 virtual false final false
static bool InRange(int32_t value, int32_t start, int32_t end) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCharType, "System.Xml", "XmlCharType");
