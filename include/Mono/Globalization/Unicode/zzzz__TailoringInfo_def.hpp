#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Mono::Globalization::Unicode {
class TailoringInfo;
}
// Type: Mono.Globalization.Unicode::TailoringInfo
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2259))
// CS Name: Mono.Globalization.Unicode.TailoringInfo
class CORDL_TYPE TailoringInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TailoringInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TailoringInfo", modifiers: " const&", def_value: None }]
constexpr TailoringInfo(TailoringInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TailoringInfo", modifiers: "&&", def_value: None }]
constexpr TailoringInfo(TailoringInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TailoringInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TailoringInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TailoringInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TailoringInfo& operator=(TailoringInfo&& o) noexcept = default;
  constexpr TailoringInfo& operator=(TailoringInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_LCID, put=__set_LCID))  LCID;

constexpr void __set_LCID(int32_t value) ;

constexpr int32_t __get_LCID() const;

 int32_t __declspec(property(get=__get_TailoringIndex, put=__set_TailoringIndex))  TailoringIndex;

constexpr void __set_TailoringIndex(int32_t value) ;

constexpr int32_t __get_TailoringIndex() const;

 int32_t __declspec(property(get=__get_TailoringCount, put=__set_TailoringCount))  TailoringCount;

constexpr void __set_TailoringCount(int32_t value) ;

constexpr int32_t __get_TailoringCount() const;

 bool __declspec(property(get=__get_FrenchSort, put=__set_FrenchSort))  FrenchSort;

constexpr void __set_FrenchSort(bool value) ;

constexpr bool __get_FrenchSort() const;


// Methods

static Mono::Globalization::Unicode::TailoringInfo New_ctor(int32_t lcid, int32_t tailoringIndex, int32_t tailoringCount, bool frenchSort) ;

/// @brief Method .ctor addr 0x22a7f14 size 0x44 virtual false final false
 void _ctor(int32_t lcid, int32_t tailoringIndex, int32_t tailoringCount, bool frenchSort) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(Mono::Globalization::Unicode::TailoringInfo);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::TailoringInfo, "Mono.Globalization.Unicode", "TailoringInfo");
