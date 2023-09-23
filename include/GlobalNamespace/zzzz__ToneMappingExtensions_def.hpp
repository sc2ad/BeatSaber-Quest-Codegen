#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct ToneMapping;
}
// Forward declare root types
namespace GlobalNamespace {
class ToneMappingExtensions;
}
// Type: ::ToneMappingExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14652))
// CS Name: ToneMappingExtensions
class CORDL_TYPE ToneMappingExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ToneMappingExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: " const&", def_value: None }]
constexpr ToneMappingExtensions(ToneMappingExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: "&&", def_value: None }]
constexpr ToneMappingExtensions(ToneMappingExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ToneMappingExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ToneMappingExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ToneMappingExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ToneMappingExtensions& operator=(ToneMappingExtensions&& o) noexcept = default;
  constexpr ToneMappingExtensions& operator=(ToneMappingExtensions const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get__shaderKeywordMap, put=__set__shaderKeywordMap))  _shaderKeywordMap;

static void __set__shaderKeywordMap(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get__shaderKeywordMap() ;


// Methods

/// @brief Method SetShaderKeyword addr 0x1f95f20 size 0x94 virtual false final false
static void SetShaderKeyword(GlobalNamespace::ToneMapping toneMapping) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ToneMappingExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ToneMappingExtensions, "", "ToneMappingExtensions");
