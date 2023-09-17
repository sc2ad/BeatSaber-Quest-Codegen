#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Attr {
struct ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format;
}
namespace Org::BouncyCastle::Bcpg::Attr {
class ImageAttrib;
}
// Type: ::Format
namespace Org::BouncyCastle::Bcpg::Attr {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(529))
// CS Name: Org.BouncyCastle.Bcpg.Attr.ImageAttrib::Format
struct CORDL_TYPE ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format(uint8_t value__) noexcept;


                    constexpr ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format(____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format const&) = default;
                    constexpr ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format(____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format&&) = default;
                    constexpr ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format& operator=(____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format& operator=(____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format_Unwrapped : uint8_t {
__Jpeg = 1u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format_Unwrapped () const noexcept {
return std::bit_cast<______Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Jpeg offset 0
static ::Org::BouncyCastle::Bcpg::Attr::____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format const Jpeg;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Attr
// Type: Org.BouncyCastle.Bcpg.Attr::ImageAttrib
namespace Org::BouncyCastle::Bcpg::Attr {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(530))
// CS Name: Org.BouncyCastle.Bcpg.Attr.ImageAttrib
class CORDL_TYPE ImageAttrib : public ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket {
public:
// Declarations
using Format = ::Org::BouncyCastle::Bcpg::Attr::____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ImageAttrib() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageAttrib", modifiers: " const&", def_value: None }]
constexpr ImageAttrib(ImageAttrib const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageAttrib", modifiers: "&&", def_value: None }]
constexpr ImageAttrib(ImageAttrib&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImageAttrib(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket(ptr) {
}


  constexpr ImageAttrib& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImageAttrib& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImageAttrib& operator=(ImageAttrib&& o) noexcept = default;
  constexpr ImageAttrib& operator=(ImageAttrib const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_Zeroes, put=__set_Zeroes))  Zeroes;

static void __set_Zeroes(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Zeroes() ;

 int32_t __declspec(property(get=__get_hdrLength, put=__set_hdrLength))  hdrLength;

constexpr void __set_hdrLength(int32_t value) ;

constexpr int32_t __get_hdrLength() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(int32_t value) ;

constexpr int32_t __get__encoding() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_imageData, put=__set_imageData))  imageData;

constexpr void __set_imageData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_imageData() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 int32_t __declspec(property(get=get_Encoding))  Encoding;


// Methods

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ImageAttrib(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113cd1c size 0xc virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "forceLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ImageAttrib(bool forceLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113cd28 size 0xdc virtual false final false
 void _ctor(bool forceLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "imageType", ty: "::Org::BouncyCastle::Bcpg::Attr::____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format", modifiers: "", def_value: None }, CppParam { name: "imageData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ImageAttrib(::Org::BouncyCastle::Bcpg::Attr::____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format imageType, ::ArrayW<uint8_t> imageData) ;

/// @brief Method .ctor addr 0x113ce04 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::Attr::____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format imageType, ::ArrayW<uint8_t> imageData) ;

/// @brief Method ToByteArray addr 0x113ce7c size 0x14c virtual false final false
static ::ArrayW<uint8_t> ToByteArray(::Org::BouncyCastle::Bcpg::Attr::____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format imageType, ::ArrayW<uint8_t> imageData) ;

/// @brief Method get_Version addr 0x113cfc8 size 0x8 virtual true final false
 int32_t get_Version() ;

/// @brief Method get_Encoding addr 0x113cfd0 size 0x8 virtual true final false
 int32_t get_Encoding() ;

/// @brief Method GetImageData addr 0x113cfd8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> GetImageData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Attr
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Attr::____Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format, "Org.BouncyCastle.Bcpg.Attr", "ImageAttrib/Format");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib, "Org.BouncyCastle.Bcpg.Attr", "ImageAttrib");
