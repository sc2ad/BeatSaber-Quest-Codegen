#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct StringBuffer;
}
// Type: Newtonsoft.Json.Utilities::StringBuffer
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11832))
// CS Name: Newtonsoft.Json.Utilities.StringBuffer
struct CORDL_TYPE StringBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_buffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_position", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringBuffer(::ArrayW<char16_t> _buffer, int32_t _position) noexcept;


                    constexpr StringBuffer(StringBuffer const&) = default;
                    constexpr StringBuffer(StringBuffer&&) = default;
                    constexpr StringBuffer& operator=(StringBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StringBuffer& operator=(StringBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StringBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(int32_t value) ;

constexpr int32_t __get__position() const;


// Properties

 int32_t __declspec(property(get=get_Position, put=set_Position))  Position;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;

 ::ArrayW<char16_t> __declspec(property(get=get_InternalBuffer))  InternalBuffer;


// Methods

/// @brief Method get_Position addr 0x24ec1e8 size 0x8 virtual false final false
 int32_t get_Position() ;

/// @brief Method set_Position addr 0x24ec1f0 size 0x8 virtual false final false
 void set_Position(int32_t value) ;

/// @brief Method get_IsEmpty addr 0x24ec1f8 size 0x10 virtual false final false
 bool get_IsEmpty() ;

/// @brief Method .ctor addr 0x24ec208 size 0x24 virtual false final false
 void _ctor(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, int32_t initalSize) ;

/// @brief Method .ctor addr 0x24ec22c size 0xc virtual false final false
 void _ctor(::ArrayW<char16_t> buffer) ;

/// @brief Method Append addr 0x24ec238 size 0x78 virtual false final false
 void Append(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, char16_t value) ;

/// @brief Method Append addr 0x24ec310 size 0x80 virtual false final false
 void Append(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, ::ArrayW<char16_t> buffer, int32_t startIndex, int32_t count) ;

/// @brief Method Clear addr 0x24ec390 size 0x2c virtual false final false
 void Clear(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool) ;

/// @brief Method EnsureSize addr 0x24ec2b0 size 0x60 virtual false final false
 void EnsureSize(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, int32_t appendLength) ;

/// @brief Method ToString addr 0x24ec3bc size 0x18 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x24ec3d4 size 0x1c virtual false final false
 ::StringW ToString(int32_t start, int32_t length) ;

/// @brief Method get_InternalBuffer addr 0x24ec3f0 size 0x8 virtual false final false
 ::ArrayW<char16_t> get_InternalBuffer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::StringBuffer, "Newtonsoft.Json.Utilities", "StringBuffer");
