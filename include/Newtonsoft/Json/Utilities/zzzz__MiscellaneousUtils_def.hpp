#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class ArgumentOutOfRangeException;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class MiscellaneousUtils;
}
// Type: Newtonsoft.Json.Utilities::MiscellaneousUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11836))
// CS Name: Newtonsoft.Json.Utilities.MiscellaneousUtils
class CORDL_TYPE MiscellaneousUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MiscellaneousUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscellaneousUtils", modifiers: " const&", def_value: None }]
constexpr MiscellaneousUtils(MiscellaneousUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscellaneousUtils", modifiers: "&&", def_value: None }]
constexpr MiscellaneousUtils(MiscellaneousUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MiscellaneousUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MiscellaneousUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MiscellaneousUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MiscellaneousUtils& operator=(MiscellaneousUtils&& o) noexcept = default;
  constexpr MiscellaneousUtils& operator=(MiscellaneousUtils const& o) noexcept = default;
                


// Methods

/// @brief Method ValueEquals addr 0x24ed738 size 0x2b0 virtual false final false
static bool ValueEquals(::bs_hook::Il2CppWrapperType objA, ::bs_hook::Il2CppWrapperType objB) ;

/// @brief Method CreateArgumentOutOfRangeException addr 0x24dde08 size 0x100 virtual false final false
static ::System::ArgumentOutOfRangeException CreateArgumentOutOfRangeException(::StringW paramName, ::bs_hook::Il2CppWrapperType actualValue, ::StringW message) ;

/// @brief Method ToString addr 0x24ed9e8 size 0xac virtual false final false
static ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ByteArrayCompare addr 0x24eda94 size 0xb4 virtual false final false
static int32_t ByteArrayCompare(::ArrayW<uint8_t> a1, ::ArrayW<uint8_t> a2) ;

/// @brief Method GetPrefix addr 0x24edb48 size 0x24 virtual false final false
static ::StringW GetPrefix(::StringW qualifiedName) ;

/// @brief Method GetLocalName addr 0x24edc00 size 0x24 virtual false final false
static ::StringW GetLocalName(::StringW qualifiedName) ;

/// @brief Method GetQualifiedNameParts addr 0x24edb6c size 0x94 virtual false final false
static void GetQualifiedNameParts(::StringW qualifiedName, ByRef<::StringW> prefix, ByRef<::StringW> localName) ;

/// @brief Method FormatValueForPrint addr 0x24edc24 size 0xb0 virtual false final false
static ::StringW FormatValueForPrint(::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Utilities::MiscellaneousUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::MiscellaneousUtils, "Newtonsoft.Json.Utilities", "MiscellaneousUtils");
