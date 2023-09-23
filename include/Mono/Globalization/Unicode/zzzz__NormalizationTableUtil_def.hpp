#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class NormalizationTableUtil;
}
// Type: Mono.Globalization.Unicode::NormalizationTableUtil
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2266))
// CS Name: Mono.Globalization.Unicode.NormalizationTableUtil
class CORDL_TYPE NormalizationTableUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NormalizationTableUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizationTableUtil", modifiers: " const&", def_value: None }]
constexpr NormalizationTableUtil(NormalizationTableUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizationTableUtil", modifiers: "&&", def_value: None }]
constexpr NormalizationTableUtil(NormalizationTableUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NormalizationTableUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NormalizationTableUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NormalizationTableUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NormalizationTableUtil& operator=(NormalizationTableUtil&& o) noexcept = default;
  constexpr NormalizationTableUtil& operator=(NormalizationTableUtil const& o) noexcept = default;
                


// Fields

static Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Prop, put=__set_Prop))  Prop;

static void __set_Prop(Mono::Globalization::Unicode::CodePointIndexer value) ;

static Mono::Globalization::Unicode::CodePointIndexer __get_Prop() ;

static Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Map, put=__set_Map))  Map;

static void __set_Map(Mono::Globalization::Unicode::CodePointIndexer value) ;

static Mono::Globalization::Unicode::CodePointIndexer __get_Map() ;

static Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Combining, put=__set_Combining))  Combining;

static void __set_Combining(Mono::Globalization::Unicode::CodePointIndexer value) ;

static Mono::Globalization::Unicode::CodePointIndexer __get_Combining() ;

static Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Composite, put=__set_Composite))  Composite;

static void __set_Composite(Mono::Globalization::Unicode::CodePointIndexer value) ;

static Mono::Globalization::Unicode::CodePointIndexer __get_Composite() ;

static Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(Mono::Globalization::Unicode::CodePointIndexer value) ;

static Mono::Globalization::Unicode::CodePointIndexer __get_Helper() ;


// Methods

/// @brief Method PropIdx addr 0x22aa6f4 size 0x68 virtual false final false
static int32_t PropIdx(int32_t cp) ;

/// @brief Method MapIdx addr 0x22aa75c size 0x68 virtual false final false
static int32_t MapIdx(int32_t cp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(Mono::Globalization::Unicode::NormalizationTableUtil);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::NormalizationTableUtil, "Mono.Globalization.Unicode", "NormalizationTableUtil");
