#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class LanguagePackInfo;
}
// Type: Oculus.Platform.Models::LanguagePackInfo
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13420))
// CS Name: Oculus.Platform.Models.LanguagePackInfo
class CORDL_TYPE LanguagePackInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LanguagePackInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguagePackInfo", modifiers: " const&", def_value: None }]
constexpr LanguagePackInfo(LanguagePackInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguagePackInfo", modifiers: "&&", def_value: None }]
constexpr LanguagePackInfo(LanguagePackInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LanguagePackInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LanguagePackInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LanguagePackInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LanguagePackInfo& operator=(LanguagePackInfo&& o) noexcept = default;
  constexpr LanguagePackInfo& operator=(LanguagePackInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_EnglishName, put=__set_EnglishName))  EnglishName;

constexpr void __set_EnglishName(::StringW value) ;

constexpr ::StringW __get_EnglishName() const;

 ::StringW __declspec(property(get=__get_NativeName, put=__set_NativeName))  NativeName;

constexpr void __set_NativeName(::StringW value) ;

constexpr ::StringW __get_NativeName() const;

 ::StringW __declspec(property(get=__get_Tag, put=__set_Tag))  Tag;

constexpr void __set_Tag(::StringW value) ;

constexpr ::StringW __get_Tag() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LanguagePackInfo(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259cb08 size 0x98 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LanguagePackInfo);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LanguagePackInfo, "Oculus.Platform.Models", "LanguagePackInfo");
