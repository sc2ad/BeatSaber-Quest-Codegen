#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
class EraInfo;
}
// Type: System.Globalization::EraInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3684))
// CS Name: System.Globalization.EraInfo
class CORDL_TYPE EraInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~EraInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "EraInfo", modifiers: " const&", def_value: None }]
constexpr EraInfo(EraInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EraInfo", modifiers: "&&", def_value: None }]
constexpr EraInfo(EraInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EraInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EraInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EraInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EraInfo& operator=(EraInfo&& o) noexcept = default;
  constexpr EraInfo& operator=(EraInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_era, put=__set_era))  era;

constexpr void __set_era(int32_t value) ;

constexpr int32_t __get_era() const;

 int64_t __declspec(property(get=__get_ticks, put=__set_ticks))  ticks;

constexpr void __set_ticks(int64_t value) ;

constexpr int64_t __get_ticks() const;

 int32_t __declspec(property(get=__get_yearOffset, put=__set_yearOffset))  yearOffset;

constexpr void __set_yearOffset(int32_t value) ;

constexpr int32_t __get_yearOffset() const;

 int32_t __declspec(property(get=__get_minEraYear, put=__set_minEraYear))  minEraYear;

constexpr void __set_minEraYear(int32_t value) ;

constexpr int32_t __get_minEraYear() const;

 int32_t __declspec(property(get=__get_maxEraYear, put=__set_maxEraYear))  maxEraYear;

constexpr void __set_maxEraYear(int32_t value) ;

constexpr int32_t __get_maxEraYear() const;

 ::StringW __declspec(property(get=__get_eraName, put=__set_eraName))  eraName;

constexpr void __set_eraName(::StringW value) ;

constexpr ::StringW __get_eraName() const;

 ::StringW __declspec(property(get=__get_abbrevEraName, put=__set_abbrevEraName))  abbrevEraName;

constexpr void __set_abbrevEraName(::StringW value) ;

constexpr ::StringW __get_abbrevEraName() const;

 ::StringW __declspec(property(get=__get_englishEraName, put=__set_englishEraName))  englishEraName;

constexpr void __set_englishEraName(::StringW value) ;

constexpr ::StringW __get_englishEraName() const;


// Methods

// Ctor Parameters [CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startMonth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startDay", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yearOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minEraYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxEraYear", ty: "int32_t", modifiers: "", def_value: None }]
explicit EraInfo(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear) ;

/// @brief Method .ctor addr 0x23f286c size 0x9c virtual false final false
 void _ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear) ;

// Ctor Parameters [CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startMonth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startDay", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yearOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minEraYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxEraYear", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eraName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "abbrevEraName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "englishEraName", ty: "::StringW", modifiers: "", def_value: None }]
explicit EraInfo(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, ::StringW eraName, ::StringW abbrevEraName, ::StringW englishEraName) ;

/// @brief Method .ctor addr 0x23f2908 size 0xb4 virtual false final false
 void _ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, ::StringW eraName, ::StringW abbrevEraName, ::StringW englishEraName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::EraInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::EraInfo, "System.Globalization", "EraInfo");
