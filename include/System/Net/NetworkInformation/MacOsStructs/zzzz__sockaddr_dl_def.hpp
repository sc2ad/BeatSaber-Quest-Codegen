#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct sockaddr_dl;
}
// Type: System.Net.NetworkInformation.MacOsStructs::sockaddr_dl
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8150))
// CS Name: System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct CORDL_TYPE sockaddr_dl : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sdl_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_index", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sdl_type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_nlen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_alen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_slen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr sockaddr_dl(uint8_t sdl_len, uint8_t sdl_family, uint16_t sdl_index, uint8_t sdl_type, uint8_t sdl_nlen, uint8_t sdl_alen, uint8_t sdl_slen, ::ArrayW<uint8_t> sdl_data) noexcept;


                    constexpr sockaddr_dl(sockaddr_dl const&) = default;
                    constexpr sockaddr_dl(sockaddr_dl&&) = default;
                    constexpr sockaddr_dl& operator=(sockaddr_dl const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr sockaddr_dl& operator=(sockaddr_dl&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit sockaddr_dl(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_sdl_len, put=__set_sdl_len))  sdl_len;

constexpr void __set_sdl_len(uint8_t value) ;

constexpr uint8_t __get_sdl_len() const;

 uint8_t __declspec(property(get=__get_sdl_family, put=__set_sdl_family))  sdl_family;

constexpr void __set_sdl_family(uint8_t value) ;

constexpr uint8_t __get_sdl_family() const;

 uint16_t __declspec(property(get=__get_sdl_index, put=__set_sdl_index))  sdl_index;

constexpr void __set_sdl_index(uint16_t value) ;

constexpr uint16_t __get_sdl_index() const;

 uint8_t __declspec(property(get=__get_sdl_type, put=__set_sdl_type))  sdl_type;

constexpr void __set_sdl_type(uint8_t value) ;

constexpr uint8_t __get_sdl_type() const;

 uint8_t __declspec(property(get=__get_sdl_nlen, put=__set_sdl_nlen))  sdl_nlen;

constexpr void __set_sdl_nlen(uint8_t value) ;

constexpr uint8_t __get_sdl_nlen() const;

 uint8_t __declspec(property(get=__get_sdl_alen, put=__set_sdl_alen))  sdl_alen;

constexpr void __set_sdl_alen(uint8_t value) ;

constexpr uint8_t __get_sdl_alen() const;

 uint8_t __declspec(property(get=__get_sdl_slen, put=__set_sdl_slen))  sdl_slen;

constexpr void __set_sdl_slen(uint8_t value) ;

constexpr uint8_t __get_sdl_slen() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sdl_data, put=__set_sdl_data))  sdl_data;

constexpr void __set_sdl_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sdl_data() const;


// Methods

/// @brief Method Read addr 0x285d928 size 0x190 virtual false final false
 void Read(::cordl_internals::intptr_t ptr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::MacOsStructs
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl, "System.Net.NetworkInformation.MacOsStructs", "sockaddr_dl");
