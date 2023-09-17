#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class MathUtils;
}
// Type: Newtonsoft.Json.Utilities::MathUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11834))
// CS Name: Newtonsoft.Json.Utilities.MathUtils
class CORDL_TYPE MathUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MathUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: " const&", def_value: None }]
constexpr MathUtils(MathUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "&&", def_value: None }]
constexpr MathUtils(MathUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MathUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MathUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MathUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MathUtils& operator=(MathUtils&& o) noexcept = default;
  constexpr MathUtils& operator=(MathUtils const& o) noexcept = default;
                


// Methods

/// @brief Method IntLength addr 0x24ed1f8 size 0x1c4 virtual false final false
static int32_t IntLength(uint64_t i) ;

/// @brief Method IntToHex addr 0x24ed3bc size 0x18 virtual false final false
static char16_t IntToHex(int32_t n) ;

/// @brief Method Min addr 0x24ed3d4 size 0xe0 virtual false final false
static ::System::Nullable_1<int32_t> Min(::System::Nullable_1<int32_t> val1, ::System::Nullable_1<int32_t> val2) ;

/// @brief Method Max addr 0x24ed4b4 size 0xe0 virtual false final false
static ::System::Nullable_1<int32_t> Max(::System::Nullable_1<int32_t> val1, ::System::Nullable_1<int32_t> val2) ;

/// @brief Method Max addr 0x24ed594 size 0xfc virtual false final false
static ::System::Nullable_1<double_t> Max(::System::Nullable_1<double_t> val1, ::System::Nullable_1<double_t> val2) ;

/// @brief Method ApproxEquals addr 0x24ed690 size 0xa8 virtual false final false
static bool ApproxEquals(double_t d1, double_t d2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Utilities::MathUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::MathUtils, "Newtonsoft.Json.Utilities", "MathUtils");
