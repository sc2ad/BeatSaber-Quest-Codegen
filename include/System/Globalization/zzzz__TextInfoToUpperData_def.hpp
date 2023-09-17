#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
// Forward declare root types
namespace System::Globalization {
class TextInfoToUpperData;
}
// Type: System.Globalization::TextInfoToUpperData
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3703))
// CS Name: System.Globalization.TextInfoToUpperData
class CORDL_TYPE TextInfoToUpperData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TextInfoToUpperData() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToUpperData", modifiers: " const&", def_value: None }]
constexpr TextInfoToUpperData(TextInfoToUpperData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToUpperData", modifiers: "&&", def_value: None }]
constexpr TextInfoToUpperData(TextInfoToUpperData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextInfoToUpperData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextInfoToUpperData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextInfoToUpperData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextInfoToUpperData& operator=(TextInfoToUpperData&& o) noexcept = default;
  constexpr TextInfoToUpperData& operator=(TextInfoToUpperData const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_range_00e0_0586, put=__set_range_00e0_0586))  range_00e0_0586;

static void __set_range_00e0_0586(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_00e0_0586() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_1e01_1ff3, put=__set_range_1e01_1ff3))  range_1e01_1ff3;

static void __set_range_1e01_1ff3(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_1e01_1ff3() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_2170_2184, put=__set_range_2170_2184))  range_2170_2184;

static void __set_range_2170_2184(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_2170_2184() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_24d0_24e9, put=__set_range_24d0_24e9))  range_24d0_24e9;

static void __set_range_24d0_24e9(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_24d0_24e9() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_2c30_2ce3, put=__set_range_2c30_2ce3))  range_2c30_2ce3;

static void __set_range_2c30_2ce3(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_2c30_2ce3() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_2d00_2d25, put=__set_range_2d00_2d25))  range_2d00_2d25;

static void __set_range_2d00_2d25(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_2d00_2d25() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_a641_a697, put=__set_range_a641_a697))  range_a641_a697;

static void __set_range_a641_a697(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_a641_a697() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_range_a723_a78c, put=__set_range_a723_a78c))  range_a723_a78c;

static void __set_range_a723_a78c(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_range_a723_a78c() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::TextInfoToUpperData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfoToUpperData, "System.Globalization", "TextInfoToUpperData");
