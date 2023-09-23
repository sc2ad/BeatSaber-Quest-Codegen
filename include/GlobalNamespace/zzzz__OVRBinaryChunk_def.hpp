#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
// Type: ::OVRBinaryChunk
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8480))
// CS Name: OVRBinaryChunk
struct CORDL_TYPE OVRBinaryChunk : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "chunkStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "chunkLength", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "chunkStart", ty: "int64_t", modifiers: "", def_value: None }]
constexpr OVRBinaryChunk(System::IO::Stream chunkStream, uint32_t chunkLength, int64_t chunkStart) noexcept;


                    constexpr OVRBinaryChunk(OVRBinaryChunk const&) = default;
                    constexpr OVRBinaryChunk(OVRBinaryChunk&&) = default;
                    constexpr OVRBinaryChunk& operator=(OVRBinaryChunk const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRBinaryChunk& operator=(OVRBinaryChunk&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRBinaryChunk(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::IO::Stream __declspec(property(get=__get_chunkStream, put=__set_chunkStream))  chunkStream;

constexpr void __set_chunkStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_chunkStream() const;

 uint32_t __declspec(property(get=__get_chunkLength, put=__set_chunkLength))  chunkLength;

constexpr void __set_chunkLength(uint32_t value) ;

constexpr uint32_t __get_chunkLength() const;

 int64_t __declspec(property(get=__get_chunkStart, put=__set_chunkStart))  chunkStart;

constexpr void __set_chunkStart(int64_t value) ;

constexpr int64_t __get_chunkStart() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBinaryChunk, "", "OVRBinaryChunk");
