#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
// Type: Newtonsoft.Json.Utilities::StringReference
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11808))
// CS Name: Newtonsoft.Json.Utilities.StringReference
struct CORDL_TYPE StringReference : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_chars", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringReference(::ArrayW<char16_t> _chars, int32_t _startIndex, int32_t _length) noexcept;


                    constexpr StringReference(StringReference const&) = default;
                    constexpr StringReference(StringReference&&) = default;
                    constexpr StringReference& operator=(StringReference const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StringReference& operator=(StringReference&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StringReference(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get__chars, put=__set__chars))  _chars;

constexpr void __set__chars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__chars() const;

 int32_t __declspec(property(get=__get__startIndex, put=__set__startIndex))  _startIndex;

constexpr void __set__startIndex(int32_t value) ;

constexpr int32_t __get__startIndex() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 char16_t __declspec(property(get=get_Item))  Item;

 ::ArrayW<char16_t> __declspec(property(get=get_Chars))  Chars;

 int32_t __declspec(property(get=get_StartIndex))  StartIndex;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method get_Item addr 0x24e39e0 size 0x30 virtual false final false
 char16_t get_Item(int32_t i) ;

/// @brief Method get_Chars addr 0x24e3a10 size 0x8 virtual false final false
 ::ArrayW<char16_t> get_Chars() ;

/// @brief Method get_StartIndex addr 0x24e3a18 size 0x8 virtual false final false
 int32_t get_StartIndex() ;

/// @brief Method get_Length addr 0x24e3a20 size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method .ctor addr 0x24e3a28 size 0xc virtual false final false
 void _ctor(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length) ;

/// @brief Method ToString addr 0x24e3a34 size 0x14 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringReference, "Newtonsoft.Json.Utilities", "StringReference");
