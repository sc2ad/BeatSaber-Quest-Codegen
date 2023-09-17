#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::Rendering {
struct PassType;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderVariantsSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ShaderVariantsSO__ShaderVariant;
}
namespace GlobalNamespace {
class ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant;
}
// Type: ::Variant
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15329))
// CS Name: ShaderVariantsSO::ShaderVariant::Variant
class CORDL_TYPE ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant() = default;

// Ctor Parameters [CppParam { name: "", ty: "______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant", modifiers: " const&", def_value: None }]
constexpr ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant(______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant", modifiers: "&&", def_value: None }]
constexpr ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant(______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant& operator=(______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant&& o) noexcept = default;
  constexpr ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant& operator=(______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Rendering::PassType __declspec(property(get=__get__passType, put=__set__passType))  _passType;

constexpr void __set__passType(::UnityEngine::Rendering::PassType value) ;

constexpr ::UnityEngine::Rendering::PassType __get__passType() const;

 ::StringW __declspec(property(get=__get__keywords, put=__set__keywords))  _keywords;

constexpr void __set__keywords(::StringW value) ;

constexpr ::StringW __get__keywords() const;


// Properties

 ::UnityEngine::Rendering::PassType __declspec(property(get=get_passType))  passType;

 ::StringW __declspec(property(get=get_keywords))  keywords;


// Methods

/// @brief Method get_passType addr 0x267a760 size 0x8 virtual false final false
 ::UnityEngine::Rendering::PassType get_passType() ;

/// @brief Method get_keywords addr 0x267a768 size 0x8 virtual false final false
 ::StringW get_keywords() ;

// Ctor Parameters [CppParam { name: "passType", ty: "::UnityEngine::Rendering::PassType", modifiers: "", def_value: None }, CppParam { name: "keywords", ty: "::StringW", modifiers: "", def_value: None }]
explicit ______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant(::UnityEngine::Rendering::PassType passType, ::StringW keywords) ;

/// @brief Method .ctor addr 0x267a770 size 0x30 virtual false final false
 void _ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ShaderVariant
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15330))
// CS Name: ShaderVariantsSO::ShaderVariant
class CORDL_TYPE ____GlobalNamespace__ShaderVariantsSO__ShaderVariant : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Variant = ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__ShaderVariantsSO__ShaderVariant() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShaderVariantsSO__ShaderVariant", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ShaderVariantsSO__ShaderVariant(____GlobalNamespace__ShaderVariantsSO__ShaderVariant const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShaderVariantsSO__ShaderVariant", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ShaderVariantsSO__ShaderVariant(____GlobalNamespace__ShaderVariantsSO__ShaderVariant&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ShaderVariantsSO__ShaderVariant(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ShaderVariantsSO__ShaderVariant& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ShaderVariantsSO__ShaderVariant& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ShaderVariantsSO__ShaderVariant& operator=(____GlobalNamespace__ShaderVariantsSO__ShaderVariant&& o) noexcept = default;
  constexpr ____GlobalNamespace__ShaderVariantsSO__ShaderVariant& operator=(____GlobalNamespace__ShaderVariantsSO__ShaderVariant const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> __declspec(property(get=__get__variants, put=__set__variants))  _variants;

constexpr void __set__variants(::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> value) ;

constexpr ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> __get__variants() const;

 ::UnityEngine::Shader __declspec(property(get=__get__shader, put=__set__shader))  _shader;

constexpr void __set__shader(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get__shader() const;


// Properties

 ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> __declspec(property(get=get_variants))  variants;

 ::UnityEngine::Shader __declspec(property(get=get_shader))  shader;


// Methods

/// @brief Method get_variants addr 0x267a724 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> get_variants() ;

/// @brief Method get_shader addr 0x267a72c size 0x8 virtual false final false
 ::UnityEngine::Shader get_shader() ;

// Ctor Parameters [CppParam { name: "shader", ty: "::UnityEngine::Shader", modifiers: "", def_value: None }, CppParam { name: "variants", ty: "::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ShaderVariantsSO__ShaderVariant(::UnityEngine::Shader shader, ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> variants) ;

/// @brief Method .ctor addr 0x267a734 size 0x2c virtual false final false
 void _ctor(::UnityEngine::Shader shader, ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> variants) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ShaderVariantsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15331))
// CS Name: ShaderVariantsSO
class CORDL_TYPE ShaderVariantsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using ShaderVariant = ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ShaderVariantsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO", modifiers: " const&", def_value: None }]
constexpr ShaderVariantsSO(ShaderVariantsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO", modifiers: "&&", def_value: None }]
constexpr ShaderVariantsSO(ShaderVariantsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderVariantsSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ShaderVariantsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderVariantsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderVariantsSO& operator=(ShaderVariantsSO&& o) noexcept = default;
  constexpr ShaderVariantsSO& operator=(ShaderVariantsSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> __declspec(property(get=__get__shaderVariants, put=__set__shaderVariants))  _shaderVariants;

constexpr void __set__shaderVariants(::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> __get__shaderVariants() const;


// Properties

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> __declspec(property(get=get_shaderVariants))  shaderVariants;


// Methods

/// @brief Method get_shaderVariants addr 0x267a70c size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> get_shaderVariants() ;

/// @brief Method Init addr 0x267a714 size 0x8 virtual false final false
 void Init(::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> shaderVariants) ;

// Ctor Parameters []
explicit ShaderVariantsSO() ;

/// @brief Method .ctor addr 0x267a71c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ShaderVariantsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderVariantsSO, "", "ShaderVariantsSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant, "", "ShaderVariantsSO/ShaderVariant");
NEED_NO_BOX(::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant, "", "ShaderVariantsSO/ShaderVariant/Variant");
