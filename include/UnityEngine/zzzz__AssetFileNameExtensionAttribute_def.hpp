#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine {
class AssetFileNameExtensionAttribute;
}
// Type: UnityEngine::AssetFileNameExtensionAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15860))
// CS Name: UnityEngine.AssetFileNameExtensionAttribute
class CORDL_TYPE AssetFileNameExtensionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AssetFileNameExtensionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileNameExtensionAttribute", modifiers: " const&", def_value: None }]
constexpr AssetFileNameExtensionAttribute(AssetFileNameExtensionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileNameExtensionAttribute", modifiers: "&&", def_value: None }]
constexpr AssetFileNameExtensionAttribute(AssetFileNameExtensionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetFileNameExtensionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssetFileNameExtensionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetFileNameExtensionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetFileNameExtensionAttribute& operator=(AssetFileNameExtensionAttribute&& o) noexcept = default;
  constexpr AssetFileNameExtensionAttribute& operator=(AssetFileNameExtensionAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__preferredExtension_k__BackingField, put=__set__preferredExtension_k__BackingField))  _preferredExtension_k__BackingField;

constexpr void __set__preferredExtension_k__BackingField(::StringW value) ;

constexpr ::StringW __get__preferredExtension_k__BackingField() const;

 System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=__get__otherExtensions_k__BackingField, put=__set__otherExtensions_k__BackingField))  _otherExtensions_k__BackingField;

constexpr void __set__otherExtensions_k__BackingField(System::Collections::Generic::IEnumerable_1<::StringW> value) ;

constexpr System::Collections::Generic::IEnumerable_1<::StringW> __get__otherExtensions_k__BackingField() const;


// Methods

static UnityEngine::AssetFileNameExtensionAttribute New_ctor(::StringW preferredExtension, ::ArrayW<::StringW> otherExtensions) ;

/// @brief Method .ctor addr 0x2ba0e5c size 0x2c virtual false final false
 void _ctor(::StringW preferredExtension, ::ArrayW<::StringW> otherExtensions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AssetFileNameExtensionAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetFileNameExtensionAttribute, "UnityEngine", "AssetFileNameExtensionAttribute");
