#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Forward declare root types
namespace System::Globalization {
class TextInfoToLowerData;
}
// Type: System.Globalization::TextInfoToLowerData
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3704))
// CS Name: System.Globalization.TextInfoToLowerData
class CORDL_TYPE TextInfoToLowerData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TextInfoToLowerData() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToLowerData", modifiers: " const&", def_value: None }]
constexpr TextInfoToLowerData(TextInfoToLowerData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToLowerData", modifiers: "&&", def_value: None }]
constexpr TextInfoToLowerData(TextInfoToLowerData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextInfoToLowerData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextInfoToLowerData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextInfoToLowerData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextInfoToLowerData& operator=(TextInfoToLowerData&& o) noexcept = default;
  constexpr TextInfoToLowerData& operator=(TextInfoToLowerData const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_range_00c0_0556, put=__set_range_00c0_0556))  range_00c0_0556;

static void __set_range_00c0_0556(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_00c0_0556() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_10a0_10c5, put=__set_range_10a0_10c5))  range_10a0_10c5;

static void __set_range_10a0_10c5(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_10a0_10c5() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_1e00_1ffc, put=__set_range_1e00_1ffc))  range_1e00_1ffc;

static void __set_range_1e00_1ffc(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_1e00_1ffc() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_2160_216f, put=__set_range_2160_216f))  range_2160_216f;

static void __set_range_2160_216f(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_2160_216f() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_24b6_24cf, put=__set_range_24b6_24cf))  range_24b6_24cf;

static void __set_range_24b6_24cf(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_24b6_24cf() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_2c00_2c2e, put=__set_range_2c00_2c2e))  range_2c00_2c2e;

static void __set_range_2c00_2c2e(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_2c00_2c2e() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_2c60_2ce2, put=__set_range_2c60_2ce2))  range_2c60_2ce2;

static void __set_range_2c60_2ce2(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_2c60_2ce2() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_a640_a696, put=__set_range_a640_a696))  range_a640_a696;

static void __set_range_a640_a696(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_a640_a696() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_a722_a78b, put=__set_range_a722_a78b))  range_a722_a78b;

static void __set_range_a722_a78b(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_a722_a78b() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::TextInfoToLowerData);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TextInfoToLowerData, "System.Globalization", "TextInfoToLowerData");
