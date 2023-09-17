#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class MSCompatUnicodeTableUtil;
}
// Type: Mono.Globalization.Unicode::MSCompatUnicodeTableUtil
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2265))
// CS Name: Mono.Globalization.Unicode.MSCompatUnicodeTableUtil
class CORDL_TYPE MSCompatUnicodeTableUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MSCompatUnicodeTableUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTableUtil", modifiers: " const&", def_value: None }]
constexpr MSCompatUnicodeTableUtil(MSCompatUnicodeTableUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTableUtil", modifiers: "&&", def_value: None }]
constexpr MSCompatUnicodeTableUtil(MSCompatUnicodeTableUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MSCompatUnicodeTableUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MSCompatUnicodeTableUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MSCompatUnicodeTableUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MSCompatUnicodeTableUtil& operator=(MSCompatUnicodeTableUtil&& o) noexcept = default;
  constexpr MSCompatUnicodeTableUtil& operator=(MSCompatUnicodeTableUtil const& o) noexcept = default;
                


// Fields

static ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Ignorable, put=__set_Ignorable))  Ignorable;

static void __set_Ignorable(::Mono::Globalization::Unicode::CodePointIndexer value) ;

static ::Mono::Globalization::Unicode::CodePointIndexer __get_Ignorable() ;

static ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Category, put=__set_Category))  Category;

static void __set_Category(::Mono::Globalization::Unicode::CodePointIndexer value) ;

static ::Mono::Globalization::Unicode::CodePointIndexer __get_Category() ;

static ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Level1, put=__set_Level1))  Level1;

static void __set_Level1(::Mono::Globalization::Unicode::CodePointIndexer value) ;

static ::Mono::Globalization::Unicode::CodePointIndexer __get_Level1() ;

static ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Level2, put=__set_Level2))  Level2;

static void __set_Level2(::Mono::Globalization::Unicode::CodePointIndexer value) ;

static ::Mono::Globalization::Unicode::CodePointIndexer __get_Level2() ;

static ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Level3, put=__set_Level3))  Level3;

static void __set_Level3(::Mono::Globalization::Unicode::CodePointIndexer value) ;

static ::Mono::Globalization::Unicode::CodePointIndexer __get_Level3() ;

static ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_CjkCHS, put=__set_CjkCHS))  CjkCHS;

static void __set_CjkCHS(::Mono::Globalization::Unicode::CodePointIndexer value) ;

static ::Mono::Globalization::Unicode::CodePointIndexer __get_CjkCHS() ;

static ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Cjk, put=__set_Cjk))  Cjk;

static void __set_Cjk(::Mono::Globalization::Unicode::CodePointIndexer value) ;

static ::Mono::Globalization::Unicode::CodePointIndexer __get_Cjk() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
} // end anonymous namespace
NEED_NO_BOX(::Mono::Globalization::Unicode::MSCompatUnicodeTableUtil);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::MSCompatUnicodeTableUtil, "Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil");
