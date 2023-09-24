#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net {
struct WebHeaderCollectionType;
}
// Type: System.Net::WebHeaderCollectionType
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7940))
// CS Name: System.Net.WebHeaderCollectionType
struct CORDL_TYPE WebHeaderCollectionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr WebHeaderCollectionType(uint16_t value__) noexcept;


                    constexpr WebHeaderCollectionType(WebHeaderCollectionType const&) = default;
                    constexpr WebHeaderCollectionType(WebHeaderCollectionType&&) = default;
                    constexpr WebHeaderCollectionType& operator=(WebHeaderCollectionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WebHeaderCollectionType& operator=(WebHeaderCollectionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WebHeaderCollectionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WebHeaderCollectionType_Unwrapped : uint16_t {
__Unknown = 0u,
__WebRequest = 1u,
__WebResponse = 2u,
__HttpWebRequest = 3u,
__HttpWebResponse = 4u,
__HttpListenerRequest = 5u,
__HttpListenerResponse = 6u,
__FtpWebRequest = 7u,
__FtpWebResponse = 8u,
__FileWebRequest = 9u,
__FileWebResponse = 10u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebHeaderCollectionType_Unwrapped () const noexcept {
return std::bit_cast<__WebHeaderCollectionType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint16_t;


// Fields

 uint16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint16_t value) ;

constexpr uint16_t __get_value__() const;

/// @brief Field Unknown offset 0
static System::Net::WebHeaderCollectionType const Unknown;

/// @brief Field WebRequest offset 0
static System::Net::WebHeaderCollectionType const WebRequest;

/// @brief Field WebResponse offset 0
static System::Net::WebHeaderCollectionType const WebResponse;

/// @brief Field HttpWebRequest offset 0
static System::Net::WebHeaderCollectionType const HttpWebRequest;

/// @brief Field HttpWebResponse offset 0
static System::Net::WebHeaderCollectionType const HttpWebResponse;

/// @brief Field HttpListenerRequest offset 0
static System::Net::WebHeaderCollectionType const HttpListenerRequest;

/// @brief Field HttpListenerResponse offset 0
static System::Net::WebHeaderCollectionType const HttpListenerResponse;

/// @brief Field FtpWebRequest offset 0
static System::Net::WebHeaderCollectionType const FtpWebRequest;

/// @brief Field FtpWebResponse offset 0
static System::Net::WebHeaderCollectionType const FtpWebResponse;

/// @brief Field FileWebRequest offset 0
static System::Net::WebHeaderCollectionType const FileWebRequest;

/// @brief Field FileWebResponse offset 0
static System::Net::WebHeaderCollectionType const FileWebResponse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollectionType, "System.Net", "WebHeaderCollectionType");
