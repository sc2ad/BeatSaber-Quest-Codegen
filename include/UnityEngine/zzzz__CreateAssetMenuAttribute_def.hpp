#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine {
class CreateAssetMenuAttribute;
}
// Type: UnityEngine::CreateAssetMenuAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10157))
// CS Name: UnityEngine.CreateAssetMenuAttribute
class CORDL_TYPE CreateAssetMenuAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CreateAssetMenuAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: " const&", def_value: None }]
constexpr CreateAssetMenuAttribute(CreateAssetMenuAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: "&&", def_value: None }]
constexpr CreateAssetMenuAttribute(CreateAssetMenuAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CreateAssetMenuAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CreateAssetMenuAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CreateAssetMenuAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CreateAssetMenuAttribute& operator=(CreateAssetMenuAttribute&& o) noexcept = default;
  constexpr CreateAssetMenuAttribute& operator=(CreateAssetMenuAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__menuName_k__BackingField, put=__set__menuName_k__BackingField))  _menuName_k__BackingField;

constexpr void __set__menuName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__menuName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__fileName_k__BackingField, put=__set__fileName_k__BackingField))  _fileName_k__BackingField;

constexpr void __set__fileName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__fileName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_menuName))  menuName;

 ::StringW __declspec(property(put=set_fileName))  fileName;


// Methods

/// @brief Method set_menuName addr 0x2b5b28c size 0x8 virtual false final false
 void set_menuName(::StringW value) ;

/// @brief Method set_fileName addr 0x2b5b294 size 0x8 virtual false final false
 void set_fileName(::StringW value) ;

// Ctor Parameters []
explicit CreateAssetMenuAttribute() ;

/// @brief Method .ctor addr 0x2b5b29c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::CreateAssetMenuAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CreateAssetMenuAttribute, "UnityEngine", "CreateAssetMenuAttribute");
