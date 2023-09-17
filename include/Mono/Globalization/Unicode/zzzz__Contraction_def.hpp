#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Globalization::Unicode {
class Contraction;
}
// Type: Mono.Globalization.Unicode::Contraction
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2260))
// CS Name: Mono.Globalization.Unicode.Contraction
class CORDL_TYPE Contraction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Contraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "Contraction", modifiers: " const&", def_value: None }]
constexpr Contraction(Contraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Contraction", modifiers: "&&", def_value: None }]
constexpr Contraction(Contraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Contraction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Contraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Contraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Contraction& operator=(Contraction&& o) noexcept = default;
  constexpr Contraction& operator=(Contraction const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_Index, put=__set_Index))  Index;

constexpr void __set_Index(int32_t value) ;

constexpr int32_t __get_Index() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_Source, put=__set_Source))  Source;

constexpr void __set_Source(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_Source() const;

 ::StringW __declspec(property(get=__get_Replacement, put=__set_Replacement))  Replacement;

constexpr void __set_Replacement(::StringW value) ;

constexpr ::StringW __get_Replacement() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_SortKey, put=__set_SortKey))  SortKey;

constexpr void __set_SortKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_SortKey() const;


// Methods

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "replacement", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sortkey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Contraction(int32_t index, ::ArrayW<char16_t> source, ::StringW replacement, ::ArrayW<uint8_t> sortkey) ;

/// @brief Method .ctor addr 0x22a7f58 size 0x44 virtual false final false
 void _ctor(int32_t index, ::ArrayW<char16_t> source, ::StringW replacement, ::ArrayW<uint8_t> sortkey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
} // end anonymous namespace
NEED_NO_BOX(::Mono::Globalization::Unicode::Contraction);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::Contraction, "Mono.Globalization.Unicode", "Contraction");
