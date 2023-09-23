#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class AlphabetScrollInfo;
}
namespace GlobalNamespace {
class GlobalNamespace__AlphabetScrollInfo__Data;
}
// Type: ::Data
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13765))
// CS Name: AlphabetScrollInfo::Data
class CORDL_TYPE GlobalNamespace__AlphabetScrollInfo__Data : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__AlphabetScrollInfo__Data() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AlphabetScrollInfo__Data", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AlphabetScrollInfo__Data(GlobalNamespace__AlphabetScrollInfo__Data const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AlphabetScrollInfo__Data", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AlphabetScrollInfo__Data(GlobalNamespace__AlphabetScrollInfo__Data&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AlphabetScrollInfo__Data(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AlphabetScrollInfo__Data& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AlphabetScrollInfo__Data& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AlphabetScrollInfo__Data& operator=(GlobalNamespace__AlphabetScrollInfo__Data&& o) noexcept = default;
  constexpr GlobalNamespace__AlphabetScrollInfo__Data& operator=(GlobalNamespace__AlphabetScrollInfo__Data const& o) noexcept = default;
                


// Fields

 char16_t __declspec(property(get=__get_character, put=__set_character))  character;

constexpr void __set_character(char16_t value) ;

constexpr char16_t __get_character() const;

 int32_t __declspec(property(get=__get_cellIdx, put=__set_cellIdx))  cellIdx;

constexpr void __set_cellIdx(int32_t value) ;

constexpr int32_t __get_cellIdx() const;


// Methods

// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "cellIdx", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AlphabetScrollInfo__Data(char16_t character, int32_t cellIdx) ;

/// @brief Method .ctor addr 0x1f74a40 size 0x30 virtual false final false
 void _ctor(char16_t character, int32_t cellIdx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AlphabetScrollInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13766))
// CS Name: AlphabetScrollInfo
class CORDL_TYPE AlphabetScrollInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Data = GlobalNamespace::GlobalNamespace__AlphabetScrollInfo__Data;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AlphabetScrollInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo", modifiers: " const&", def_value: None }]
constexpr AlphabetScrollInfo(AlphabetScrollInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo", modifiers: "&&", def_value: None }]
constexpr AlphabetScrollInfo(AlphabetScrollInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlphabetScrollInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AlphabetScrollInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlphabetScrollInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlphabetScrollInfo& operator=(AlphabetScrollInfo&& o) noexcept = default;
  constexpr AlphabetScrollInfo& operator=(AlphabetScrollInfo const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AlphabetScrollInfo() ;

/// @brief Method .ctor addr 0x1f74a38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AlphabetScrollInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlphabetScrollInfo, "", "AlphabetScrollInfo");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AlphabetScrollInfo__Data);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AlphabetScrollInfo__Data, "", "AlphabetScrollInfo/Data");
