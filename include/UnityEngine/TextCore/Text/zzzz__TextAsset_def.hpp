#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextAsset;
}
// Type: UnityEngine.TextCore.Text::TextAsset
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13537))
// CS Name: UnityEngine.TextCore.Text.TextAsset
class CORDL_TYPE TextAsset : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TextAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: " const&", def_value: None }]
constexpr TextAsset(TextAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None }]
constexpr TextAsset(TextAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextAsset(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TextAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextAsset& operator=(TextAsset&& o) noexcept = default;
  constexpr TextAsset& operator=(TextAsset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(::StringW value) ;

constexpr ::StringW __get_m_Version() const;

 int32_t __declspec(property(get=__get_m_InstanceID, put=__set_m_InstanceID))  m_InstanceID;

constexpr void __set_m_InstanceID(int32_t value) ;

constexpr int32_t __get_m_InstanceID() const;

 int32_t __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode))  m_HashCode;

constexpr void __set_m_HashCode(int32_t value) ;

constexpr int32_t __get_m_HashCode() const;

 UnityEngine::Material __declspec(property(get=__get_m_Material, put=__set_m_Material))  m_Material;

constexpr void __set_m_Material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_Material() const;

 int32_t __declspec(property(get=__get_m_MaterialHashCode, put=__set_m_MaterialHashCode))  m_MaterialHashCode;

constexpr void __set_m_MaterialHashCode(int32_t value) ;

constexpr int32_t __get_m_MaterialHashCode() const;


// Properties

 ::StringW __declspec(property(get=get_version, put=set_version))  version;

 int32_t __declspec(property(get=get_instanceID))  instanceID;

 int32_t __declspec(property(get=get_hashCode, put=set_hashCode))  hashCode;

 UnityEngine::Material __declspec(property(get=get_material, put=set_material))  material;

 int32_t __declspec(property(get=get_materialHashCode, put=set_materialHashCode))  materialHashCode;


// Methods

/// @brief Method get_version addr 0x2bd2568 size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method set_version addr 0x2bd2570 size 0x8 virtual false final false
 void set_version(::StringW value) ;

/// @brief Method get_instanceID addr 0x2bd2160 size 0x28 virtual false final false
 int32_t get_instanceID() ;

/// @brief Method get_hashCode addr 0x2bd2188 size 0x30 virtual false final false
 int32_t get_hashCode() ;

/// @brief Method set_hashCode addr 0x2bd2578 size 0x8 virtual false final false
 void set_hashCode(int32_t value) ;

/// @brief Method get_material addr 0x2bd2580 size 0x8 virtual false final false
 UnityEngine::Material get_material() ;

/// @brief Method set_material addr 0x2bd2588 size 0x8 virtual false final false
 void set_material(UnityEngine::Material value) ;

/// @brief Method get_materialHashCode addr 0x2bd2590 size 0x98 virtual false final false
 int32_t get_materialHashCode() ;

/// @brief Method set_materialHashCode addr 0x2bd2628 size 0x8 virtual false final false
 void set_materialHashCode(int32_t value) ;

// Ctor Parameters []
explicit TextAsset() ;

/// @brief Method .ctor addr 0x2bd2630 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextAsset, "UnityEngine.TextCore.Text", "TextAsset");
