#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SupplementalDataEntry;
}
// Type: Org.BouncyCastle.Crypto.Tls::SupplementalDataEntry
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1284))
// CS Name: Org.BouncyCastle.Crypto.Tls.SupplementalDataEntry
class CORDL_TYPE SupplementalDataEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SupplementalDataEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "SupplementalDataEntry", modifiers: " const&", def_value: None }]
constexpr SupplementalDataEntry(SupplementalDataEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SupplementalDataEntry", modifiers: "&&", def_value: None }]
constexpr SupplementalDataEntry(SupplementalDataEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SupplementalDataEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SupplementalDataEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SupplementalDataEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SupplementalDataEntry& operator=(SupplementalDataEntry&& o) noexcept = default;
  constexpr SupplementalDataEntry& operator=(SupplementalDataEntry const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_mDataType, put=__set_mDataType))  mDataType;

constexpr void __set_mDataType(int32_t value) ;

constexpr int32_t __get_mDataType() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mData, put=__set_mData))  mData;

constexpr void __set_mData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mData() const;


// Properties

 int32_t __declspec(property(get=get_DataType))  DataType;

 ::ArrayW<uint8_t> __declspec(property(get=get_Data))  Data;


// Methods

static Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry New_ctor(int32_t dataType, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0xf0b6a0 size 0x30 virtual false final false
 void _ctor(int32_t dataType, ::ArrayW<uint8_t> data) ;

/// @brief Method get_DataType addr 0xf0b6d0 size 0x8 virtual true final false
 int32_t get_DataType() ;

/// @brief Method get_Data addr 0xf0b6d8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_Data() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry, "Org.BouncyCastle.Crypto.Tls", "SupplementalDataEntry");
